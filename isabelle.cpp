#include "isabelle.h"

void isabelleHair()
{
        //hair
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(0.761, 0.494, 0);
    circle(55);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.761, 0.494, 0);
	glVertex2i(445, 250);
	glVertex2i(555, 250);
	glVertex2i(555, 150);
    glVertex2i(445, 150);
    glEnd();

}

void isabelleHead(int face)
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

    if(face == 0){
    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
    }
    else if(face == 1)
    {
    //Mouth
    //Sad
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(480, 230);
    glVertex2i(520, 230);
    glVertex2i(520, 225);
    glVertex2i(480, 225);
    glEnd();
    }

    //Tears
    if(face == 1)
    {
        glPushMatrix();
        glTranslatef(480,240,0);
        glColor3f(0,0,1);
        circle(3);
        glPopMatrix();
    }
}

void isabelleBody()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0.89, 0.722);
    glVertex2i(440, 150);
	glVertex2i(440, 250);
	glVertex2i(560, 250);
	glVertex2i(560, 150);
    glVertex2i(590, 100);
    glVertex2i(410, 100);
    glEnd();
}

void isabelleHand()
{
    //shoulder
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(0, 0.89, 0.722);
    circle(10);
    glPopMatrix();

    //hands
    glBegin(GL_POLYGON);
    glColor3f(1, 0.89, 0.722);
	glVertex2i(490, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();
}

void isabelleLeg()
{
    //leg
    glBegin(GL_POLYGON);
    glColor3f(1, 0.89, 0.722);
	glVertex2i(490, 250);
	glVertex2i(510, 250);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    //shoes
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 1);
	glVertex2i(487, 200);
	glVertex2i(513, 200);
	glVertex2i(513, 185);
    glVertex2i(487, 185);
    glEnd();
}

void backIsabelle(int face)
{
    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    isabelleLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    isabelleLeg();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    isabelleHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    isabelleHand();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    isabelleBody();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    isabelleHead(face);
    glPopMatrix();

    //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    isabelleHair();
    glPopMatrix();
}

void frontIsabelle(int face)
{
    //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    isabelleHair();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    isabelleHead(face);
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    isabelleBody();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    isabelleHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    isabelleHand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    isabelleLeg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    isabelleLeg();
    glPopMatrix();

    if(face == 1)
    {
        //injured
        glPushMatrix();
        glTranslatef(-470,-451, 0);
        glScalef(2,2,1);
        {
            glBegin(GL_POLYGON);
            glColor3f(1, 0, 0);
	        glVertex2i(490, 220);
	        glVertex2i(510, 220);
	        glVertex2i(510, 230);
            glVertex2i(490, 230);
            glEnd();
        }
        glPopMatrix();
    }   
}