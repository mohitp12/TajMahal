

	  /* TAJ MAHAL */

#include <graphics.h>
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main(void)

{
   int gd=0,gm,i,j,k,l,x;
   int poly[10];
   initgraph(&gd,&gm," ");

   outtextxy(200,10,"ANIMATION OF TAJ MAHAL");
   outtextxy(65,30,"MADE BY:JIGAR PATEL(100300107050) & MOHIT PATEL(100300107052)") ;
   outtextxy(135,50,"BE VI SEM");
   outtextxy(200,450,"PRESS any KEY TO CONTINUE");
   for(i=0;i<25;i++)
   {
	sound(100*i);
	delay(50);
	nosound();
   }
  // getche();
     // cleardevice();
m:   while(!kbhit())
   {
setcolor(random(15));
	line(0,440,610,440);     //base line
	line(100,440,100,270);   //four vertical lines
	line(510,440,510,270);
	line(220,440,220,240);
	line(390,440,390,240);
setcolor(random(15));
	line(220,280,150,280);       //four horizontal line
	line(390,280,460,280);
	line(135,280,115,280);
	line(475,280,495,280);
	rectangle(165,230,205,280);     //rectangles with domes
	rectangle(405,230,445,280);

	line(150,280,150,265);       //lines
	line(460,280,460,265);
	line(135,280,135,265);
	line(475,280,475,265);
	line(115,280,115,270);
	line(495,280,495,270);
setcolor(random(15));                         //ground of taj
	line(0,440,75,400);
	line(75,400,100,400);
	line(610,440,535,400);
	line(535,400,510,400);
/************************domes above rectangle******************************/
setcolor(random(15));
		line(424.50,200,424.50,160);
		line(184.50,200,184.50,160);
		fillellipse(424.50,200,5,2);
		fillellipse(185.50,202,5,2);

setcolor(4);
		ellipse(185,232,0,180,20,30);
		line(165,230,205,230);
		ellipse(425,230,0,180,20,30);
		line(405,230,445,230);
		floodfill(185,220,4);
		floodfill(420,220,4);
setcolor(1);
		ellipse(185,232,0,180,20,30);
		line(165,230,205,230);
		ellipse(425,230,0,180,20,30);
		line(405,230,445,230);
		floodfill(185,220,1);
		floodfill(420,220,1);
/************************windows inside rectangle***************************/
setcolor(1);
		rectangle(170,240,183,270);    //windows inside rectangle
		rectangle(187,240,200,270);    //left side
		rectangle(410,240,423,270);    //windows inside rectangle
		rectangle(427,240,440,270);    //right side

		floodfill(180,250,1);  //color
		floodfill(190,250,1);
		floodfill(420,250,1);
		floodfill(430,250,1);


setcolor(4);
		rectangle(170,240,183,270);    //windows inside rectangle
		rectangle(187,240,200,270);    //left side
		rectangle(410,240,423,270);    //windows inside rectangle
		rectangle(427,240,440,270);    //right side

		floodfill(180,250,4);  //color
		floodfill(190,250,4);
		floodfill(420,250,4);
		floodfill(430,250,4);

setcolor(random(15));
	/*setfillstyle(1,15);
	floodfill(160,170,random(15));*/
	ellipse(142,265,360,180,7.9999995,15); //domes
	ellipse(468,265,360,180,7.9999995,15);
	ellipse(108,269,360,180,7.9999995,15);
	ellipse(503,269,360,180,7.9999995,15);


setcolor(random(15));
	rectangle(165,300,210,430);//windows
	rectangle(110,300,155,430);
	rectangle(400,300,445,430);
	rectangle(455,300,500,430);

/********************left side windows*************************************/
	poly[0]=187.5;  //first vertex
	poly[1]=310;

	poly[2]=170;  //second vertex
	poly[3]=320;

	poly[4]=170;  //third vertex
	poly[5]=350;

	poly[6]=205;  //fourth vertex
	poly[7]=350;

	poly[8]=205;   //fifth vertex
	poly[9]=320;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=187.5;  //first vertex
	poly[1]=370;

	poly[2]=170;  //second vertex
	poly[3]=380;

	poly[4]=170;  //third vertex
	poly[5]=410;

	poly[6]=205;  //fourth vertex
	poly[7]=410;

	poly[8]=205;   //fifth vertex
	poly[9]=380;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=132.5;  //first vertex
	poly[1]=310;

	poly[2]=115;  //second vertex
	poly[3]=320;

	poly[4]=115;  //third vertex
	poly[5]=350;

	poly[6]=150;  //fourth vertex
	poly[7]=350;

	poly[8]=150;   //fifth vertex
	poly[9]=320;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=132.5;  //first vertex
	poly[1]=370;

	poly[2]=115;  //second vertex
	poly[3]=380;

	poly[4]=115;  //third vertex
	poly[5]=410;

	poly[6]=150;  //fourth vertex
	poly[7]=410;

	poly[8]=150;   //fifth vertex
	poly[9]=380;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}

/***********************right side windows***********************************/

	poly[0]=477.5;  //first vertex
	poly[1]=310;

	poly[2]=460;  //second vertex
	poly[3]=320;

	poly[4]=460;  //third vertex
	poly[5]=350;

	poly[6]=495;  //fourth vertex
	poly[7]=350;

	poly[8]=495;   //fifth vertex
	poly[9]=320;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=477.5;  //first vertex
	poly[1]=370;

	poly[2]=460;  //second vertex
	poly[3]=380;

	poly[4]=460;  //third vertex
	poly[5]=410;

	poly[6]=495;  //fourth vertex
	poly[7]=410;

	poly[8]=495;   //fifth vertex
	poly[9]=380;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=422.5;  //first vertex
	poly[1]=310;

	poly[2]=405;  //second vertex
	poly[3]=320;

	poly[4]=405;  //third vertex
	poly[5]=350;

	poly[6]=440;  //fourth vertex
	poly[7]=350;

	poly[8]=440;   //fifth vertex
	poly[9]=320;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}


	poly[0]=422.5;  //first vertex
	poly[1]=370;

	poly[2]=405;  //second vertex
	poly[3]=380;

	poly[4]=405;  //third vertex
	poly[5]=410;

	poly[6]=440;  //fourth vertex
	poly[7]=410;

	poly[8]=440;   //fifth vertex
	poly[9]=380;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(5, poly);
	}
