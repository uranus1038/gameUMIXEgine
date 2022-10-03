#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void displayCallback();
void reshapResponsive(int, int);
void menu(int);
void Init()
{
    // Reset Display Color
    glClearColor(0.0, 0.0, 0.0, 1.0);
}
// ################## Main ######################
int main(int argc, char **argv)
{
    // Init
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);

    // Init Setting
    glutInitWindowPosition(68, 88);
    glutInitWindowSize(1200, 720);

    // Create Window
    glutCreateWindow("UMIEgineX 1.0.0t");
    glutCreateMenu(menu);
    glutAddMenuEntry("Option 1", 1);
    glutAddMenuEntry("Option 2", 2);
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    // Callback
    glutDisplayFunc(displayCallback);
    glutReshapeFunc(reshapResponsive);
    Init();

    glutMainLoop();
}

void menu(int id) 
{  
   switch(id)      
   {  
      case 1:   
      break;  

       case 2: 
       break;

     }
  }

void displayCallback()
{

    // Clear Frame Buffer
    glClear(GL_COLOR_BUFFER_BIT);
    // Reset value
    glLoadIdentity();
    // Draw
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 5.0);
    glVertex2f(4.0, -3.0);
    glVertex2f(-4.0, -3.0);

    glEnd();
    // Display True

    glFlush();
    glutSwapBuffers();
}

void reshapResponsive(int w, int h)
{
    // Fixed Size
    //   if (w >= 799)
    //  {
    //      glutReshapeWindow(800, 600);
    //  }
    float ratio = 1.0 * w / h;
    // Viewport
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    // Set the correct perspective.
    gluPerspective(45, ratio, 1, 1000);
    // Chang mode Display
    glMatrixMode(GL_PROJECTION);
    // Reset value
    glLoadIdentity();
    // Define Size Display
    gluOrtho2D(-10, 10, -10, 10);
    // Chang mode Display
    glMatrixMode(GL_MODELVIEW);
}