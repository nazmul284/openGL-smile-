#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.1);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display()
{
    float theta;
    int i;
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    //Set colour to Yellow
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(250+150*cos(theta),250+150*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();

    float theta2;
    int j;
    //Set colour to Black
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(j=180;j<360;j++)
	{
	  theta2=j*3.142/180;
	  glVertex2f(250+95*cos(theta2),200+70*sin(theta2));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


    float theta3;
    int k;
    //Set colour to Yellow
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	for(k=180;k<360;k++)
	{
	  theta3=k*3.142/180;
	  glVertex2f(250+95*cos(theta3),200+50*sin(theta3));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


	    float theta4;
    int l;
    //Set colour to Black
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(l=0;l<360;l++)
	{
	  theta4=l*3.142/180;
	  glVertex2f(200+15*cos(theta4),300+25*sin(theta4));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


    float theta7;
    int o;
    //Set colour to Black
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(o=0;o<360;o++)
	{
	  theta7=o*3.142/180;
	  glVertex2f(195+15*cos(theta7),304+25*sin(theta7));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


    float theta5;
    int m;
    //Set colour to Black
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(m=0;m<360;m++)
	{
	  theta5=m*3.142/180;
	  glVertex2f(300+15*cos(theta5),300+25*sin(theta5));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


    float theta6;
    int n;
    //Set colour to Black
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for(n=0;n<360;n++)
	{
	  theta6=n*3.142/180;
	  glVertex2f(305+15*cos(theta6),305+25*sin(theta6));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();



    float theta8;
    int P;
    //Set colour to Black
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(P=0;P<360;P++)
	{
	  theta8=P*3.142/180;
	  glVertex2f(202+5*cos(theta8),305+5*sin(theta8));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();

    float theta9;
    int q;
    //Set colour to Black
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(q=0;q<360;q++)
	{
	  theta9=q*3.142/180;
	  glVertex2f(298+5*cos(theta9),305+5*sin(theta9));  // here (250,200) is the center and 150 is the radius
	}
	glEnd();


glFlush();
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


