#include "monster.h"

void monsterHead()
{
    //Face
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(0.102, 0.78, 0.141);
    circle(50);
    glPopMatrix();

    //Eyes
    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1,0,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1,0,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
}

void monsterBody()
{
    glBegin(GL_POLYGON);
    glColor3f(0.184, 0.612, 0.208);
    glVertex2i(450, 100);
	glVertex2i(450, 250);
	glVertex2i(550, 250);
	glVertex2i(550, 100);
    glEnd();

    //hip
    glBegin(GL_POLYGON);
    glColor3f(0.031, 0, 0.42);
	glVertex2i(450, 100);
	glVertex2i(450, 128);
	glVertex2i(550, 128);
    glVertex2i(550, 100);
    glEnd();
}

void monsterHand()
{
    //hands
    glBegin(GL_POLYGON);
    glColor3f(0.102, 0.78, 0.141);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.102, 0.78, 0.141);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 250);
    glVertex2i(490, 250);
    glEnd();
}

void monsterLeg()
{
    //leg
    glBegin(GL_POLYGON);
    glColor3f(0.184, 0.612, 0.208);
	glVertex2i(490, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    //shoes
    glBegin(GL_POLYGON);
    glColor3f(0.102, 0.78, 0.141);
	glVertex2i(487, 200);
	glVertex2i(513, 200);
	glVertex2i(513, 185);
    glVertex2i(487, 185);
    glEnd();
}

void frontMonster()
{
    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    monsterHead();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    monsterBody();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    monsterHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    monsterHand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    monsterLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    monsterLeg();
    glPopMatrix();
}
