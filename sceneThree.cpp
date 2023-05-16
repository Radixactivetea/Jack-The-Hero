#include "sceneThree.h"
#include "jack.h"

float xThreePos = 300;
float yThreePos = 270;
float ThreeSpeed = 0.2;

void jackThree()
{
    glPushMatrix();
    glTranslatef(xThreePos,yThreePos,0);
    glScalef(0.4,0.4,1);
    uglyFrontJack(0);
    glPopMatrix();
}

void triangleLeaf()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.192, 0.361, 0);
    glVertex2f(100, 170);
	glVertex2f(200, 170);
	glVertex2f(150, 220);
    glEnd();
}

void sun()
{
    glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(400,450,0);
    circle(60);
    glPopMatrix();

    glColor3f(1, 0.365, 0);
    glPushMatrix();
    glTranslatef(400,450,0);
    circle(50);
    glPopMatrix();
}

void treeOne()
{
    //leaf
	glPushMatrix();
    glTranslatef(110,250,0);
    circle(50);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110,200,0);
    glColor3f(0.533, 1.293, 0.0);
    circle(50);
    glPopMatrix();

    //wood
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(100, 70);
	glVertex2f(100, 150);
	glVertex2f(120, 150);
	glVertex2f(120, 70);

    glEnd();
}

void treeTwo()
{
    //leaf
 	glPushMatrix();
    glTranslatef(0,-30,0);
    triangleLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,0);
    triangleLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,30,0);
    triangleLeaf();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,60,0);
    triangleLeaf();
    glPopMatrix();

    //body wood
    glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2f(145, 70);
	glVertex2f(145, 140);
	glVertex2f(155, 140);
	glVertex2f(155, 70);

    glEnd();   
}

void drawTree()
{
    { //Left
    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(-100,165,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(-0,165,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(73,165,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(102,165,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(10,65,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(200,65,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(-43,65,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(40,-30,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(100,-30,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(-100,-30,0);
    treeTwo();
    glPopMatrix();
    }

    { //Right
    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(515,165,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(732,165,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(568,165,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(805,165,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(660,65,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(590,65,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(805,65,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(740,-35,0);
    treeOne();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(590,-35,0);
    treeTwo();
    glPopMatrix();

    glColor3f(0.757, 1, 0);
    glPushMatrix();
    glTranslatef(810,-35,0);
    treeTwo();
    glPopMatrix();
    }
}

void terrain()
{
	glBegin(GL_POLYGON);
    glColor3f(0.749, 0.549, 0.345);
	glVertex2i(0, 0);
	glVertex2i(0, 260);
	glVertex2i(1000, 260);
	glVertex2i(1000, 0);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1, 0.549, 0.345);
	glVertex2i(300, 0);
	glVertex2i(700, 0);
	glVertex2i(600, 260);
	glVertex2i(400, 260);

	glEnd();

}



void updateThree()
{
    if(yThreePos > -100)
    {
        yThreePos -= ThreeSpeed;
    }

    glutPostRedisplay();
}

void sceneThree()
{
    glClearColor(0.553, 0.839, 0.831, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    terrain();

    sun();

	drawTree();

    jackThree();
}