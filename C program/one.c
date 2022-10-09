//////////////////// 1 WAP to draw a line using DDA Algorithm /////////////////////////////////////

#include<graphics.h>
#include <iostream.h>
#include <math.h>
#include <dos.h>
 
void main( )
{
float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;
 
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 
cout<<"Enter the value of x1 and y1 : ";
cin>>x1>>y1;
cout<<"Enter the value of x2 and y2: ";
cin>>x2>>y2;
 
dx=abs(x2-x1);
dy=abs(y2-y1);
 
if(dx>=dy)
step=dx;
else
step=dy;
 
dx=dx/step;
dy=dy/step;
 
x=x1;
y=y1;
 
i=1;
while(i<=step)
{
putpixel(x,y,5);
x=x+dx;
y=y+dy;
i=i+1;
delay(100);
}
 
closegraph();
}


/////////////////////////////////////// 2.  WAP to draw a line using Brenham’s Algorithm ///////////////////////////////////


#include<iostream.h>
#include<graphics.h>
 
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
 
dx=x1-x0;
dy=y1-y0;
 
x=x0;
y=y0;
 
p=2*dy-dx;
 
while(x<x1)
{
if(p>=0)
{
putpixel(x,y,7);
y=y+1;
p=p+2*dy-2*dx;
}
else
{
putpixel(x,y,7);
p=p+2*dy;
}
x=x+1;
}
}
 
int main()
{
int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
cout<<"Enter co-ordinates of first point: ";
cin>>x0>>y0;
 
cout<<"Enter co-ordinates of second point: ";
cin>>x1>>y1;
drawline(x0, y0, x1, y1);
 
return 0;
}

////////////////////////////////////////// 3. WAP to draw a Circle using Mid-Point- Circle Algorithm.   ////////////////////////////////////

#include<graphics.h>#include<iostream.h>
#include<graphics.h>
 
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
putpixel(x0 + x, y0 + y, 7);
putpixel(x0 + y, y0 + x, 7);
putpixel(x0 - y, y0 + x, 7);
putpixel(x0 - x, y0 + y, 7);
putpixel(x0 - x, y0 - y, 7);
putpixel(x0 - y, y0 - x, 7);
putpixel(x0 + y, y0 - x, 7);
putpixel(x0 + x, y0 - y, 7);
 
if (err <= 0)
{
    y += 1;
    err += 2*y + 1;
}
 
if (err > 0)
{
    x -= 1;
    err -= 2*x + 1;
}
    }
}
 
int main()
{
int gdriver=DETECT, gmode, error, x, y, r;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
 
cout<<"Enter radius of circle: ";
cin>>r;
 
cout<<"Enter co-ordinates of center(x and y): ";
cin>>x>>y;
drawcircle(x, y, r);
 
return 0;
}


//////////////////////////////////  4. WAP to draw a Fish. ////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 
void main()
{
int gd,gm;
detectgraph(&gd,&gm);
 
initgraph(&gd,&gm,"C:\\TC\\BGI");
ellipse(200,200,0,360,130,50);
setfillstyle(LINE_FILL,CYAN);
floodfill(201,201,15);
 
line(325,185,390,155);
line(390,155,360,200);
line(360,235,325,215);
line(395,235,325,215);
setfillstyle(LINE_FILL,LIGHTRED);
floodfill(330,190,15);
 
ellipse(100,200,315,45,50,60);
circle(120,180,3);
setfillstyle(SOLID_FILL,YELLOW):
floodfill(120,180,3);
 
line(170,150,260,90);
line(260,90,220,150);
setfillstyle(LINE_FILL,LIGHTRED);
floodfill(200,140,15);
 
line(170,250,260,290);
line(260,290,230,250);
setfillstyle(LINE_FILL,LIGHTRED);
floodfill(200,255,15);
 
arc(220,185,270,90,6);
I
arc(200,185,270,90,6);
arc(180,185,270,90,6);
arc(200,215,270,90,6);
arc(220,215,270,90,6);
arc(180,215,270,90,6);
arc(240,200,270,90,6);
 
getch();
closegraph();
}


///////////////////////////////////////////  5. WAP to draw a Human Face./////////////////////////////////

