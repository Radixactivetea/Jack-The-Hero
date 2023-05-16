#include "villager.h"

void villagerFace(int faceReact)
{
    if(faceReact == 1)
    {
    //Eyes
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(470, 270);
    glVertex2i(490, 265);
    glVertex2i(490, 260);
    glVertex2i(470, 265);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex2i(510, 260);
    glVertex2i(530, 265);
    glVertex2i(530, 270);
    glVertex2i(510, 265);
    glEnd();
    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
    glVertex2i(485, 240);
    glVertex2i(515, 240);
    glVertex2i(515, 220);
    glVertex2i(485, 220);
    glEnd(); 
    }
    else if(faceReact == 0)
    {
    //Eyes
    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1,1,1);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(0, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1,1,1);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(0, 0, 0);
    circle(10);
    glPopMatrix();

    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
    }else if(faceReact == 2)
    {
    //Eyes
    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1,1,1);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(0, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1,1,1);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(0, 0, 0);
    circle(10);
    glPopMatrix();

    //mouth
    glPushMatrix();
    glTranslatef(500,230,0);
    glColor3f(1, 0.435, 0.435);
    circle(7);
    glPopMatrix();
    }
}

void villagerHead()
{
    //head
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(1, 0.89, 0.722);
    circle(50);
    glPopMatrix();
}

void villagerBody()
{
    glBegin(GL_POLYGON);
    glColor3f(0.722, 0.576, 0);
    glVertex2i(450, 100);
	glVertex2i(450, 250);
	glVertex2i(550, 250);
	glVertex2i(550, 100);
    glEnd();

    //hip
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2i(450, 100);
	glVertex2i(450, 128);
	glVertex2i(550, 128);
    glVertex2i(550, 100);
    glEnd();
}

void villagerHand()
{
    //hands
    glBegin(GL_POLYGON);
    glColor3f(1, 0.89, 0.722);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    //shoulder
    glBegin(GL_POLYGON);
    glColor3f(0.722, 0.776, 0);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 250);
    glVertex2i(490, 250);
    glEnd();
}

void villagerLeg()
{
    //leg
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2i(490, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    //shoes
    glBegin(GL_POLYGON);
    glColor3f(0.651, 0.639, 0.592);
	glVertex2i(487, 200);
	glVertex2i(513, 200);
	glVertex2i(513, 185);
    glVertex2i(487, 185);
    glEnd();
}

void frontvillager(int faceReact)
{   
    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    villagerHead();
    glPopMatrix();

    //Face
    glPushMatrix();
    glTranslatef(0,0,0);
    villagerFace(faceReact);
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    villagerBody();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    villagerHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    villagerHand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    villagerLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    villagerLeg();
    glPopMatrix();

}

void backvillager()
{
    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    villagerLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    villagerLeg();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    villagerHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    villagerHand();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    villagerBody();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    villagerHead();
    glPopMatrix();
}
