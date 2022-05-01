#include <windows.h>
#include <GL\glut.h>
#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include <mmsystem.h>
using namespace std;


static float cloud1 = -120;
static float cloud2 = -50;
static float cloud3 = -70;
static float cloud4 = -110;
static float cloud5 = -130;
static float sun = -40;
static float moon= -40;
static float tmove = -40;
static float twheel =-40;
static float cmove = -30;
static float cwheel =-30;

void declare(char *string)
{
     while(*string)
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, *string++);
}


void delay()
{
    for(int i=0;i<100000000;i++);
}
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}

void daycloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800)
        {
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

    sun+=0.5;
    if(sun>400)
    {
        sun=-10;
    }
       glutPostRedisplay();

}

void daymovingCloud()
{
//sun code
    glPushMatrix();
    glTranslatef(0,sun,1);
    glColor3f(1.3,1.0,0.0);
    circle(30,30,730,490);
    glPopMatrix();

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(1.0, 1.0, 1.0);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();




}
void nightcloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800){
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

    moon+=0.5;
    if(moon>400)
    {
        moon=-10;
    }
       glutPostRedisplay();

}


void nightmovingCloud()
{
//moon code
    glPushMatrix();
    glTranslatef(0,moon,1);
    glColor3f(255,255,255);
    circle(30,30,730,490);
    glPopMatrix();

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(0.4f, 0.4f, 0.4f);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();


}


void raincloudMove()
{
    cloud1 += 2.50;
    if(cloud1 > 800)
    {
        cloud1 = -20;
    }
    glutPostRedisplay();
    cloud2 += 2.5;
    if(cloud2 > 800)
    {
        cloud2 = -60;
    }
    glutPostRedisplay();
    cloud3 += 2.50;
    if(cloud3 > 800)
    {
        cloud3 = -80;
    }
    glutPostRedisplay();
    cloud4 += 2.4;

    if(cloud4 > 800)
    {
        cloud4 = -110;
    }
    glutPostRedisplay();

    cloud5 += 2.5;
    if(cloud5 > 600)
    {
        cloud5 = -130;
    }
    glutPostRedisplay();

}

void rainmovingCloud()
{

    glColor3f(1,1,1);
    daycloudMove();
    glPushMatrix();
    glTranslatef(cloud1,1,0);
    glColor3f(0.4f, 0.4f, 0.4f);
    circle(40,18,800,500);
    circle(17,24,810,500);
    circle(17,24,790,500);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud2,-2,0);
    circle(40,18,140,520);
    circle(19,24,150,520);
    circle(19,24,130,520);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud3,-3,0);
    circle(40,18,250,505);
    circle(19,24,260,505);
    circle(19,24,240,505);

    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud4,1,0);
    circle(40,18,30,570);
    circle(19,24,40,570);
    circle(19,24,20,570);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(cloud5,1,0);

    circle(43,18,730,550);
    circle(17,22,745,550);
    circle(17,22,719,550);

    glPopMatrix();

}


