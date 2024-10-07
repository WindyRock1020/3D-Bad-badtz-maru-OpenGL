#include <GL/glut.h>
#include <stdbool.h>
GLfloat eyewave ,handwave;
bool Move = true;
GLboolean hand = GL_FALSE;
GLfloat vertices[][3] = {
    {-1.0, -1.0, -1.0},
    {1.0, -1.0, -1.0},
    {1.0, 1.0, -1.0},
    {-1.0, 1.0, -1.0},
    {0.0, 0.0, 1.0}
};
GLubyte faces[][3] = {
    {0, 1, 4},
    {1, 2, 4},
    {2, 3, 4},
    {3, 0, 4},
    {1, 0, 3},
    {2, 1, 3}
};
void drawnum() {
    glPushMatrix();
    glTranslatef(0.0, 0.0, -10.0);
    glColor3f(0.29, 0.0, 0.51);
    glLineWidth(4.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-15, -10);
    glVertex2f(-5, -10);
    glVertex2f(-5, 0);
    glVertex2f(-5, 10);
    glVertex2f(-15, 10);
    glVertex2f(-15, 0);
    glVertex2f(-5, 0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glVertex2f(0, 10);
    glVertex2f(0, -10);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glVertex2f(15, 10);
    glVertex2f(5, 10);
    glVertex2f(5, 0);
    glVertex2f(15, 0);
    glVertex2f(15, -10);
    glVertex2f(5, -10);
    glEnd();
    glPopMatrix();
}

void drawhead() {
    GLUquadricObj* quadricPtr;
    quadricPtr = gluNewQuadric();
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(0.0,5.0,0.0 );
    gluSphere(quadricPtr, 5, 40, 10);
    glPopMatrix();
}

void drawhair() {
    glPushMatrix();
    glTranslatef(1.0, 10.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    int i;
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//左中

    glPushMatrix();
    glTranslatef(-1.0, 10.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//中右

    glPushMatrix();
    glTranslatef(3.0, 9.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();
        glPushMatrix();
    glTranslatef(3.0, 9.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//左

    glPushMatrix();
    glTranslatef(-3.0, 9.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(-30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(3.0, 9.0, 0.0);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(3.0, 1.0, 2.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(0.0, 0.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//右
}

void drawEye() {
    GLUquadricObj* quadricPtr;
    quadricPtr = gluNewQuadric();
    glPushMatrix();
    glTranslatef(2.5, 7.5, 3.9);
    glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
    glRotatef(-12.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(1.0, 1.6, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    gluPartialDisk(quadricPtr, 0, 1.5, 1000, 4, -270, 180);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-2.5, 7.5, 3.9);
    glRotatef(-12.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(-30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(1.0, 1.6, 1.0);
    glColor3f(1.0,1.0, 1.0);
    gluPartialDisk(quadricPtr, 0, 1.5, 1000, 4, -270, 180);
    glPopMatrix();

}

void draweyeball() {
    GLUquadricObj* quadricPtr;
    quadricPtr = gluNewQuadric();
    glPushMatrix();
    glTranslatef(-eyewave, 0.0, 0.0);
    glTranslatef(2.5, 7.5, 4.5);
    glRotatef(5.0f, 0.0f, 0.0f, 1.0f);
    glRotatef(-12.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(1.0, 1.6, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    gluPartialDisk(quadricPtr, 0, 0.5, 1000, 4, -270, 180);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(eyewave, 0.0, 0.0);
    glTranslatef(-2.5, 7.5, 4.5);
    glRotatef(-12.0f, 1.0f, 0.0f, 0.0f);
    glRotatef(-30.0f, 0.0f, 1.0f, 0.0f);
    glScalef(1.0, 1.6, 1.0);
    glColor3f(0.0, 0.0, 0.0);
    gluPartialDisk(quadricPtr, 0, 0.5, 1000, 4, -270, 180);
    glPopMatrix();
    if (Move) {
        eyewave += 0.003;
        if (eyewave > 2) {
            Move = false;
        }
    }
    else {
        eyewave -= 0.003;
        if (eyewave < -2.0) {
            Move = true;
        }
    }
}
void drawmouth() {
    glPushMatrix();
    glTranslatef(0.0, 4.5, 4.7);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(1.0, 1.0, 0.5);
    int i;
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//上

    glPushMatrix();
    glTranslatef(0.0, 3.3, 4.7);
    glRotatef(-270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(1.0, 1.0, 0.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//下
}

void drawbody() {
        GLUquadricObj* quadricPtr;
        quadricPtr = gluNewQuadric();
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0.0, -2.0, 0.0);
        glScalef(1.0, 0.8, 1.0);
        gluSphere(quadricPtr, 5, 40, 10);
        glPopMatrix();

        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(0.0, -2.5, 2.0);
        glScalef(1.0, 0.8, 1.0);
        gluSphere(quadricPtr, 4, 40, 10);
        glPopMatrix();
}

void drawhand() {
    GLUquadricObj* quadricPtr;
    quadricPtr = gluNewQuadric();
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(5.0, -2.0, 0.0);
    glRotatef(30.0+handwave, 1.0f, 0.0f, 0.0f);
    glRotatef(30.0, 0.0f, 0.0f, 1.0f);
    glScalef(1.0, 2.0, 1.0);
    gluSphere(quadricPtr, 1.2, 40, 10);
    glPopMatrix();//左手

    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glTranslatef(-5.0, -2.0, 0.0);
    glRotatef(30.0+handwave, 1.0f, 0.0f, 0.0f);
    glRotatef(-30.0, 0.0f, 0.0f, 1.0f);
    glScalef(1.0, 2.0, 1.0);
    gluSphere(quadricPtr, 1.2, 40, 10);
    glPopMatrix();//右手

    if (Move) {
        handwave += 0.1;
        if (handwave > 60.0) {
            Move = false;
        }
    }
    else {
        handwave -= 0.1;
        if (handwave < 0.0) {
            Move = true;
        }
    }
}

void drawfoot() {
    glPushMatrix();
    glTranslatef(2.0, -5.5, 1.0);
    glRotatef(handwave, 1.0f, 1.0f, 0.0f);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(1.5, 1.0, 0.5);
    int i;
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//左腳

    glPushMatrix();
    glTranslatef(-2.0, -5.5, 1.0);
    glRotatef(handwave, 1.0f, 1.0f, 0.0f);
    glRotatef(270.0f, 1.0f, 0.0f, 0.0f);
    glScalef(1.5, 1.0, 0.5);
    glBegin(GL_TRIANGLES);
    for (i = 0; i < 6; i++)
    {
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][0]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][1]]);
        glColor3f(1.0, 1.0, 0.0);
        glVertex3fv(vertices[faces[i][2]]);
    }
    glEnd();
    glPopMatrix();//右腳

    if (Move) {
        handwave += 0.1;
        if (handwave > 60.0) {
            Move = false;
        }
    }
    else {
        handwave -= 0.1;
        if (handwave < 0.0) {
            Move = true;
        }
    }
}

void mydisplay()
{
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0, 0.6, 0.8 ,1.0);

    drawnum();
    drawhead();
    drawhair();
    drawEye();
    draweyeball();
    drawmouth();
    drawbody();
    drawhand();
    drawfoot();
    glFlush();
}
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-30.0, 30.0, -30.0, 30.0, -30.0,30.0);
    glMatrixMode(GL_MODELVIEW);
}
void myReshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-20.0, 20.0, -20.0 * (GLfloat)h / (GLfloat)w,
            20.0 * (GLfloat)h / (GLfloat)w, -20.0, 20.0);
    else
        glOrtho(-20.0 * (GLfloat)w / (GLfloat)h,
            20.0 * (GLfloat)w / (GLfloat)h, -20.0, 20.0, -20.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void myIdle()
{

    glRotatef(0.01, 0, 1, 0);
    glutPostRedisplay();
}

void main(int argc, char** argv)
{
    glutInitWindowSize(800, 800);
    glutCreateWindow("simple");
    glutDisplayFunc(mydisplay);
    glutReshapeFunc(myReshape);
    glutIdleFunc(myIdle);

    init();
    glutMainLoop();
}