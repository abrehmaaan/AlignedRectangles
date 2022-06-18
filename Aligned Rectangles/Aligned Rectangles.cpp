#include <iostream>
#include <GL/glut.h>
using namespace std;
void myInit(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 500, 0, 500);
}
void myDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.6, 0.6, 0.6);
	glRecti(50, 50, 100, 100);
	glColor3f(0.2, 0.2, 0.2);
	glRecti(100, 50, 150, 100);
	glColor3f(0.6, 0.6, 0.6);
	glRecti(150, 50, 200, 100);
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Aligned Rectangles");
	glutDisplayFunc(myDisplay);
	myInit();
	glutMainLoop();
}