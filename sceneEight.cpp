#include "sceneEight.h"
#include "isabelle.h"


void jackEight()
{
    glPushMatrix();
    glTranslatef(150,100,0);
	glScalef(0.5,0.5,1);
	frontJack();
    glPopMatrix();
}

void issabelleEight()
{
    glPushMatrix();
    glTranslatef(350,100,0);
	glScalef(0.5,0.5,1);
	frontIsabelle(0);
    glPopMatrix();
}

void bigPoles()
{
    glBegin(GL_POLYGON);
    glColor3f(0.463, 0.549, 0.78);
	glVertex2f(110, 180);
	glVertex2f(190, 180);
	glVertex2f(190, 500);
	glVertex2f(110, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.624, 0.463);
	glVertex2f(100, 150);
	glVertex2f(200, 150);
	glVertex2f(200, 230);
	glVertex2f(100, 230);
    glEnd();
}

void displayPoles()
{
    glPushMatrix();
    glTranslatef(0,0,0);
    bigPoles();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(700,0,0);
    bigPoles();
    glPopMatrix();
}

void curtain()
{
    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.624, 0.463);
	glVertex2f(0, 500);
	glVertex2f(1000, 500);
	glVertex2f(1000, 470);
	glVertex2f(0, 470);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.345, 0.271, 1);
	glVertex2f(300, 180);
	glVertex2f(700, 180);
	glVertex2f(700, 500);
	glVertex2f(300, 500);
    glEnd();
}

void chair()
{
    glBegin(GL_POLYGON);
    glColor3f(0.522, 0.443, 0.812);
	glVertex2f(310, 120);
	glVertex2f(390, 120);
	glVertex2f(390, 250);
	glVertex2f(310, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1);
	glVertex2f(310, 185);
	glVertex2f(390, 185);
	glVertex2f(390, 240);
	glVertex2f(310, 240);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.761, 0.761, 0.549);
	glVertex2f(320, 165);
	glVertex2f(380, 165);
	glVertex2f(380, 250);
	glVertex2f(320, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2f(310, 100);
	glVertex2f(330, 100);
	glVertex2f(330, 120);
	glVertex2f(310, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2f(370, 100);
	glVertex2f(390, 100);
	glVertex2f(390, 120);
	glVertex2f(370, 120);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2f(310, 180);
	glVertex2f(330, 180);
	glVertex2f(330, 185);
	glVertex2f(310, 185);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2f(370, 180);
	glVertex2f(390, 180);
	glVertex2f(390, 185);
	glVertex2f(370, 185);
    glEnd();
}

void displayChair()
{
    glPushMatrix();
    glTranslatef(90,0,0);
    chair();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(210,0,0);
    chair();
    glPopMatrix();
}

void sceneEight()
{
    glClearColor(0.812, 0.804, 0.443, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.82, 0.82, 0.82);
	glVertex2i(0, 0);
	glVertex2i(0, 150);
	glVertex2i(1000, 150);
	glVertex2i(1000, 0);
    glEnd();

    displayPoles();

    curtain();

    displayChair();


    jackEight();
    issabelleEight();
}