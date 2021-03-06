//Program 1
//Ziemowit Juroszek

#include "stdafx.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void RenderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void SetupRC(void)
{
	glClearColor(0.6f, 0.4f, 0.2f, 1.0f);
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Moj pierwszy program w GLUT");
	glutDisplayFunc(RenderScene);
	SetupRC();
	glutMainLoop();
}

