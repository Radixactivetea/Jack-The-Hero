#include "sceneThree.h"
#include "sceneSix.h"
#include "isabelle.h"
#include <ctime>

float xSixPos = 250;
float ySixPos = 0;

float xSixPos2 = 350;
float ySixPos2 = 0;

bool arrived = false;
bool kiss = false;
bool love = false;
bool flash = false;
time_t startTime2;

void timerSix(int value)
{
    arrived = true;
    glutPostRedisplay();
}

void timerSix2(int value)
{
    kiss = true;
    glutPostRedisplay();
}

void timerSix3(int value)
{
    flash = true;
    glutPostRedisplay();
}

void timerSix4(int value)
{
    flash = false;
    glutPostRedisplay();
}

void jackSix()
{
    glPushMatrix();
    if(arrived)
    {
        glTranslatef(xSixPos,ySixPos + 20,0);
    }else
    {
        glTranslatef(xSixPos,ySixPos,0);
    }
    glScalef(0.4,0.4,1);
    if(arrived)
    {
        uglyFrontJack(0);
    }else if(!arrived)
    {
        uglyBackJack(0);
    }else if (flash)
    {
        frontJack();
    }
    glPopMatrix();
}

void isabelleSix()
{
    glPushMatrix();
    if(arrived)
    {
        glTranslatef(xSixPos2,ySixPos2,0);
    }else if(arrived == false)
    {
        glTranslatef(xSixPos,ySixPos + 30,0);
    }
    glScalef(0.4,0.4,1);
    backIsabelle(0);
    glPopMatrix();
}

void sunRise()
{
    glColor3f(1, 0.365, 0);
    glPushMatrix();
    glTranslatef(450,250,0);
    circle(60);
    glPopMatrix();
}

void loveDesign()
{
    glPushMatrix();
    glTranslatef(540,250,0);
    glColor3f(1,0,0);
    circle(50);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(460,250,0);
    glColor3f(1,0,0);
    circle(50);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
	glVertex2i(413.5, 230);
	glVertex2i(500, 130);
	glVertex2i(587.5, 230);
    glEnd();
}

void whiteFlash()
{
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_QUADS);
        glVertex2f(-1000, -1000);
        glVertex2f(-1000, 1000);
        glVertex2f(1000, 1000);
        glVertex2f(1000, -1000);
        glEnd();
}


void updateSix()
{
    if (ySixPos < 200)
    {
        ySixPos2 += 0.1;
        ySixPos += 0.1;
    }
    else
    {
        glutTimerFunc(1000, timerSix, 0);
    }

    if (arrived)
    {
        glutTimerFunc(2000, timerSix2, 0);
    }

    if (kiss)
    {
        kiss = false;
        if (xSixPos2 > 255)
        {
            xSixPos2 -= 0.1;
        }
        else
        {
            love = true;

            glutTimerFunc(2000, timerSix3, 0);
        }
    }

}

void sceneSix()
{
    glClearColor(0.553, 0.839, 0.831, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    sunRise();

    terrain();

    drawTree();

    
    if(flash)
    {
        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_QUADS);
        glVertex2f(-1000, -1000);
        glVertex2f(-1000, 1000);
        glVertex2f(1000, 1000);
        glVertex2f(1000, -1000);
        glEnd();
        
        glPushMatrix();
        glTranslatef(xSixPos,ySixPos + 20,0);
        glScalef(0.4,0.4,1);
        frontJack();
        glPopMatrix();
    }else
    {
        jackSix();
        isabelleSix();
    
    }


    if (love)
    {
        glPushMatrix();
        glTranslatef(350, 340, 0);
        glColor3f(1, 0, 0);
        glScalef(0.2, 0.2, 1);
        loveDesign();
        glPopMatrix();
    }
}