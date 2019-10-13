#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<process.h>
void password()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 char id[10],pass[10];
 int pa;
 setbkcolor(WHITE);
 for(int i=10;i<=25;i=i+4)
 {
 setcolor(7);
 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
 drawpoly(10,border);
 }
 setcolor(RED);
 settextstyle(4,0,5);
 outtextxy(175,20,"User Confirmation");
 settextstyle(4,0,3);
 outtextxy(150,150,"Please Enter User ID");
 gotoxy(48,12);cin>>id;
 outtextxy(150,250,"Please Enter Your Password");
 for(i=1;i<=4;i++)
 {
  gotoxy(55,19);cin>>pass;
  pa=strcmpi(pass,"ludo");
  if(pa==0)
  {
   break;
  }
 }
 if(pa!=0)
 {
  exit(0);
 }
 getch();
}
 void dice()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\bgi");
	setbkcolor(WHITE);
	for(int i=10;i<=25;i=i+4)
	{
	 setcolor(7);
	 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
	 drawpoly(10,border);
	}
	i=1;
	for(i=1;i<=14;i++)
	{
	 settextstyle(4,0,3);
	 {
	 outtextxy(110,50,"LOADING");
	 outtextxy(220,80,"Please Wait");
	 }
	 setfillstyle(1,i);
	 pieslice(350,100,0,360,8);
	 fillellipse(350,100,8,8);
	 pieslice(370,100,0,360,6);
	 pieslice(390,100,0,360,4);
	 settextstyle(DEFAULT_FONT,0,0);
	 setcolor(i);
	 outtextxy(150,200,"             _______            ");
	 outtextxy(150,210,"            /\\o o o \\          ");
	 outtextxy(150,220,"           / o\\o o o \\________ ");
	 outtextxy(150,230,"          <    >------>  o   /|");
	 outtextxy(150,240,"           \\o /   o  /_____ /o|");
	 outtextxy(150,250,"            \\/______/      |oo|");
	 outtextxy(150,260,"                   |   o   | o/");
	 outtextxy(150,270,"                   |       | /");
	 outtextxy(150,280,"                   |_______|/");
	 delay(600);
	 }
	 getch();
	 clrscr();
}

