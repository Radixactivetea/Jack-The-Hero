#include "sceneSeven.h"
#include "sceneNine.h"
#include "villager.h"
#include "isabelle.h"

float xPosNine = -200;
float yPosNine = 100;

int villReact = 0;

void jackNine()
{
    glPushMatrix();
    glTranslatef(600,100,0);
	glScalef(0.5,0.5,1);
	frontJack();
    glPopMatrix();
}

void isabelleNine()
{
    glPushMatrix();
    glTranslatef(500,100,0);
	glScalef(0.5,0.5,1);
	frontIsabelle(0);
    glPopMatrix();
}

void villagerNine()
{
    glPushMatrix();
    glTranslatef(xPosNine,yPosNine,0);
	glScalef(0.5,0.5,1);
    frontvillager(villReact);
    glPopMatrix();
}

void timerNine(int value)
{
    villReact = 2;
    glutPostRedisplay();
}

void updateNine()
{
    if(xPosNine < 400)
    {
        xPosNine += 0.3;
    }else
    {
        glutTimerFunc(1000, timerNine, 0);
    }
}

void sceneNine()
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

    jackNine();
    isabelleNine();
    villagerNine();
}