#include "sceneSeven.h"
#include "king.h"
#include "isabelle.h"

float xPosSeven = -200;
float yPosSeven = 100;

float xPosSeven2 = 600;
float yPosSeven2 = 100;

int kingHappy = 0;

void jackSeven()
{
    glPushMatrix();
    glTranslatef(xPosSeven,yPosSeven,0);
	glScalef(0.5,0.5,1);
	frontJack();
    glPopMatrix();
}

void isabelleSeven()
{
    glPushMatrix();
    glTranslatef(xPosSeven + 100,yPosSeven,0);
	glScalef(0.5,0.5,1);
	frontIsabelle(0);
    glPopMatrix();

}

void kingSeven()
{
    glPushMatrix();
    glTranslatef(xPosSeven2,yPosSeven2,0);
	glScalef(0.5,0.5,1);
	frontKing(kingHappy);
    glPopMatrix();
}

void timerSeven(int value)
{
    kingHappy = 1;
    glutPostRedisplay();
}

void windows()
{
    glPushMatrix();
    glTranslatef(500,360,0);
    glColor3f(1, 0.784, 0);
    circle(60);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.784, 0);
	glVertex2f(440, 200);
	glVertex2f(560, 200);
	glVertex2f(560, 360);
	glVertex2f(440, 360);
    glEnd();

    glPushMatrix();
    glTranslatef(500,360,0);
    glColor3f(0.69, 0.929, 1);
    circle(50);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.69, 0.929, 1);
	glVertex2f(450, 210);
	glVertex2f(550, 210);
	glVertex2f(550, 360);
	glVertex2f(450, 360);
    glEnd();

    //bingkai
    glBegin(GL_POLYGON);
    glColor3f(1, 0.784, 0);
	glVertex2f(495, 210);
	glVertex2f(505, 210);
	glVertex2f(505, 420);
	glVertex2f(495, 420);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.784, 0);
	glVertex2f(450, 253);
	glVertex2f(550, 253);
	glVertex2f(550, 263);
	glVertex2f(450, 263);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.784, 0);
	glVertex2f(450, 306);
	glVertex2f(550, 306);
	glVertex2f(550, 316);
	glVertex2f(450, 316);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.784, 0);
	glVertex2f(450, 360);
	glVertex2f(550, 360);
	glVertex2f(550, 370);
	glVertex2f(450, 370);
    glEnd();   
}

void poles()
{
    glBegin(GL_POLYGON);
    glColor3f(0.463, 0.549, 0.78);
	glVertex2f(285, 180);
	glVertex2f(315, 180);
	glVertex2f(315, 500);
	glVertex2f(285, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.624, 0.463);
	glVertex2f(280, 150);
	glVertex2f(320, 150);
	glVertex2f(320, 180);
	glVertex2f(280, 180);
    glEnd();
}

void drawWindows()
{
    glPushMatrix();
    glTranslatef(0,0,0);
    windows();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-400,0,0);
    windows();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,0,0);
    windows();
    glPopMatrix();
}

void drawPoles()
{
    glPushMatrix();
    glTranslatef(0,0,0);
    poles();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,0,0);
    poles();
    glPopMatrix();

    //beam
    glBegin(GL_POLYGON);
    glColor3f(0.78, 0.624, 0.463);
	glVertex2f(0, 500);
	glVertex2f(1000, 500);
	glVertex2f(1000, 470);
	glVertex2f(0, 470);
    glEnd();
}

void updateSeven()
{
    if(xPosSeven < 300)
    {
        xPosSeven += 0.2;
    }else
    {
        glutTimerFunc(1000, timerSeven, 0);
    }
}

void sceneSeven()
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

    drawWindows();
    drawPoles();


    jackSeven();
    isabelleSeven();
    kingSeven();
}