#include<stdio.h>#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
void main() 
{ 
int gd=DETECT,gm; 
initgraph(&gd,&gm,"c:\tc\bgi"); 
setcolor(GREEN); 
setbkcolor(0); 
/*-------------------CHIN------------------------*/ 
ellipse(298,244,160,380,60,80); 
/*----------------- HAIR ------------------------*/ 
arc(300,219,400,140,80); 
ellipse(355,190,270,438,10,28); 
arc(359,188,169,265,30); 
ellipse(288,190,180,360,40,20); 
ellipse(239,193,96,370,8,25); 
/*---------------Eye Brows-------------------------*/ 
arc(282,255,89,130,40); 
arc(278,259,80,120,40); 
arc(314,255,405,92,40); 
arc(319,259,420,100,40); 
line(310,215,310,220); 
line(284,215,284,219); 
/*-------------------Eyes--------------------------*/ 
setfillstyle(SOLID_FILL,WHITE); 
ellipse(320,230,0,360,10,5); 
ellipse(275,230,0,360,10,5); 
fillellipse(320,230,10,5); 
fillellipse(275,230,10,5); 
setfillstyle(SOLID_FILL,BLACK); 
ellipse(320,230,0,360,4,4); 
ellipse(275,230,0,360,4,4); 
fillellipse(320,230,5,5); 
fillellipse(275,230,5,5); 
/*------------------Nose----------------------*/ 
ellipse(280,220,270,0,10,40); 
ellipse(315,220,180,270,10,40); 
ellipse(285,260,100,285,8,7); 
ellipse(310,260,255,70,8,7); 
circle(320,230,2); 
circle(275,230,2); 
arc(297,257,228,689,15); 
/*---------------------MOUTH--------------------*/ 
ellipse(298,290,0,360,30,7); 
line(270,290,326,290); 
/*----------------------Ears--------------------*/ 
ellipse(234,240,0,330,4,20); 
ellipse(362,240,220,170,4,20); 
getch(); 
closegraph(); 
restorecrtmode(); 
}


/////////////////////////// 6. WAP to draw a Rainbow./ //////////////////////////

// A C program to make a rainbow. This program would only
// work in Turbo C compiler in DOS compatible machine
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

// function for making of rainbow
void rainbow()
{
    // auto detection
    int gdriver = DETECT,gmode;
    int x, y, i;

    // initialize graphics mode(passed three arguments to
    // initgraph function)
    // &gdriver is the address of gdriver variable, &gmode is
    // the address of gmode and
    // "C:\\Turboc3\\BGI" is the directory path where BGI files are stored
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");

    x = getmaxx() / 2;//finding centre x-ordinate of screen
    y = getmaxy() / 2;//finding centre y-ordinate of screen

    for (i=30; i<200; i++)
    {
        // delay function under dos.h for holding the
        // function for some time
        delay(100);

        // selecting color for making of rainbow
        setcolor(i/10);

        // making of arc with fixed centre and increasing radius
        arc(x, y, 0, 180, i-10);
    }
}
// driver program
int main()
{
    rainbow();
    return 0;
}

//////////////////////////////// 7.WAP to show the rotation of a line by the given angles.

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int pivot_x,pivot_y,x,y;
double degree,radian;
int rotated_point_x,rotated_point_y;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
cleardevice();
printf("\t\t*********** ROTATION *********** \n");
printf("\n Enter an initial coordinates of the line = ");
scanf("%d %d",&pivot_x,&pivot_y);
printf("\n Enter a final coordinates of the line = ");
scanf("%d %d",&x,&y);
line(pivot_x,pivot_y,x,y);
printf("\n\n Now, Enter a degree = ");
scanf("%lf",&degree);
radian=degree*0.01745;
rotated_point_x=(int)(pivot_x +((x-pivot_x)*cos(radian)-(y-pivot_y)*sin(radian)));
rotated_point_y=(int)(pivot_y +((x-pivot_x)*sin(radian)+(y-pivot_y)*cos(radian)));
setcolor(RED);
line(pivot_x,pivot_y,rotated_point_x,rotated_point_y);
getch();
closegraph();
}

//////////////////////////////// 8.WAP to show the rotation of a triangle by the given angle.

#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
 
int main(){ 
    int gd=0,gm = DETECT,x1,y1,x2,y2,x3,y3;  
    x1 = 200, y1 = 200, x2 = 100, y2 = 200, x3 = 200, y3 = 100;
 
    double s,c, angle;  
    initgraph(&gd, &gm, "");  
    // printf("Enter coordinates of triangle: ");  
    // scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);  
    
    line(x1,y1,x2,y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
 
    printf("Enter rotation angle: ");  
    scanf("%lf", &angle);  
 
    cout << " Enter Pivot ";
    int xpiv, ypiv;
    cin >> xpiv >> ypiv;
 
    x1 -= xpiv;
    x2 -= xpiv;
    x3 -= xpiv;
 
    y1 -= ypiv;
    y2 -= ypiv;
    y3 -= ypiv;
 
 
    c = cos(angle * M_PI/180);  
    s = sin(angle * M_PI/180);  
    x1 =  xpiv + floor(x1 * c + y1 * s);  
    y1 = ypiv + floor(-x1 * s + y1 * c);  
    x2 =  xpiv + floor(x2 * c + y2 * s);  
    y2 = ypiv + floor(-x2 * s + y2 * c);  
    x3 = xpiv +  floor(x3 * c + y3 * s);  
    y3 = ypiv + floor(-x3 * s + y3 * c);  
    cleardevice();  
    line(x1, y1 ,x2, y2);  
    line(x2,y2, x3,y3);  
    line(x3, y3, x1, y1);  
    getch();  
    closegraph();  
    return 0;  
}

///////////////////////////////////////// 9. WAP to draw a Hut.


#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\t\t ********* HUT ********");
line(150,100,50,200);
line(150,100,350,100); 
line(150,100,300,200);
line(300,200,500,200);
line(350,100,500,200);
line(50,200,300,200);
rectangle(50,400,300,200);
rectangle(300,200,500,400);
rectangle(130,250,230,400);

getch();
closegraph();

}

