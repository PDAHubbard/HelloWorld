/*
 * GLUTDemo.cpp
 *
 *  Created on: 30 Nov 2012
 *      Author: peter.hubbard
 */

/* Demo.cpp
 * A simple OpenGL program using GLUT.  It creates a blank black
 * window which can be used as a starting point for OpenGL programming.
 *
 * Link in opengl32, glu32, and glut32 libraries and make sure to include
 * windows.h if you are compiling with Eclipse in Windows.
 *
 * Author: Paul Solt  3-4-07
 * Based on examples from the Red book OpenGL Programming Guide
 */
#include <windows.h>
#include <GL/glut.h>

const int WIDTH = 600;
const int HEIGHT = 480;

/* Prototypes */
void init();
void display();

/* Definitions */

/* Initializes the OpenGL state */
void init() {
	glClearColor( 0.0, 0.0, 0.0, 1.0 ); /* Set the clear color */
}

/* render the scene */
void renderScene( void ){

	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glBegin(GL_TRIANGLES);
			glVertex3f(-0.5,-0.5,0.0);
			glVertex3f(0.5,0.0,0.0);
			glVertex3f(0.0,0.5,0.0);
		glEnd();
}

/* Displays a black clear screen */
void display() {
	glClear( GL_COLOR_BUFFER_BIT ); /* Clear the screen with the clear color */
	glutSwapBuffers(); /* Double buffering */
}

/* The main function */
int main( int argc, char *argv[] ) {
	/* Glut setup function calls */
	glutInit( &argc, argv );
	glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB ); /* Use double buffering and RGB colors */
	glutInitWindowPosition( 100, 100 );
	glutInitWindowSize( WIDTH, HEIGHT );
	glutCreateWindow( argv[0] );
	init();
	glutDisplayFunc( renderScene );  /* Call back display function */
	glutMainLoop(); /* Continue drawing the scene */
	return 0;
}