void intro()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(WHITE);
 for(int i=10;i<=25;i=i+4)
 {
 setcolor(7);
 int border[10]={10+i,10+i,629-i,10+i,629-i,469-i,10+i,469-i,10+i,10+i};
 drawpoly(10,border);
 }
 char name[20];
 settextstyle(4,0,3);
 setcolor(7);
 setcolor(GREEN);
 outtextxy(220,40,"____________________________________");
 outtextxy(220,50,"WELCOME TO LUDO MADE BY RISHABH ARYA");
 outtextxy(220,60,"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
 outtextxy(100,70,"GREEN PLAYER");
 outtextxy(150,80,"Enter Your Name");
 gotoxy(32,7);cin>>name;
 setcolor(YELLOW);
 outtextxy(100,110,"YELLOW PLAYER");
 outtextxy(150,120,"Enter Your Name");
 gotoxy(32,9);cin>>name;
 setcolor(BLUE);
 outtextxy(100,150,"BLUE PLAYER");
 outtextxy(150,160,"Enter Your Name");
 gotoxy(32,12);cin>>name;
 setcolor(RED);
 outtextxy(100,190,"RED PLAYER");
 outtextxy(150,200,"Enter Your Name");
 gotoxy(32,14);cin>>name;
 getch();
 clrscr();
 delay(100);
}
void board()
{
 clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 setbkcolor(WHITE);
 setlinestyle(3,5,3);
		   //squares
 //topleft
 setcolor(GREEN);
 setfillstyle(1,GREEN);
 int topleft[10]={0,0,150,0,150,133,0,133,0,0};
 fillpoly(5,topleft);
 //topright
 setcolor(RED);
 setfillstyle(1,RED);
 int topright[10]={500,0,349,0,349,133,500,133,500,0};
 fillpoly(5,topright);
 //bottomleft
 setcolor(YELLOW);
 setfillstyle(1,YELLOW);
 int bottomleft[10]={0,400,150,400,150,267,0,267,0,400};
 fillpoly(5,bottomleft);
 //bottomright
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 int bottomright[10]={500,400,350,400,350,267,500,267,500,400};
 fillpoly(5,bottomright);
   //middle
 //top
 setcolor(RED);
 setfillstyle(1,RED);
 int middletop[8]={150,133,350,133,250,200,150,133};
 fillpoly(4,middletop);
 //bottom
 setcolor(YELLOW);
 setfillstyle(1,YELLOW);
 int middlebottom[8]={150,267,350,267, 250,200, 150,267};
 fillpoly(4,middlebottom);
  //right
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 int middleright[8]={345,267,345,130,250,200,345,267};
 fillpoly(4,middleright);
 //left
 setcolor(GREEN);
 setfillstyle(1,GREEN);
 int middleleft[8]={150,267,150,130,250,200,150,267};
 fillpoly(4,middleleft);
		//lines
    //vertical lines
 setlinestyle(0,5,3);
 setcolor(7);
 for(int i=0;i<150;i=i+25)
 {
 line(i,133,i,267);
 }
  //top
 line(150,0,150,133);
 line(216,0,216,133);
 line(282,0,282,133);
 setcolor(RED);
 setfillstyle(1,RED);
 int middleliddleleft[10]={216,0,216,133,282,133,282,0,216,0};
 fillpoly(4,middleliddleleft);
 setcolor(7);
 line(348,0,348,133);
 //bottom
 line(150,267,150,400);
 line(216,267,216,400);
 line(282,267,282,400);
 setcolor(YELLOW);
 setfillstyle(1,YELLOW);
 int middleliddlebottom[10]={216,267,216,400,282,400,282,267,216,267};
 fillpoly(4,middleliddlebottom);
 setcolor(7);
 line(348,267,348,400);
 for(i=373;i<500;i=i+25)
 {
   line(i,133,i,400-133);
 }
 line(500,0,500,400);
  setlinestyle(0,5,3);
    //horizontal
 setlinestyle(0,5,3);
 setcolor(7);
 for(int j=0;j<133;j=j+22)
 {
 line(285,j,345,j);
 }
 for(j=0;j<133;j=j+22)
 {
 line(150,j,215,j);
 }
       //middle
    //Left
 line(0,133,150,133);
 line(0,177,150,177);
 line(0,221,150,221);
 setcolor(GREEN);
 setfillstyle(1,GREEN);
 int middleliddletop[10]={0,177,150,177,150,221,0,221,0,177};
 fillpoly(4,middleliddletop);
 setcolor(7);
 line(0,265,150,265);
  //right
 line(350,133,500,133);
 line(350,177,500,177);
 line(350,221,500,221);
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 int middleliddleright[10]={340,177,500,177,500,221,340,221,340,177};
 fillpoly(4,middleliddleright);
 setcolor(7);
 line(350,265,500,265);
 for(j=265;j<400;j=j+22)
 {
 line(150,j,215,j);
 }
 for(j=265;j<400;j=j+22)
 {
 line(285,j,345,j);
 }
 line(0,400,500,400);
 setfillstyle(1,WHITE);
 setcolor(WHITE);
	 //top
   //left
 fillellipse(37,90,15,15);
 fillellipse(97,90,15,15);
 fillellipse(37,30,15,15);
 fillellipse(97,30,15,15);
   //right
 fillellipse(463,310,15,15);
 fillellipse(403,310,15,15);
 fillellipse(463,370,15,15);
 fillellipse(403,370,15,15);
	//bottom
   //left
 fillellipse(37,310,15,15);
 fillellipse(97,310,15,15);
 fillellipse(37,370,15,15);
 fillellipse(97,370,15,15);
 //right
 fillellipse(463,90,15,15);
 fillellipse(403,90,15,15);
 fillellipse(463,30,15,15);
 fillellipse(403,30,15,15);

}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\bgi");
 //password();
 //dice();
 //intro();
 //draw();
 board();
       //main code
  //top green
  //hide from the squares
  fillellipse(37,90,15,15);
 //main
 setcolor(7);
 outtextxy(40,415,"Player Green your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 6");
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
 getch();
   //top red
 clrscr();
 board();
 // hide from the sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Red your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 4");
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 getch();
  //bottom yellow
 clrscr();
 board();
 // hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
  //draw
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Yellow your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 getch();
  //bottom blue
 clrscr();
 board();
 //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //draw
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Blue your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 6");
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
 getch();
				 //2ND CHANCE
  //top geeen
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Green your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
  //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(183,99,10,10);
  //draw
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 getch();
   //top red
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Red your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
  //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(315,122,10,10);
  //draw
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 getch();
    //bottom yellow
 clrscr();
 board();
   //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Yellow your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 6");
   //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(138,245,10,10);
  //draw
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 getch();
  //bottom blue
  clrscr();
  board();
  //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
 //main
 setcolor(7);
 outtextxy(40,415,"Player Blue your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
 //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(315,300,10,10);
  //draw
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
 getch();
  //3d chance
  //top geeen
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
  setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Green your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
  //hide
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(249,11,10,10);
  //draw
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,122,10,10);
 getch();
   //top red
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
  setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,122,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,150,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
  setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Red your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 4");
  //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(488,150,10,10);
  //draw
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(386,199,10,10);
 getch();
    //bottom yellow
 clrscr();
 board();
   //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,122,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(386,199,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Yellow your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 3");
   //hide
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(35,199,10,10);
  //draw
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(113,199,10,10);
 getch();
  //bottom blue
  clrscr();
  board();
  //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,122,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(35,199,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(113,199,10,10);
 //main
 setcolor(7);
 outtextxy(40,415,"Player Blue your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 3");
 //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(113,199,10,10);
  //draw
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,212,10,10);
 getch();
 getch();
              //sdasdas
  //top geeen
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(183,99,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Green your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
  //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(183,99,10,10);
  //draw
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 getch();
   //top red
 clrscr();
 board();
  //hide from the squares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
  //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(315,122,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Red your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
  //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(315,122,10,10);
  //draw
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 getch();
    //bottom yellow
 clrscr();
 board();
   //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(138,245,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
  //main
 setcolor(7);
 outtextxy(40,415,"Player Yellow your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 6");
   //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(138,245,10,10);
  //draw
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 getch();
  //bottom blue
  clrscr();
  board();
  //hide from sqares
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(37,90,15,15);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(463,90,15,15);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(37,310,15,15);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(463,310,15,15);
 //drawing
 setfillstyle(1,GREEN);
 setcolor(GREEN);
 fillellipse(249,11,10,10);
 setfillstyle(1,YELLOW);
 setcolor(YELLOW);
 fillellipse(35,199,10,10);
 setfillstyle(1,RED);
 setcolor(RED);
 fillellipse(488,150,10,10);
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(315,300,10,10);
 //main
 setcolor(7);
 outtextxy(40,415,"Player Blue your chance ");
 outtextxy(40,430,"Please press Enter Key");
 getch();
 outtextxy(40,445,"You have Got 5");
 //hide
 setfillstyle(1,WHITE);
 setcolor(WHITE);
 fillellipse(315,300,10,10);
  //draw
 setfillstyle(1,BLUE);
 setcolor(BLUE);
 fillellipse(249,389,10,10);
 getch();
 }
