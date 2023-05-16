#include "sceneFour.h"
#include "monster.h"

float xFourPos = -250;
float yFourPos = 100;
float fourSpeed = 0.1;

float xFourPos2 = 400;
float yFourPos2 = 600;
float fourSpeed2 = 0.2;

float xFourPos3 = -50;
float yFourPos3 = 0;

bool monsterMove = false;
int jackAngry = 0;
bool power = false;

void timerFour(int value)
{
    monsterMove = true;
    jackAngry = 2;
}

void jackFour()
{
    glPushMatrix();
    glTranslatef(xFourPos,yFourPos,0);
    glScalef(0.5,0.5,1);
    uglyFrontJack(jackAngry);
    glPopMatrix();
}

void monsterFour()
{
    glPushMatrix();
    glTranslatef(xFourPos2,yFourPos2,0);
    glScalef(0.7,0.7,1);
    frontMonster();
    glPopMatrix();
}

void powerLight()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 0.725, 0);
	glVertex2f(380, 550);
	glVertex2f(620, 550);
	glVertex2f(620, 1160);
	glVertex2f(380, 1160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.984, 0);
	glVertex2f(400, 550);
	glVertex2f(600, 550);
	glVertex2f(600, 1160);
	glVertex2f(400, 1160);
    glEnd();
}

void door()
{
    glPushMatrix();
    glTranslatef(500,360,0);
    circle(120);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.49, 0.49);
	glVertex2f(380, 150);
	glVertex2f(620, 150);
	glVertex2f(620, 360);
	glVertex2f(380, 360);
    glEnd();

    glPushMatrix();
    glTranslatef(500,360,0);
    glColor3f(1, 0.831, 0.643);
    circle(100);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.831, 0.6430);
	glVertex2f(400, 150);
	glVertex2f(600, 150);
	glVertex2f(600, 360);
	glVertex2f(400, 360);
    glEnd();
}

void window()
{
    glPushMatrix();
    glTranslatef(250,410,0);
    circle(50);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.831, 0.643);
	glVertex2f(200, 410);
	glVertex2f(300, 410);
	glVertex2f(300, 310);
	glVertex2f(200, 310);
    glEnd();

    //window stand
    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.49, 0.49);
	glVertex2f(200, 310);
	glVertex2f(300, 310);
	glVertex2f(300, 320);
	glVertex2f(200, 320);
    glEnd();
}

void background()
{
    //Door
    glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(0,0,0);
    door();
    glPopMatrix();

    //windows
    glColor3f(1, 0.831, 0.643);
    glPushMatrix();
    glTranslatef(0,0,0);
    window();
    glPopMatrix();

    glColor3f(1, 0.831, 0.643);
    glPushMatrix();
    glTranslatef(500,0,0);
    window();
    glPopMatrix();

    //pole
    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.49, 0.49);
	glVertex2f(50, 150);
	glVertex2f(100, 150);
	glVertex2f(100, 500);
	glVertex2f(50, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.49, 0.49, 0.49);
	glVertex2f(900, 150);
	glVertex2f(950, 150);
	glVertex2f(950, 500);
	glVertex2f(900, 500);
    glEnd();

    //detail for pole
    glBegin(GL_POLYGON);
    glColor3f(0.859, 0.859, 0.859);
	glVertex2f(50, 250);
	glVertex2f(100, 250);
	glVertex2f(100, 260);
	glVertex2f(50, 260);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.859, 0.859, 0.859);
	glVertex2f(900, 250);
	glVertex2f(950, 250);
	glVertex2f(950, 260);
	glVertex2f(900, 260);
    glEnd();
}

void floor()
{
    glBegin(GL_POLYGON);
    glColor3f(0.188, 0.188, 0.188);
	glVertex2i(0, 0);
	glVertex2i(0, 150);
	glVertex2i(1000, 150);
	glVertex2i(1000, 0);
    glEnd();
}


void updateFour()
{   
    if(xFourPos < 0)
    {
        xFourPos += fourSpeed;
        yFourPos2 -= fourSpeed2;

        
    }else{
        glutTimerFunc(500, timerFour, 0);
    }   

    if(monsterMove)
    {
        if(xFourPos2 > 100)
        {
            xFourPos2 -= fourSpeed;
        }else
        {
            if(xFourPos < 700)
            {
                xFourPos += 0.8;
            }else
            {
                power = true;
                if(yFourPos3 > -650)
                {
                    yFourPos3 -= 0.2;
                }else
                {
                    yFourPos2 -= 0.2;
                    yFourPos3 -= 0.2;
                }   
            }
        }
    }



}

void sceneFour()
{
    glClearColor(0.322, 0.322, 0.322, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    floor();
    background();

    jackFour();
    monsterFour();

    if(power)
    {
        glPushMatrix();
        glTranslatef(xFourPos3,yFourPos3,0);
        powerLight();
        glPopMatrix();
    }
}