#include <GL/glut.h>
#include <math.h>

void myCircle(float r, float x, float y)
{
    glBegin(GL_POLYGON);
        for(float a = 0; a<2*3.14159265389793238462632383279; a+=0.1)
        {
            glVertex2f( r*cos(a)+x, r*sin(a)+y );
        }
    glEnd();


}
void display()
{
    glColor3f(1, 0, 1);myCircle(0.6, 0, 0);

    glColor3f(1, 0, 0);myCircle(0.3, 0.5, 0.5);
    glColor3f(0, 1, 0);myCircle(0.3,-0.5, 0.5);
    glColor3f(0, 1, 0);myCircle(0.3,-0.5,-0.5);
    glColor3f(0, 0, 1);myCircle(0.3, 0.5,-0.5);

    glutSwapBuffers();
}
int main(int argc, char *argv[])///上面是特別的main()函式，有很多參數
{
    glutInit(&argc, argv);///把GLUT開起來
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");///要開視窗
    glutDisplayFunc(display);///要顯示對應的程式
    glutMainLoop();///最後用main迴圈壓在最後面

}