////////////**************Upper Dome*****************************///////////
setcolor(15);
	ellipse(305,240,0,180,85,120);
	line(220,240,390,240);
	setcolor(random(15));
	floodfill(300,225,15);
	setcolor(0);
/////////////////////***********curves above dome************///////////////
setcolor(random(15));
	line(230,257,230,440);
	line(380,257,380,440);

	ellipse(220,78,321,358,78,71);
	ellipse(172,90,342,7,128,100);

	ellipse(433,82,180,203,128,100);
	ellipse(403,55,194,225,100,100);

	fillellipse(303,80,7,2);
	line(303,120,303,40);


setcolor(1);
	rectangle(220,240,390,256);
	floodfill(230,245,1);
setcolor(4);
	rectangle(220,240,390,256);
	floodfill(230,245,4);


/*****************************TAJ BOTTOM*************************************/

	poly[0]=280;
	poly[1]=330;

	poly[2]=280;
	poly[3]=440;

	poly[4]=330;
	poly[5]=440;

	poly[6]=330;
	poly[7]=330;
	for (i=EMPTY_FILL; i<USER_FILL; i++)
	{
		setfillstyle(1, random(15));
		fillpoly(4, poly);

	}
setcolor(random(15));
	line(230,257,230,440);
	line(380,257,380,440);
	for(i=0;i<25;i++)
	{
		rectangle(235+i,257,375-i,440);
	}
	for(i=0;i<50;i++)
	{
		rectangle(235,257+i,375,440);
	}
   }
     getch();
     if(!kbhit()==1)
     {
	cleardevice();
	goto m;
     }

     return 0;
     getch();


}

