#include <math.h>
#include "jack.h"

#define PI 3.1416

GLint i;

void circle(GLdouble rad) //for leaf first tree
{
	GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}



void hair()
{
    // hair
    glPushMatrix();
    glTranslatef(500,260,0);
    glColor3f(0, 0, 0);
    circle(50);
    glPopMatrix();
}

void head()
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

    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
}

void uglyHead(int mouth)
{
     //Face
    glPushMatrix();
    glTranslatef(500,250,0);
    glColor3f(0.439, 0.369, 0.082);
    circle(50);
    glPopMatrix();


    if(mouth == 2)
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
    }else
    {
        //Eyes
    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(520,260,0);
    glColor3f(1, 0, 0);
    circle(10);
    glPopMatrix();

    }
    
    if(mouth == 0){
    //Mouth
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
	glVertex2i(485, 240);
	glVertex2i(500, 220);
	glVertex2i(515, 240);
    glEnd();
    }
    else if(mouth == 1)
    {
    //Mouth
    //Sad
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
    glVertex2i(480, 240);
    glVertex2i(520, 240);
    glVertex2i(520, 235);
    glVertex2i(480, 235);
    glEnd();
    }
    else if(mouth == 2)
    {
    //Mouth
    //Angry
    glBegin(GL_POLYGON);
    glColor3f(1, 0.435, 0.435);
    glVertex2i(485, 240);
    glVertex2i(515, 240);
    glVertex2i(515, 220);
    glVertex2i(485, 220);
    glEnd(); 
    }
}

void body()
{
    glBegin(GL_POLYGON);
    glColor3f(0.498, 0, 0.671);
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

void hand()
{
    //hands
    glBegin(GL_POLYGON);
    glColor3f(1, 0.89, 0.722);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.498, 0.2, 0.671);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 250);
    glVertex2i(490, 250);
    glEnd();
}

void uglyHand()
{
    //hands
    glBegin(GL_POLYGON);
    glColor3f(0.439, 0.369, 0.082);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 200);
    glVertex2i(490, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.498, 0.2, 0.671);
	glVertex2i(490, 262);
	glVertex2i(510, 262);
	glVertex2i(510, 250);
    glVertex2i(490, 250);
    glEnd();
}

void leg()
{
    //leg
    glBegin(GL_POLYGON);
    glColor3f(0.031, 0, 0.42);
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


//draw part
void uglyBackJack(int mouth)
{
        //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    uglyHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    uglyHand();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    body();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    uglyHead(mouth);
    glPopMatrix();

     //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    hair();
    glPopMatrix();
}

void uglyFrontJack(int mouth)
{
    //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    hair();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    uglyHead(mouth);
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    body();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    uglyHand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    uglyHand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();
}

void backJack()
{
        //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    hand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    hand();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    body();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    head();
    glPopMatrix();

     //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    hair();
    glPopMatrix();
}

void frontJack()
{
    //hair
    glPushMatrix();
    glTranslatef(0,0,0);
    hair();
    glPopMatrix();

    //Head
    glPushMatrix();
    glTranslatef(0,0,0);
    head();
    glPopMatrix();

    //body
    glPushMatrix();
    glTranslatef(0,-52, 0);
    body();
    glPopMatrix();

    //hand
    glPushMatrix();
    glTranslatef(-440,-320, 0);
    glScalef(2,2,1);
    hand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-560,-320, 0);
    glScalef(2,2,1);
    hand();
    glPopMatrix();

    //leg
    glPushMatrix();
    glTranslatef(-530,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-470,-451, 0);
    glScalef(2,2,1);
    leg();
    glPopMatrix();
}