//Program2
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
	glColor3f(0.75f, 0.75f, 0.75f);

	glBegin(GL_POLYGON);
	glVertex2f(-22.5, -96);
	glVertex2f(-62.5, -76);
	glVertex2f(-89, -43);
	glVertex2f(-99, 0);
	glVertex2f(-89, 43);
	glVertex2f(-62.5, 76);
	glVertex2f(-22.5, 96);
	glVertex2f(22.5, 96);
	glVertex2f(62.5, 76);
	glVertex2f(89, 43);
	glVertex2f(99, 0);
	glVertex2f(89, -43);
	glVertex2f(62.5, -76);
	glVertex2f(22.5, -96);

	glEnd();

	glFlush();
}

void SetupRC(void)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void ChangeSize(int w, int h)
{
	GLfloat aspectRatio;

	if (h == 0)
		h = 1;

	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	aspectRatio = (GLfloat)w / (GLfloat)h;

	if (w <= h)
		glOrtho(-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
	else
		glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutCreateWindow("Czternastokat");
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeSize);
	SetupRC();
	glutMainLoop();
	return 0;
}
