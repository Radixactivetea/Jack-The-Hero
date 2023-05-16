#include "sceneFive.h"
#include "sceneThree.h"
#include "isabelle.h"
#include <cstdlib>
#include <math.h>
#include <ctime>

float xFivePos = 250;
float yFivePos = 0;

float xFivePos2 = 350;
float yFivePos2 = 0;

bool reachedPoint = false;
bool blackFlash = false;
time_t startTime;

int isabelleTurn = 0;
bool help = false;

void timerFive(int value)
{
    help = true;
    glutPostRedisplay();
}

void jackFive()
{
    glPushMatrix();
    if(isabelleTurn == 1)
    {
        glTranslatef(xFivePos + 20,yFivePos - 30,0);
    }else if (isabelleTurn == 0)
    {
        glTranslatef(xFivePos,yFivePos,0);
    }
    glScalef(0.4,0.4,1);
    uglyBackJack(0);
    glPopMatrix();
}

void isabelleFive()
{
    glPushMatrix();
    glTranslatef(xFivePos2,yFivePos2,0);
    glScalef(0.4,0.4,1);
    if(isabelleTurn == 1)
    {
        frontIsabelle(1);
    }else if (isabelleTurn == 0)
    {
        backIsabelle(0);
    }
    
    glPopMatrix();
}

void helpIsabelle()
{
    glPushMatrix();
    glTranslatef(xFivePos,yFivePos,0);
    glScalef(0.4,0.4,1);
    uglyBackJack(0);
    glPopMatrix();


    glPushMatrix();
    glTranslatef(xFivePos,yFivePos + 30,0);
    glScalef(0.4,0.4,1);
    backIsabelle(0);
    glPopMatrix();
}

void bangEffect()
{
        // Draw the star-like spark
    const int numPoints = 10;  // Number of points in the star
    const float radius = 100.0;  // Radius of the star

    float centerX = 500.0;  // X-coordinate of the star center
    float centerY = 250.0;  // Y-coordinate of the star center

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);  // Center of the star

    for (int i = 0; i <= numPoints; ++i) {
        float angle = i * (360.0 / numPoints) * 3.14159 / 180.0;  // Angle for each point

        // Calculate the position of the outer points of the star
        float outerX = centerX + radius * cos(angle);
        float outerY = centerY + radius * sin(angle);
        glVertex2f(outerX, outerY);

        // Calculate the position of the inner points of the star
        float innerAngle = angle + (360.0 / numPoints / 2.0) * 3.14159 / 180.0;
        float innerX = centerX + (radius / 2.0) * cos(innerAngle);
        float innerY = centerY + (radius / 2.0) * sin(innerAngle);
        glVertex2f(innerX, innerY);
    }

    glEnd();
}

void blackBlank()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
	glVertex2i(0, 0);
	glVertex2i(0, 500);
	glVertex2i(1000, 500);
	glVertex2i(1000, 0);

	glEnd();

    glPushMatrix();
    glTranslatef(-500,-250,0);
    glColor3f(1.0, 0.0, 0.0);  // Set the color to red
    glScalef(2,2,1);
    bangEffect();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-400,-200,0);
    glColor3f(1, 0.651, 0);
    glScalef(1.8,1.8,1);
    bangEffect();
    glPopMatrix();

}

void moon()
{
    glColor3f(0.749, 0.749, 0.749);
    glPushMatrix();
    glTranslatef(400,450,0);
    circle(50);
    glPopMatrix();

    glColor3f(0.831, 0.831, 0.831);
    glPushMatrix();
    glTranslatef(400,450,0);
    circle(40);
    glPopMatrix();
}

void updateFive()
{
    if (!reachedPoint) {
        yFivePos2 += 0.1;
        yFivePos += 0.1;

        if (yFivePos >= 200) {
            reachedPoint = true;
            blackFlash = true;  // Set the flag to trigger the flash bang effect
            startTime = time(NULL);  // Record the start time of the flash bang
        }
    } else if (blackFlash) {
        time_t currentTime = time(NULL);
        double elapsedSeconds = difftime(currentTime, startTime);

        if (elapsedSeconds >= 2.0) {
            blackFlash = false;  // End the flash bang effect after 1 second
            isabelleTurn = true;
            glutTimerFunc(3000, timerFive, 0);
        }
    }

    if(help)
    {
        if(yFivePos < 260)
        {
            yFivePos2 += 0.1;
            yFivePos += 0.1;
        }
    }
}

void sceneFive()
{
    glClearColor(0, 0, 0, 0.5);
    glClear(GL_COLOR_BUFFER_BIT);

    terrain();

    moon();

	drawTree();

    if(help == false)
    {
        jackFive();
        isabelleFive();
    }else
    {
        helpIsabelle();
    }

    if(blackFlash)
    {
        blackBlank();
    }
}