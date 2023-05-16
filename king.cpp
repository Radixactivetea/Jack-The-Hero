#include "king.h"
#include "monster.h"
void kingHair()
{
    //crown
    glBegin(GL_POLYGON);
    glColor3f(1, 0.937, 0);
	glVertex2i(450, 320);
	glVertex2i(550, 320);
	glVertex2i(550, 280);
    glVertex2i(450, 280);
    glEnd();

}

void kingHead(int value)
{
    //Face
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(1, 0.89, 0.722);
    circle(50);
    glPopMatrix();

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
    
    if(value == 0){
    //Sad
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
    glVertex2i(480, 230);
    glVertex2i(520, 230);
    glVertex2i(520, 225);
    glVertex2i(480, 225);
    glEnd();
    }
    else if(value == 1)
    {
    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
    }

    //Tears
    if(value == 0)
    {
        glPushMatrix();
        glTranslatef(480,240,0);
        glColor3f(0,0,1);
        circle(3);
        glPopMatrix();
    }
}

void kingBody()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(450, 100);
	glVertex2i(450, 250);
	glVertex2i(550, 250);
	glVertex2i(550, 100);
    glEnd();

    //hip
    glBegin(GL_POLYGON);
    glColor3f(1, 0.937, 0);
	glVertex2i(450, 100);
	glVertex2i(450, 128);
	glVertex2i(550, 128);
    glVertex2i(550, 100);
    glEnd();
}

void kingHand()
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
    glColor3f(1, 0.937, 0);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 250);
    glVertex2i(490, 250);
    glEnd();
}

 void kingLeg()
{
    //leg
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
	glVertex2i(490, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    //shoes
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2i(487, 200);
	glVertex2i(513, 200);
	glVertex2i(513, 185);
    glVertex2i(487, 185);
    glEnd();
}

void frontKing(int value)
{
    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    kingHead(value);
    glPopMatrix();

    //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    kingHair();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    kingBody();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    kingHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    kingHand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    kingLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    kingLeg();
    glPopMatrix();
}