/////////////////////////////////// 10. WAP to draw a Cube.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 int  main()
   {
    int gdriver = DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 //1st rectangle
 rectangle(100,200,200,300);
 //2nd rectangle
 rectangle(150,250,250,350);
       // 1st line
 line(100,200,150,250);
 // 2nd line
 line(200,300,250,350);
 // 3rd line
 line(100,300,150,350);
 // 4th line
 line(200,200,250,250);
 getch();
 return 0;
   closegraph();
  }


  ////////////////////////////  11  WAP to draw a Pie Chart of Marks entered by User. 

  #include<graphics.h>
#include<conio.h>
 
int main() {
   int gd = DETECT, gm, x, y;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   settextstyle(BOLD_FONT,HORIZ_DIR,2);
   outtextxy(220,10,"PIE CHART");
   /* Setting cordinate of center of circle */
   x = getmaxx()/2;
   y = getmaxy()/2;
 
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
   setfillstyle(SOLID_FILL, RED);
   pieslice(x, y, 0, 60, 120);
   outtextxy(x + 140, y - 70, "FOOD");
 
   setfillstyle(SOLID_FILL, YELLOW);
   pieslice(x, y, 60, 160, 120);
   outtextxy(x - 30, y - 170, "RENT");
 
   setfillstyle(SOLID_FILL, GREEN);
   pieslice(x, y, 160, 220, 120);
   outtextxy(x - 250, y, "ELECTRICITY");
 
   setfillstyle(SOLID_FILL, BROWN);
   pieslice(x, y, 220, 360, 120);
   outtextxy(x, y + 150, "SAVINGS");
 
   getch();
   closegraph();
   return 0;
}


//////////////////////////////////12 .WAP to Rotate a Line.

#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{

	int gd=DETECT, r, gm, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
    float ra, si, co;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    printf("Enter the value of X1 and Y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the value of X2 and Y2: ");
    scanf("%d %d", &x2, &y2);

    line(x1, y1, x2, y2);

    printf("Enter the degree of rotation: ");
    scanf("%d", &d);

    //Starting point would be same
    xn1 = x1;
    yn1 = y1;

    //Convert Degree into radian
    r = x2-x1;
    ra = 0.0175 * d;
    si = sin(ra);
    co = cos(ra);
    //second point
    xn2 = x1 + r*co + 1;
    yn2 = y1 + r*si + 1;

	line(xn1, yn1, xn2, yn2);
	getch();
	closegraph();
}




///////////////////////////// 13. WAP for Flood fill Algorithm.


#include<iostream> 
using namespace std; 
// Dimentions of myScreen. You may change
#define M 8
#define N 8
  
// A recursive function to replace 
// previous color 'currColor' at  '(x, y)'  
// and all surrounding pixels of (x, y) 
// with new color 'newColor'
void floodFill(int myScreen[][N], int x, int y, int currColor, int newColor) 
{ 
    // Base cases 
    if (x < 0 || x >= M || y < 0 || y >= N) 
        return; 
    if (myScreen[x][y] != currColor) 
        return; 
    if (myScreen[x][y] == newColor) 
        return; 
  
    // Replace the color at cell (x, y) 
    myScreen[x][y] = newColor; 
  
    // Recursively call for north, east, south and west 
    floodFill(myScreen, x+1, y, currColor, newColor); 
    floodFill(myScreen, x-1, y, currColor, newColor); 
    floodFill(myScreen, x, y+1, currColor, newColor); 
    floodFill(myScreen, x, y-1, currColor, newColor); 
} 
  
// It mainly finds the previous color on (x, y) and 
// calls floodFill() 
void findColor(int myScreen[][N], int x, int y, int newColor) 
{ 
    int currColor = myScreen[x][y]; 
    floodFill(myScreen, x, y, currColor, newColor); 
} 
  
