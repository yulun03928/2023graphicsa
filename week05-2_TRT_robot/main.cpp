#include <GL/glut.h>
float angel = 0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glColor3f(0, 1, 0);
    glPushMatrix();
        glutSolidCube(0.5);

        glPushMatrix();
            glTranslatef(0.25, 0.25, 0);
            glRotatef(angel, 0, 0, 1);
            glTranslatef(0.25, 0.25, 0);
///            glTranslatef(0.5, 0.5, 0.5);
            glColor3f(1, 0, 0);
            glutSolidCube(0.5);

    glPopMatrix();


    glutSwapBuffers();
    angel++;
}
int main(int argc, char* argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
