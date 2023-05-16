#include "sceneOne.h"
#include "jack.h"
#include "villager.h"

int villFace = 0;
int jackFace = 0;
int jackMove = 0;

float xPos = -200;
float yPos = 0;
float speed = 0.2;

void timer(int value) 
{
	villFace = 1;
	jackMove = 1;
    glutPostRedisplay();
}

void Jack()
{
	glPushMatrix();
    glTranslatef(xPos,yPos,0);
	glScalef(0.5,0.5,1);
	uglyFrontJack(jackFace);
    glPopMatrix();
}

void Villager()
{
	//first
	glPushMatrix();
    glTranslatef(300,200,0);
	glScalef(0.5,0.5,1);
    frontvillager(villFace);
    glPopMatrix();

	//second
	glPushMatrix();
    glTranslatef(250,170,0);
	glScalef(0.5,0.5,1);
	if(villFace == 0)
	{
		backvillager();
	}
	else{
		frontvillager(villFace);
	}
    glPopMatrix();

	//third
	glPushMatrix();
    glTranslatef(150,170,0);
	glScalef(0.5,0.5,1);
	if(villFace == 0)
	{
		backvillager();
	}
	else{
		frontvillager(villFace);
	}
    glPopMatrix();
}

void house()
{
	//first house
	//body
	glBegin(GL_POLYGON);
	glColor3f(0.275, 0.322, 0.612);
	glVertex2i(60, 100);
	glVertex2i(750, 250);
	glVertex2i(750, 435);
	glVertex2i(60, 467);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.224, 0.263, 0.506);
	glVertex2i(0, 122);
	glVertex2i(60, 100);
	glVertex2i(60, 350);
	glVertex2i(0, 470);

	glEnd();

	//roof
	glBegin(GL_POLYGON);
	glColor3f(0.506, 0.224, 0.224);
	glVertex2i(-20, 470);
	glVertex2i(750, 435);
	glVertex2i(810, 376);
	glVertex2i(40, 350);

	glEnd();

	//window
	glBegin(GL_POLYGON);
	glColor3f(0.91, 0.91, 0.91);
	glVertex2i(100, 200);
	glVertex2i(300, 228);
	glVertex2i(300, 314);
	glVertex2i(100, 300);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.91, 0.91, 0.91);
	glVertex2i(600, 271);
	glVertex2i(700, 285);
	glVertex2i(700, 345);
	glVertex2i(600, 336);
	glEnd();

	//door
	glBegin(GL_POLYGON);
	glColor3f(0.592, 0.671, 0.831);
	glVertex2i(400, 180);
	glVertex2i(500, 200);
	glVertex2i(500, 329);
	glVertex2i(400, 321);
	glEnd();
	
	//second house
	glBegin(GL_POLYGON);
	glColor3f(0.722, 0.722, 0.698);
	glVertex2i(1000, -37);
	glVertex2i(627, 100);
	glVertex2i(627, 500);
	glVertex2i(1000, 500);

	glEnd();
	
	//beam
	glBegin(GL_POLYGON);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2i(623, 430);
	glVertex2i(1000, 443);
	glVertex2i(1000, 463);
	glVertex2i(623, 450);

	glEnd();
}

void backGround()
{
    //road
	glBegin(GL_POLYGON);
    glColor3f(0.8117647,0.6, 0.2745098);
	glVertex2i(0, 0);
	glVertex2i(0, 250);
	glVertex2i(1000, 250);
	glVertex2i(1000, 0);

	glEnd();
}

void updateOne()
{
	if(xPos < 0)
	{
		xPos += speed;
	}else{
		glutTimerFunc(500, timer, 0);
	}

	if(jackMove == 1)
	{
		jackFace = 1;
		xPos += speed;
	}

    glutPostRedisplay();
}

void sceneOne()
{
    // draw blue sky
    glClearColor(0.5, 0.7, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    backGround();
	house();

	Villager();
	Jack();
}