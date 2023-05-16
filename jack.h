#ifndef JACK_H
#define JACK_H

#include <windows.h>
#include "GL/glut.h"

void circle(GLdouble rad);

void hair();
void head();
void uglyHead(int mouth);
void body();
void hand();
void uglyHand();
void leg();

//Draw
void uglyBackJack(int mouth);
void uglyFrontJack(int mouth);
void backJack();
void frontJack();

#endif