void daysky()
{
    glColor3f(0.2, 0.70, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();
}
void nightsky()
{
    glColor3f(0.1,0,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();

}
void rainsky()
{
    glColor3f(0.1f, 0.3f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(0,600);
    glVertex2i(900,600);
    glVertex2i(900, 400);
    glVertex2i(0, 400);
    glEnd();
}


//train code

void trainMove()
{
    tmove  += 10.5 ;
    if (tmove >1100)
    {
        tmove = -60;
    }
    glutPostRedisplay();

       twheel+=10.5;
       if(twheel>1100)
       {
           twheel=-60;
       }
      glutPostRedisplay();

}

void train()
{
//train compartment01
    glBegin(GL_QUADS);

    glColor3ub(255,199,44);
    glVertex2d(20,90);
    glVertex2d(100,90);
    glVertex2d(100,30);
    glVertex2d(20,30);


    glColor3ub(158, 100, 145);
    glVertex2d(15,100);
    glVertex2d(90,100);
    glVertex2d(100,90);
    glVertex2d(20,90);

    glColor3ub(158, 100, 45);
    glVertex2d(15,100);
    glVertex2d(20,90);
    glVertex2d(20,30);
    glVertex2d(15,40);

    glColor3ub(158, 150, 145);
    glVertex2d(80,110);
    glVertex2d(90,110);
    glVertex2d(90,100);
    glVertex2d(80,100);

    glColor3ub(158, 150, 145);
    glVertex2d(0,50);
    glVertex2d(20,50);
    glVertex2d(20,40);
    glVertex2d(0,40);

//train compartment02

    glColor3ub(255,199,44);
    glVertex2d(-80,90);
    glVertex2d(0,90);
    glVertex2d(0,30);
    glVertex2d(-80,30);


    glColor3ub(158, 100, 145);
    glVertex2d(-85,100);
    glVertex2d(-5,100);
    glVertex2d(0,90);
    glVertex2d(-80,90);

    glColor3ub(158, 100, 45);
    glVertex2d(-85,100);
    glVertex2d(-80,90);
    glVertex2d(-80,30);
    glVertex2d(-85,40);

    glColor3ub(158, 150, 145);
    glVertex2d(-100,50);
    glVertex2d(-80,50);
    glVertex2d(-80,40);
    glVertex2d(-100,40);

//train compartment03
    glColor3ub(255,199,44);
    glVertex2d(-180,90);
    glVertex2d(-100,90);
    glVertex2d(-100,30);
    glVertex2d(-180,30);


    glColor3ub(158, 100,145);
    glVertex2d(-185,100);
    glVertex2d(-105,100);
    glVertex2d(-100,90);
    glVertex2d(-180,90);

    glColor3ub(158, 100,45);
    glVertex2d(-185,100);
    glVertex2d(-180,90);
    glVertex2d(-180,30);
    glVertex2d(-185,40);

    glEnd();


}

void movingTrain()
{
    trainMove();
    glPushMatrix();
    glTranslatef(tmove, 0,0);
    train();
    glPopMatrix();

//train wheel
    glPushMatrix();
    glTranslatef(twheel,0,0);
    glColor3f(0.9,0.2,0.1);
    circle(10,10,85,30);
    circle(10,10,45,30);

    circle(10,10,-20,30);
    circle(10,10,-60,30);

    circle(10,10,-120,30);
    circle(10,10,-160,30);


    glPopMatrix();


}

//car
void carMove()
{
    cmove  += 7.9 ;
    if (cmove >1100)
    {
        cmove = -60;
    }
    glutPostRedisplay();

       cwheel+=7.9;
       if(cwheel>1100)
       {
           cwheel=-60;
       }
      glutPostRedisplay();

}

void car()
{
    glBegin(GL_QUADS);

    glColor3ub(235,236,0);
    glVertex2d(20,250);
    glVertex2d(130,250);
    glVertex2d(130,230);
    glVertex2d(20,230);


    glColor3ub(153,0,0);
    glVertex2d(50,275);
    glVertex2d(100,275);
    glVertex2d(130,230);
    glVertex2d(20,230);


    glColor3ub(228, 190, 245);
    glVertex2d(50,265);
    glVertex2d(75,265);
    glVertex2d(75,250);
    glVertex2d(50,250);

    glColor3ub(228, 190, 245);
    glVertex2d(80,265);
    glVertex2d(100,265);
    glVertex2d(110,250);
    glVertex2d(80,250);
    glEnd();

}

void movingCar()
{
    carMove();
    glPushMatrix();
    glTranslatef(cmove, 0,0);
    car();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(cwheel,0,0);
    glColor3f(0.3,0.3,0.4);
    circle(10,10,100,230);
    circle(10,10,45,230);
    glPopMatrix();


}


float positionRain=0;

float speedRain=-2.0;

void rainDown()
{
    if (positionRain > 900)
    {
        positionRain = 0;
    }
    positionRain += speedRain;
   glutPostRedisplay();
}

void rain()
{
    glLineWidth(1.0);


    glPushMatrix();
    glTranslated(0 , positionRain, 0);
    glBegin(GL_LINES);
    glColor3ub (255, 255, 255);

    int X = 7, Y = -700;
    for(int i=0; i<100000; i++)
    {
        for(int j=0; j<60; j++)
        {

            glVertex2i(X, Y);
            glVertex2i(X+3, Y+10);

            X=X+40;
        }
        X=7;
        Y=Y+30;
    }
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslated(0 , positionRain, 0);

    glBegin(GL_LINES);

    glColor3ub (255, 255, 255);

    X = 27, Y = -683;
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<60; j++)
        {

            glVertex2i(X, Y);
            glVertex2i(X+3, Y+10);

            X=X+40;
        }
        X=27;
        Y=Y+30;
    }
    glEnd();

    glPopMatrix();

}

void road()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.4f, 0.9f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(0, 290);
    glVertex2i(900, 290);
    glVertex2i(900, 270);
    glVertex2i(0, 270);
    glEnd();

    int xxx=0;
    int yyy=10;
    for(int a=0; a<100;a++)
{


    glColor3f(0.6, 1.2, 0.0);
    glLineWidth(6.90);
    glBegin(GL_LINES);
    glVertex2i(xxx, 290);
    glVertex2i(yyy, 270);
    glEnd();

    xxx=yyy;
    yyy=xxx+10;
}
//road
    glColor3f(0.4f, 0.4f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(370, 400);
    glVertex2i(530, 400);
    glVertex2i(570, 0);
    glVertex2i(330, 0);
    glEnd();

    glColor3f(0.4f, 0.4f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(0, 270);
    glVertex2i(900, 270);
    glVertex2i(900, 210);
    glVertex2i(0, 210);
    glEnd();



}


void home()
{
//hill
    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(150, 440);
    glVertex2i(200, 400);
    glVertex2i(100, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 470);
    glVertex2i(280, 400);
    glVertex2i(150, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(260, 450);
    glVertex2i(310, 400);
    glVertex2i(210, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 450);
    glVertex2i(150, 400);
    glVertex2i(50, 400);
    glEnd();



    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(40, 430);
    glVertex2i(90, 400);
    glVertex2i(0, 400);
    glEnd();


    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(575, 430);
    glVertex2i(610, 400);
    glVertex2i(540, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(665, 440);
    glVertex2i(708, 400);
    glVertex2i(630, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(775, 445);
    glVertex2i(750, 400);
    glVertex2i(820, 400);
    glEnd();

    glColor3f(0.2,0.4,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(845, 460);
    glVertex2i(890, 400);
    glVertex2i(800, 400);
    glEnd();


     movingCar();

//building no01
    glColor3f(1, 0.9, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(30, 215);
    glVertex2i(160, 215);
    glVertex2i(160, 115);
    glVertex2i(30, 115);
    glEnd();




    glColor3f(1, 0.7, 1);
    glBegin(GL_POLYGON);
    glVertex2i(160, 215);
    glVertex2i(170, 220);
    glVertex2i(170, 125);
    glVertex2i(160, 115);
    glEnd();


    glColor3f(1, 0.1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(40, 220);
    glVertex2i(170, 220);
    glVertex2i(160, 210);
    glVertex2i(30, 210);
    glEnd();




//building 01 window

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(35, 135);
    glVertex2i(55, 135);
    glVertex2i(55, 150);
    glVertex2i(35, 150);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(35, 160);
    glVertex2i(55, 160);
    glVertex2i(55, 175);
    glVertex2i(35, 175);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(35, 185);
    glVertex2i(55, 185);
    glVertex2i(55, 200);
    glVertex2i(35, 200);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(70, 185);
    glVertex2i(90, 185);
    glVertex2i(90, 200);
    glVertex2i(70, 200);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(70, 175);
    glVertex2i(90, 175);
    glVertex2i(90, 160);
    glVertex2i(70, 160);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(105, 175);
    glVertex2i(125, 175);
    glVertex2i(125, 160);
    glVertex2i(105, 160);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(105, 185);
    glVertex2i(125, 185);
    glVertex2i(125, 200);
    glVertex2i(105, 200);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(135, 185);
    glVertex2i(155, 185);
    glVertex2i(155, 200);
    glVertex2i(135, 200);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(135, 175);
    glVertex2i(155, 175);
    glVertex2i(155, 160);
    glVertex2i(135, 160);
    glEnd();

    glColor3f(1,0.5,0.4);
    glBegin(GL_POLYGON);
    glVertex2i(135, 150);
    glVertex2i(155, 150);
    glVertex2i(155, 135);
    glVertex2i(135, 135);
    glEnd();

//building 01 door
    glColor3f(1,0.9,0);
     glBegin(GL_POLYGON);
    glVertex2i(85, 150);
    glVertex2i(110, 150);
    glVertex2i(110, 115);
    glVertex2i(85, 115);
    glEnd();



//building 02
    glColor3f(0.0f, 0.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(585, 240);
    glVertex2i(735, 240);
    glVertex2i(735, 120);
    glVertex2i(585, 120);
    glEnd();

    glColor3f(0.1f, 0.3f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(585, 240);
    glVertex2i(575, 250);
    glVertex2i(575, 130);
    glVertex2i(585, 120);
    glEnd();

    glColor3f(1.1f, 1.1f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(585, 240);
    glVertex2i(735, 240);
    glVertex2i(725, 250);
    glVertex2i(575, 250);
    glEnd();


//building 02 window
    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(590, 220);
    glVertex2i(608, 220);
    glVertex2i(608, 200);
    glVertex2i(590, 200);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(590, 190);
    glVertex2i(608, 190);
    glVertex2i(608, 170);
    glVertex2i(590, 170);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(590, 160);
    glVertex2i(608, 160);
    glVertex2i(608, 140);
    glVertex2i(590, 140);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(620, 220);
    glVertex2i(638, 220);
    glVertex2i(638, 200);
    glVertex2i(620, 200);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(620, 190);
    glVertex2i(638, 190);
    glVertex2i(638, 170);
    glVertex2i(620, 170);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(650, 190);
    glVertex2i(670, 190);
    glVertex2i(670, 170);
    glVertex2i(650, 170);
    glEnd();


    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(650, 220);
    glVertex2i(670, 220);
    glVertex2i(670, 200);
    glVertex2i(650, 200);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(680, 220);
    glVertex2i(700, 220);
    glVertex2i(700, 200);
    glVertex2i(680, 200);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(680, 190);
    glVertex2i(700, 190);
    glVertex2i(700, 170);
    glVertex2i(680, 170);
    glEnd();


    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(710, 190);
    glVertex2i(730, 190);
    glVertex2i(730, 170);
    glVertex2i(710, 170);
    glEnd();

    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(710, 200);
    glVertex2i(730, 200);
    glVertex2i(730, 220);
    glVertex2i(710, 220);
    glEnd();


    glColor3f(1.0f, 1.5f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(710, 160);
    glVertex2i(730, 160);
    glVertex2i(730, 140);
    glVertex2i(710, 140);
    glEnd();



//building 02 door
    glColor3f(0.1f, 0.1f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(635, 160);
    glVertex2i(683, 160);
    glVertex2i(683, 120);
    glVertex2i(635, 120);
    glEnd();

//road to field
    glColor3f(0.8,0.9,0.1);
    glBegin(GL_POLYGON);
    glVertex2i(648, 120);
    glVertex2i(671, 120);
    glVertex2i(671, 100);
    glVertex2i(648, 100);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2i(648, 110);
    glVertex2i(735, 110);
    glVertex2i(735, 90);
    glVertex2i(648, 90);
    glEnd();


//field

    glColor3f(0.8,0.9,0.1);
    glBegin(GL_POLYGON);
    glVertex2i(735, 205);
    glVertex2i(900, 205);
    glVertex2i(900, 90);
    glVertex2i(735, 90);
    glEnd();



    int fxx=737;
    int fyy=737;
    for(int a=0; a<20;a++)
{


    glColor3f(0.8,0.9,0.1);
    glLineWidth(2.90);
    glBegin(GL_LINES);
    glVertex2i(fxx, 200);
    glVertex2i(fyy, 220);
    glEnd();

    fxx=fyy+10;
    fyy=fxx;
}
    glColor3f(0.8,0.9,0.1);
    glLineWidth(3.00);
    glBegin(GL_LINES);
    glVertex2i(737, 210);
    glVertex2i(900, 210);
    glEnd();







//building upper 01
    glColor3f(0.1f, 0.3f, 0.4f);
    glBegin(GL_POLYGON);
    glVertex2i(50, 320);
    glVertex2i(100, 320);
    glVertex2i(100, 450);
    glVertex2i(50, 450);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 330);
    glVertex2i(95, 330);
    glVertex2i(95, 340);
    glVertex2i(55, 340);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 350);
    glVertex2i(95, 350);
    glVertex2i(95, 360);
    glVertex2i(55, 360);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 370);
    glVertex2i(95, 370);
    glVertex2i(95, 380);
    glVertex2i(55, 380);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 390);
    glVertex2i(95, 390);
    glVertex2i(95, 400);
    glVertex2i(55, 400);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 410);
    glVertex2i(95, 410);
    glVertex2i(95, 420);
    glVertex2i(55, 420);
    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(55, 430);
    glVertex2i(95, 430);
    glVertex2i(95, 440);
    glVertex2i(55, 440);
    glEnd();


     //building ...

    glColor3f(0.1f, 0.3f, 1.4f);
    glBegin(GL_POLYGON);
    glVertex2i(40, 310);
    glVertex2i(0, 310);
    glVertex2i(0, 460);
    glVertex2i(40, 460);
    glEnd();

     glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 320);
    glVertex2i(0, 320);
    glVertex2i(0, 330);
    glVertex2i(30, 330);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 340);
    glVertex2i(0, 340);
    glVertex2i(0, 350);
    glVertex2i(30, 350);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 360);
    glVertex2i(0, 360);
    glVertex2i(0, 370);
    glVertex2i(30, 370);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 380);
    glVertex2i(0, 380);
    glVertex2i(0, 390);
    glVertex2i(30, 390);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 400);
    glVertex2i(0, 400);
    glVertex2i(0, 410);
    glVertex2i(30, 410);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 420);
    glVertex2i(0, 420);
    glVertex2i(0, 430);
    glVertex2i(30, 430);
    glEnd();

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(30, 440);
    glVertex2i(0, 440);
    glVertex2i(0, 450);
    glVertex2i(30, 450);
    glEnd();




//building upper 03

    glColor3f(0.1f, 0.5f, 0.2f);
    glBegin(GL_POLYGON);
    glVertex2i(160, 300);
    glVertex2i(215,300);
    glVertex2i(215, 390);
    glVertex2i(160, 390);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(160, 382);
    glVertex2i(215,382);
    glVertex2i(215, 377);
    glVertex2i(160, 377);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(160, 347);
    glVertex2i(215,347);
    glVertex2i(215, 352);
    glVertex2i(160, 352);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(160, 327);
    glVertex2i(215,327);
    glVertex2i(215, 322);
    glVertex2i(160, 322);
    glEnd();

    glColor3f(1,1,1);
     glBegin(GL_POLYGON);
    glVertex2i(165, 320);
    glVertex2i(185,320);
    glVertex2i(185, 305);
    glVertex2i(165, 305);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(187, 320);
    glVertex2i(210,320);
    glVertex2i(210, 305);
    glVertex2i(187, 305);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(187, 330);
    glVertex2i(210,330);
    glVertex2i(210, 345);
    glVertex2i(187, 345);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(165, 330);
    glVertex2i(185,330);
    glVertex2i(185, 345);
    glVertex2i(165, 345);
    glEnd();




    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(165, 357);
    glVertex2i(185,357);
    glVertex2i(185, 372);
    glVertex2i(165, 372);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(187, 357);
    glVertex2i(210,357);
    glVertex2i(210, 372);
    glVertex2i(187, 372);
    glEnd();


//building upper 04
    glColor3f(0.79, 0.3, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(245, 300);
    glVertex2i(290,300);
    glVertex2i(290, 425);
    glVertex2i(245, 425);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(250, 310);
    glVertex2i(265,310);
    glVertex2i(265, 330);
    glVertex2i(250, 330);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(250, 340);
    glVertex2i(265,340);
    glVertex2i(265, 360);
    glVertex2i(250, 360);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(250, 370);
    glVertex2i(265,370);
    glVertex2i(265, 390);
    glVertex2i(250, 390);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(250, 395);
    glVertex2i(265,395);
    glVertex2i(265, 415);
    glVertex2i(250, 415);
    glEnd();




//building upper right 05

    glColor3f(0.5, 0.1, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(850, 300);
    glVertex2i(900,300);
    glVertex2i(900, 400);
    glVertex2i(850, 400);
    glEnd();
    //window 9

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(863, 305);
    glVertex2i(890,305);
    glVertex2i(890, 325);
    glVertex2i(863, 325);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(863, 335);
    glVertex2i(890,335);
    glVertex2i(890, 355);
    glVertex2i(863, 355);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(863, 365);
    glVertex2i(890,365);
    glVertex2i(890, 385);
    glVertex2i(863, 385);
    glEnd();


//building upper right 01
    glColor3f(0.7,0.5,1);
    glBegin(GL_POLYGON);
    glVertex2i(590, 290);
    glVertex2i(645,290);
    glVertex2i(645, 380);
    glVertex2i(590, 380);
    glEnd();



    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(595, 300);
    glVertex2i(615,300);
    glVertex2i(615, 310);
    glVertex2i(595, 310);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(595, 315);
    glVertex2i(615,315);
    glVertex2i(615, 325);
    glVertex2i(595, 325);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(595, 330);
    glVertex2i(615,330);
    glVertex2i(615, 340);
    glVertex2i(595, 340);
    glEnd();
    glColor3f(1,1,1);
     glBegin(GL_POLYGON);
    glVertex2i(595, 345);
    glVertex2i(615,345);
    glVertex2i(615, 355);
    glVertex2i(595, 355);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(595, 360);
    glVertex2i(615,360);
    glVertex2i(615, 370);
    glVertex2i(595, 370);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(620, 300);
    glVertex2i(640,300);
    glVertex2i(640, 310);
    glVertex2i(620, 310);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(620, 315);
    glVertex2i(640,315);
    glVertex2i(640, 325);
    glVertex2i(620, 325);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(620, 330);
    glVertex2i(640,330);
    glVertex2i(640, 340);
    glVertex2i(620, 340);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(620, 345);
    glVertex2i(640,345);
    glVertex2i(640, 355);
    glVertex2i(620, 355);
    glEnd();
    glColor3f(1,1,1);

    glBegin(GL_POLYGON);
    glVertex2i(620, 360);
    glVertex2i(640,360);
    glVertex2i(640, 370);
    glVertex2i(620, 370);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(620, 300);
    glVertex2i(640,300);
    glVertex2i(640, 310);
    glVertex2i(620, 310);
    glEnd();

//building upper right 02


    glColor3f(0.9,0.5,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(650, 290);
    glVertex2i(725,290);
    glVertex2i(725, 385);
    glVertex2i(650, 385);
    glEnd();
//window 11

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(660, 300);
    glVertex2i(670,300);
    glVertex2i(670, 310);
    glVertex2i(660, 310);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(660, 320);
    glVertex2i(670,320);
    glVertex2i(670, 330);
    glVertex2i(660, 330);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(660, 340);
    glVertex2i(670,340);
    glVertex2i(670, 350);
    glVertex2i(660, 350);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(660, 360);
    glVertex2i(670,360);
    glVertex2i(670, 375);
    glVertex2i(660, 375);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(680, 360);
    glVertex2i(690,360);
    glVertex2i(690, 375);
    glVertex2i(680, 375);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(680, 340);
    glVertex2i(690,340);
    glVertex2i(690, 350);
    glVertex2i(680, 350);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(680, 320);
    glVertex2i(690,320);
    glVertex2i(690, 330);
    glVertex2i(680, 330);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(680, 300);
    glVertex2i(690,300);
    glVertex2i(690, 310);
    glVertex2i(680, 310);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(700, 300);
    glVertex2i(710,300);
    glVertex2i(710, 310);
    glVertex2i(700, 310);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(700, 320);
    glVertex2i(710,320);
    glVertex2i(710, 330);
    glVertex2i(700, 330);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(700, 360);
    glVertex2i(710,360);
    glVertex2i(710, 375);
    glVertex2i(700, 375);
    glEnd();

    glColor3f(0.9,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(700, 340);
    glVertex2i(710,340);
    glVertex2i(710, 350);
    glVertex2i(700, 350);
    glEnd();

//building upper right 03

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(760, 290);
    glVertex2i(830,290);
    glVertex2i(830, 385);
    glVertex2i(760, 385);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(765, 300);
    glVertex2i(780, 300);
    glVertex2i(780, 315);
    glVertex2i(765, 315);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(765, 320);
    glVertex2i(780, 320);
    glVertex2i(780, 335);
    glVertex2i(765, 335);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(765, 340);
    glVertex2i(780, 340);
    glVertex2i(780, 355);
    glVertex2i(765, 355);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(765, 360);
    glVertex2i(780, 360);
    glVertex2i(780, 375);
    glVertex2i(765, 375);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(790, 300);
    glVertex2i(805, 300);
    glVertex2i(805, 315);
    glVertex2i(790, 315);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(790, 320);
    glVertex2i(805, 320);
    glVertex2i(805, 335);
    glVertex2i(790, 335);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(790, 340);
    glVertex2i(805, 340);
    glVertex2i(805, 355);
    glVertex2i(790, 355);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(790, 360);
    glVertex2i(805, 360);
    glVertex2i(805, 375);
    glVertex2i(790, 375);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(813, 300);
    glVertex2i(827, 300);
    glVertex2i(827, 315);
    glVertex2i(813, 315);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(813, 320);
    glVertex2i(827, 320);
    glVertex2i(827, 335);
    glVertex2i(813, 335);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(813, 340);
    glVertex2i(827, 340);
    glVertex2i(827, 355);
    glVertex2i(813, 355);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
    glVertex2i(813, 360);
    glVertex2i(827, 360);
    glVertex2i(827, 375);
    glVertex2i(813, 375);
    glEnd();

//tree no 01


    glColor3f(0.79, 0.3, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(125, 80);
    glVertex2i(125, 50);

    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(100, 80);
    glVertex2i(150, 80);
    glVertex2i(125, 115);
    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(105, 95);
    glVertex2i(145, 95);
    glVertex2i(125, 125);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2i(110, 110);
    glVertex2i(140, 110);
    glVertex2i(125, 130);
    glEnd();


//tree no 02
    glColor3f(0.79, 0.3, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(225, 80);
    glVertex2i(225, 50);

    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 80);
    glVertex2i(250, 80);
    glVertex2i(225, 115);
    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(205, 95);
    glVertex2i(245, 95);
    glVertex2i(225, 125);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2i(210, 110);
    glVertex2i(240, 110);
    glVertex2i(225, 130);
    glEnd();

//tree no 03

    glColor3f(0.79, 0.3, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(625, 80);
    glVertex2i(625, 50);

    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(600, 80);
    glVertex2i(650, 80);
    glVertex2i(625, 115);
    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(605, 95);
    glVertex2i(645, 95);
    glVertex2i(625, 125);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2i(610, 110);
    glVertex2i(640, 110);
    glVertex2i(625, 130);
    glEnd();

//tree no 04

    glColor3f(0.79, 0.3, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(725, 80);
    glVertex2i(725, 50);

    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(700, 80);
    glVertex2i(750, 80);
    glVertex2i(725, 115);
    glEnd();

    glColor3f(0.1, 0.9, 0.1);
    glBegin(GL_TRIANGLES);
    glVertex2i(705, 95);
    glVertex2i(745, 95);
    glVertex2i(725, 125);
    glEnd();


    glBegin(GL_TRIANGLES);

    glVertex2i(710, 110);
    glVertex2i(740, 110);
    glVertex2i(725, 130);
    glEnd();




//rail line
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 20);
    glVertex2i(900, 20);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(0, 35);
    glVertex2i(900, 35);
    glEnd();

    int xx=0;
    int yy=10;
    for(int a=0; a<100;a++)
{


    glColor3f(0.0, 0.2, 0.0);
    glLineWidth(5.90);
    glBegin(GL_LINES);
    glVertex2i(xx, 35);
    glVertex2i(yy, 20);
    glEnd();

    xx=yy;
    yy=xx+10;
}

    movingTrain();

}






void init()
{

    glClearColor(0.6, 1.4, 0.3, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 900, 0.0, 600);
}


void daydisplay()

{
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    daysky();
    daycloudMove();
    daymovingCloud();
    home();
    delay();

    glFlush();
}

void nightdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    nightsky();
    nightcloudMove();
    nightmovingCloud();
    delay();
    home();

    glFlush();
}

void raindisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    road();
    rainsky();
    raincloudMove();
    rainmovingCloud();
    delay();
    home();
    rain();
    rainDown();

    glFlush();

}
void myKey(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'd':
            glutDisplayFunc(daydisplay);
            break;

        case 'n':
            glutDisplayFunc(nightdisplay);
            break;

        case 'r':
            glutDisplayFunc(raindisplay);
            break;

        case 't':
            exit(0);
            break;

        default:
              glutDisplayFunc(daydisplay);
            break;
    }
}


int main(int argc, char ** argv)
{
    cout << endl << "SMART CITY" << endl << endl;
    cout << "Enter N for Night mode " << endl << endl;
    cout << "Enter R for Rainy mode " << endl << endl;
    cout << "Enter D for Day mode " << endl << endl;
    cout << "Enter T forExit" << endl << endl;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1000, 600);
    glutCreateWindow("SMART CITY");
    glutKeyboardFunc(myKey);
    init();
    glutDisplayFunc(daydisplay);
    glutMainLoop();
}
