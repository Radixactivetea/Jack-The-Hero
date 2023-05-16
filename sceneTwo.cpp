#include <string>
#include "sceneTwo.h"
#include "jack.h"

float xTwoPos = -600;
float yTwoPos = 0;
float twoSpeed = 0.2;

int twoMove = 0;

void timerTwo(int value)
{
    twoMove = 1;
    glutPostRedisplay();
}

void jackTwo()
{
    glPushMatrix();
    glTranslatef(xTwoPos,0,0);
    uglyBackJack(0);
    glPopMatrix();
}

void brick()
{
	glBegin(GL_POLYGON);
    glColor3f(0.329, 0.329, 0.329);
	glVertex2i(100, 100);
	glVertex2i(200, 100);
	glVertex2i(200, 150);
	glVertex2i(100, 150);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.631, 0.631, 0.631);
	glVertex2i(101, 101);
	glVertex2i(200, 101);
	glVertex2i(200, 150);
	glVertex2i(101, 150);
	glEnd();
}

void poster()
{
    //main
    glBegin(GL_POLYGON);
    glColor3f(1, 0.882, 0.478);
	glVertex2i(300, 390);
	glVertex2i(700, 390);
	glVertex2i(700, 200);
	glVertex2i(300, 200);

	glEnd();

    //scroll left
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
	glVertex2i(250, 390);
	glVertex2i(300, 390);
	glVertex2i(300, 200);
	glVertex2i(250, 200);

	glEnd();

    //scroll right
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
	glVertex2i(700, 390);
	glVertex2i(750, 390);
	glVertex2i(750, 200);
	glVertex2i(700, 200);

	glEnd();
}

void wall()
{
	//beam
    glBegin(GL_POLYGON);
    glColor3f(0.412, 0.412, 0.412);
	glVertex2i(0, 400);
	glVertex2i(1000, 400);
	glVertex2i(1000, 440);
	glVertex2i(0, 440);

	glEnd();

	//brick
	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(0,0,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(500,160,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(600,400,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(200,30,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(400,400,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(700,70,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(800,0,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(-100,150,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(-100,-120,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(505,70,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(750,200,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(550,-40,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(350,-70,0);
    brick();
    glPopMatrix();

	glColor3f(0.49, 0.49, 0.49);
    glPushMatrix();
    glTranslatef(100,200,0);
    brick();
    glPopMatrix();
}

void titlePoster()
{
    glColor3f(0, 0, 0); // Set text color to white
    glRasterPos2f(430, 360); // Set the position for the text

    std::string title = "ANNOUNCEMENT!!!"; // The title text
    for (char c : title) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c); // Render each character of the title
    }
    glRasterPos2f(310, 340);
    std::string title2 = "PRINCESS ISSABELLA WAS BEING KIDNAPPED BY"; // The title text
    for (char c2 : title2) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c2); // Render each character of the title
    }
    glRasterPos2f(450, 320);
    std::string title3 = "THE MONSTER."; // The title text
    for (char c3 : title3) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c3); // Render each character of the title
    }
    glRasterPos2f(300, 300);
    std::string title4 = "WHOEVER PERSON THAT WILLING TO RESCUE THE"; // The title text
    for (char c4 : title4) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c4); // Render each character of the title
    }
    glRasterPos2f(310, 280);
    std::string title5 = "PRINCESS WILL BE REWARDED BY KING EDWARD"; // The title text
    for (char c5 : title5) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c5); // Render each character of the title
    }
}

void updateTwo()
{
    if(xTwoPos < 0)
    {
        xTwoPos += twoSpeed;
    }else{
        glutTimerFunc(5000, timerTwo, 0);
    }
    
    if (twoMove == 1){
        xTwoPos += twoSpeed;
    }

    glutPostRedisplay();
}

void sceneTwo()
{
    // set background color to black
    glClearColor(0.722, 0.722, 0.698, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    wall();
    poster();
    titlePoster();

    jackTwo();
}