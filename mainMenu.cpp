#include <string>
#include "mainMenu.h"
#include "jack.h"

void field()
{
    //Field
	glBegin(GL_POLYGON);
    glColor3f(0.533, 1.293, 0.0);
	glVertex2i(0, 50);
	glVertex2i(0, 70);
	glVertex2i(1000, 70);
	glVertex2i(1000, 50);

	glEnd();

    //Field_Shadow
	glBegin(GL_POLYGON);
	glColor3f(0.1, 1.293, 0.0);
	glVertex2i(0, 0);
	glVertex2i(0, 50);
	glVertex2i(1000, 50);
	glVertex2i(1000, 0);

	glEnd();
}

void title()
{
    // Draw the main menu
    glColor3f(1.0, 1.0, 1.0); // Set text color to white
    glRasterPos2f(435, 400); // Set the position for the text

    std::string title = "JACK THE HERO"; // The title text
    for (char c : title) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c); // Render each character of the title
    }
}

void displayHill()
{
    glPushMatrix();
    glTranslatef(550,-20,0);
    hill();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,0);
    hill();
    glPopMatrix();
}

void hill()
{
    ///Hill
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(70, 70);
	glVertex2i(200, 225);
	glVertex2i(330, 70);

	glEnd();

	///Hill_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

	glVertex2i(200, 225);
	glVertex2i(230, 190);
	glVertex2i(220, 180);
	glVertex2i(200, 190);
	glVertex2i(190, 180);
	glVertex2i(170, 190);

	glEnd();
}

void mainMenu()
{
    //Make a 
    glClearColor(0.5, 0.7, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    field();
    displayHill();
    title();

    frontJack();
}