// Driver program to test above function 
int main() 
{ 
    int myScreen[M][N] = 
                    {
                      {3, 2, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1}, 
                     }; 
    int x = 4, y = 4, newColor = 3; 
    findColor(myScreen, x, y, newColor); 
  
    cout << "Updated myScreen : \n"; 
    
    //printing screen
    for (int i=0; i<M; i++) 
    { 
        for (int j=0; j<N; j++) 
           cout << myScreen[i][j] << " "; 
        cout << endl; 
    } 
    return 0;
} 




//////////////////////////////////14. WAP for 2D Transformation.


#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing   "<<endl;
    cout<<"Selection:";
    cin>>s;
    switch(s)
        {
        case 1:
            {   int x1=200,y1=150,x2=300,y2=250;
                int tx=50,ty=50;
                cout<<"Rectangle before translation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();
                break;
            }
        case 2:
            {  long x1=200,y1=200,x2=300,y2=300;
                double a;
                cout<<"Rectangle with rotation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;
                long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
                long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
                setcolor(2);
                rectangle(x1,y1,xr,yr);
                getch();
                break;
}
        case 3:
            {
                int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"After scaling"<<endl;
                setcolor(10);
                rectangle(x1*x,y1*y,x2*x,y2*y);
                getch();
                break;
}
        case 4:
            {
                 int x1=200,y1=300,x2=500,y2=300,x3=350,y3=400;
                 cout<<"triangle before reflection"<<endl;
                 setcolor(3);
                 line(x1,y1,x2,y2);
                 line(x1,y1,x3,y3);
                 line(x2,y2,x3,y3);
cout<<"triangle after reflection"<<endl;
                 setcolor(5);
                 line(x1,-y1+500,x2,-y2+500);
                 line(x1,-y1+500,x3,-y3+500);
                 line(x2,-y2+500,x3,-y3+500);
                 getch();
                 break;
}
        case 5:
        {
  int x1=400,y1=100,x2=600,y2=100,x3=400,y3=200,x4=600,y4=200,shx=2;
             cout<<"Before shearing of rectangle"<<endl;
             setcolor(3);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
             cout<<"After shearing of rectangle"<<endl;
             x1=x1+shx*y1;
             x2=x2+shx*y2;
             x3=x3+shx*y3;
             x4=x4+shx*y4;
             setcolor(13);
             line(x1,y1,x2,y2);
             line(x1,y1,x3,y3);
             line(x3,y3,x4,y4);
             line(x2,y2,x4,y4);
getch();
}
default:
          {
            cout<<"Invalid Selection"<<endl;
            break;
          }
        }
closegraph();
    return 0;
}


////////////////////////////////////  15. WAP to Reflect a Triangle.

#include <conio.h>
#include <graphics.h>
#include <stdio.h>
  
// Driver Code
void main()
{
    // Initialize the drivers
    int gm, gd = DETECT, ax, x1 = 100;
    int x2 = 100, x3 = 200, y1 = 100;
    int y2 = 200, y3 = 100;
  
    // Add in your BGI folder path
    // like below initgraph(&gd, &gm,
    // "C:\\TURBOC3\\BGI");
    initgraph(&gd, &gm, "");
    cleardevice();
  
    // Draw the graph
    line(getmaxx() / 2, 0, getmaxx() / 2,
         getmaxy());
    line(0, getmaxy() / 2, getmaxx(),
         getmaxy() / 2);
  
    // Object initially at 2nd quadrant
    printf("Before Reflection Object"
           " in 2nd Quadrant");
  
    // Set the color
    setcolor(14);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();
  
    // After reflection
    printf("\nAfter Reflection");
  
    // Reflection along origin i.e.,
    // in 4th quadrant
    setcolor(4);
    line(getmaxx() - x1, getmaxy() - y1,
         getmaxx() - x2, getmaxy() - y2);
  
    line(getmaxx() - x2, getmaxy() - y2,
         getmaxx() - x3, getmaxy() - y3);
  
    line(getmaxx() - x3, getmaxy() - y3,
         getmaxx() - x1, getmaxy() - y1);
  
    // Reflection along x-axis i.e.,
    // in 1st quadrant
    setcolor(3);
    line(getmaxx() - x1, y1,
         getmaxx() - x2, y2);
    line(getmaxx() - x2, y2,
         getmaxx() - x3, y3);
    line(getmaxx() - x3, y3,
         getmaxx() - x1, y1);
  
    // Reflection along y-axis i.e.,
    // in 3rd quadrant
    setcolor(2);
    line(x1, getmaxy() - y1, x2,
         getmaxy() - y2);
    line(x2, getmaxy() - y2, x3,
         getmaxy() - y3);
    line(x3, getmaxy() - y3, x1,
         getmaxy() - y1);
    getch();
  
    // Close the graphics
    closegraph();
}