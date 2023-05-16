#include "mainMenu.h"

int currentScene = 0;

void init()
{
    glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}

void display()
{
    if (currentScene == 0)
    {
        mainMenu();
    }
    else if (currentScene == 1)
    {
        sceneOne();
    }
    else if (currentScene == 2)
    {
        sceneTwo();
    }
    else if (currentScene == 3)
    {
        sceneThree();
    }
    else if (currentScene == 4)
    {
        sceneFour();
    }
    else if (currentScene == 5)
    {
        sceneFive();
    }
    else if (currentScene == 6)
    {
        sceneSix();
    }
    else if (currentScene == 7)
    {
        sceneSeven();
    }
    else if (currentScene == 8)
    {
        sceneEight();
    }
    else if (currentScene == 9)
    {
        sceneNine();
    }

    glFlush();
    glutSwapBuffers();
}

void update() {
    switch (currentScene) {
        case 0:
            //updateMainMenu();
            break;
        case 1:
            updateOne();
            break;
        case 2:
            updateTwo();
            break;
        case 3:
            updateThree();
            break;
        case 4:
            updateFour();
            break;
        case 5:
            updateFive();
            break;
        case 6:
            updateSix();
            break;
        case 7:
            updateSeven();
            break;
        case 9:
            updateNine();
            break;
        default:
            break;
    }

    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
    
    switch (key) {
        case '0':
            currentScene = 0;
            break;
        case '1':
            currentScene = 1;
            break;
        case '2':
            currentScene = 2;
            break;
        case '3':
            currentScene = 3;
            break;  
        case '4':
            currentScene = 4;
            break; 
        case '5':
            currentScene = 5;
            break;
        case '6':
            currentScene = 6;
            break;
        case '7':
            currentScene = 7;
            break;
        case '8':
            currentScene = 8;
            break;
        case '9':
            currentScene = 9;
            break;  
        default:
            break;
    }

    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
	glutInitWindowSize(1500, 750);
    glutCreateWindow("JACK THE HERO");

    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutIdleFunc(update);

    glutMainLoop();

    return 0;
}