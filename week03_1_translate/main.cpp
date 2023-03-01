#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glBegin(GL_POLYGON);
        glVertex2f(0.360,0.352);
        glVertex2f(0.072,0.512);
        glVertex2f(-0.072,0.416);
        glVertex2f(-0.756,0.320);
        glVertex2f(-0.724,0.608);
        glVertex2f(-0.676,0.624);
        glVertex2f(0.172,0.588);
        glVertex2f(0.176,0.140);
        glVertex2f(0.048,-0.216);
        glVertex2f(-0.364,-0.424);
        glVertex2f(-0.364,0.656);
        glVertex2f(-0.108,0.752);
    glEnd();

    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)///mouse函式
{
    ///printf("%d %d %d %d\n", button, state, x, y);
    float X =  (x-250)/250.0;
    float Y = -(y-250)/250.0;
    if(state==GLUT_DOWN)
    {
        printf(" glvertex2f(%.3f,%.3f);\n", X, Y);
    }
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);

	glutCreateWindow("GLUT Shapes");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);///使用mouse函式

	glutMainLoop();
}
