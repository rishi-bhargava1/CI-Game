/*********************************/
/****AUTHOR===RISHI BHARGAVA******
*****PROJECT NAME===CI GAME*******
***********************************/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<conio.h>

int i=30,j=30,x2=85,y2=75,x3=300,y3=375,r1,p=300,q=200;
void dt(int,int,int,int);
void exitt();

void exitr()
{
	setcolor(RED);
	outtextxy(250,260,"....GAME OVER....");
	delay(3000);
	exit(0);
}


void exitg()
{
	setcolor(GREEN);
	outtextxy(250,260,"....YOU WIN....");
	delay(3000);
	exit(0);
}

void boundary(int p,int q)
{
//For coridor-1
					
					if(p>=51 && p<=59 && q>=46 && q<=354)    //LINE CONDITION L1-bar
						{
							exitr();
						}
					if(q>=47 && q<=53 && p>=81 && p<=554)    //LINE CONDITION U1-bar
						{
							exitr();
						}
					if(p>=546 && p<=554 && q>=46 && q<=354)    //LINE CONDITION R1-bar
						{
							exitr();
						}
					if(q>=346 && q<=354 && p>=51 && p<=554)    //LINE CONDITION D1-bar
						{
							exitr();
						}

					
					
						//For coridor-2
					
					if(p>=101 && p<=109 && q>=96 && q<=304)    //LINE CONDITION L2-bar
						{
							exitr();
						}
					if(q>=96 && q<=104 && p>=101 && p<=504)    //LINE CONDITION U2-bar
						{
							exitr();
						}
					if(p>=496 && p<=504 && q>=96 && q<=274)    //LINE CONDITION R2-bar
						{
							exitr();
						}
					if(q>=296 && q<=304 && p>=101 && p<=504)    //LINE CONDITION D2-bar
						{
							exitr();
						}

					
					
					//For coridor-3
					
					if(p>=151 && p<=159 && q>=176 && q<=254)    //LINE CONDITION L2-bar
						{
							exitr();
						}
					if(q>=146 && q<=154 && p>=151 && p<=454)    //LINE CONDITION U2-bar
						{
							exitr();
						}
					if(p>=446 && p<=454 && q>=146 && q<=254)    //LINE CONDITION R2-bar
						{
							exitr();
						}
					if(q>=246 && q<=254 && p>=151 && p<=454)    //LINE CONDITION D2-bar
						{
							exitr();
						}
					
					
					
					
					
					if(p<13 || q>385 || p>595 || q<13)     //BOUNDARY CONDITION 6 BLUE
						{
							 exitr();
						}

					if(p>=96 && p<=104 && q>=50 && q<=75)    //BOUNDARY CONDITION 6 BLUE cr-1 up-1
						{
							exitr();
						}
					if(p>=136 && p<=144 && q>=80 && q<=100)    //BOUNDARY CONDITION 6 BLUE cr-1 dn-1
						{
							exitr();
						}
					if(p>=55 && p<=75 && q>=146 && q<=154)    //BOUNDARY CONDITION 6 BLUE cr-1 Lf-1
						{
							exitr();
						}
					if(p>=85 && p<=105 && q>=176 && q<=184)    //BOUNDARY CONDITION 6 BLUE cr-1 Rt-1
						{
							exitr();
						}
					if(p>=181 && p<=190 && q>=150 && q<=228)    //BOUNDARY CONDITION 6 BLUE cr-3 up-1
						{
							exitr();
						}	
					if(p>=204 && p<=213 && q>=172 && q<=250)    //BOUNDARY CONDITION 6 BLUE cr-3 dn-1
						{
							exitr();
						}
}            //end void boundary()

void dt()
		{
			int i1,i2,j1,j2;
			
			//Red circle coridor-1 i=30,j=30
			if(p>i && q>j)
				{
					i1=p-i;
					i2=q-j;
					if(i1<=7 && i2<=7)
						{
							exitr();
						}
					else
						i1=0;
						i2=0;
				}
			if(p>i && q<j)
				{
					i1=p-i;
					i2=j-q;
					if(i1<=7 && i2<=7)
						{
							 exitr();
						}
					else
						i1=0;
						i2=0;
				}

			if(p<i && q>j)
				{
					j1=i-p;
					j2=q-j;
					if(j1<=7 && j2<=8)
						{
						  exitr();
						}
					else
						j1=0;
						j2=0;
				}
			if(p<i && q<j)
				{
					j1=i-p;
					j2=j-q;
					if(j1<=7 && j2<=8)
						{
						  exitr();
						}
					else
						j1=0;
						j2=0;
				}

			// Red circle coridor-2  x2=85,y2=75

			if(p>x2 && q>y2)
				{
					i1=p-x2;
					i2=q-y2;
					if(i1<=7 && i2<=7)
						{
							 exitr();
						}
					else
						i1=0;
						i2=0;
				}
			if(p>x2 && q<y2)
				{
					i1=p-x2;
					i2=y2-q;
					if(i1<=7 && i2<=7)
						{
							 exitr();
						}
					else
						i1=0;
						i2=0;
				}

			if(p<x2 && q>y2)
				{
					j1=x2-p;
					j2=q-y2;
					if(j1<=7 && j2<=8)
						{
						  exitr();
						}
					else
						j1=0;
						j2=0;
				}
			if(p<x2 && q<y2)
				{
					j1=x2-p;
					j2=y2-q;
					if(j1<=7 && j2<=8)
						{
						  exitr();
						}
					else
						j1=0;
						j2=0;

				}

			// GREEN CIRCLE INTERSECTION x3=300,y3=375

				if(p>x3 && q>y3)
				{
					i1=p-x3;
					i2=q-y3;
					if(i1<=7 && i2<=7)
						{
							 exitg();
						}
					else
						i1=0;
						i2=0;
				}
			if(p>x3 && q<y3)
				{
					i1=p-x3;
					i2=y3-q;
					if(i1<=7 && i2<=7)
						{
							exitg();
						}
					else
						i1=0;
						i2=0;
				}

			if(p<x3 && q>y3)
				{
					j1=x3-p;
					j2=q-y3;
					if(j1<=7 && j2<=8)
						{
						 exitg();
						}
					else
						j1=0;
						j2=0;
				}
			if(p<x3 && q<y3)
				{
					j1=x3-p;
					j2=y3-q;
					if(j1<=7 && j2<=8)
						{
						 exitg();
						}
					else
						j1=0;
						j2=0;
			
				}
			
			}   //end void dt()







void main()
    {

      int l=0,m=0,ch,gd=DETECT,gm;
      int c,d=1000,e=1000; //v=1;
      int i1,i2,j1,j2;
      initgraph(&gd,&gm,"C:\\TC\\BGI");
/*    for(c=0;c<=4;c++)     // for loop for instruction
		{
			printf("\n%d",v);
			v++;
			printf("\tINSTRUCTION---- INTERSECT THE CIRCLES");
			outtextxy(250,250,"GAME LOADING..");
			delay(1000);
			clearviewport();
	} */

      while(1)
		{
			
					for(r1=1;r1<10;r1++)       // GREEN CIRCLE BLINK....
						{
							setcolor(GREEN);
							circle(300,375,r1);


					setbkcolor(LIGHTGRAY);
					setcolor(RED);
					rectangle(55,50,550,350);  //Rectangle-1
					bar(55,50,85,50);
					rectangle(105,100,500,300); //Rectangle-2
					bar(500,300,500,270);
					rectangle(155,150,450,250); //Rectangle-3
					bar(155,150,155,180);

					setcolor(RED);
					rectangle(100,50,101,75); // cr-1 up-1
					setcolor(RED);
					rectangle(140,80,141,100); // cr-1 dn-2
					setcolor(RED);
					rectangle(55,150,75,151); // cr-1 Lf-1
					setcolor(RED);
					rectangle(105,180,85,181); // cr-1 RT-1
					setcolor(RED);
					rectangle(185,150,186,228); // cr-3 up-1
					setcolor(RED);
					rectangle(208,250,209,172); // cr-3 dn-1
					
					setcolor(BLUE);
					circle(p,q,6);    // Blue circle
					setcolor(RED);
					rectangle(10,10,600,390);  //Most Outer rectangle
					outtextxy(400,400,"Press Esc to Exit.....");
					setcolor(RED);
					circle(i,j,6);  // Red circle coridor-1 i=30,j=30
					setcolor(GREEN);
					circle(x3,y3,6);  // Green circle
					setcolor(RED);
					circle(x2,y2,6);  // Red circle coridor-2  x2=85,y2=75
					setcolor(YELLOW);
					outtextxy(250,220,"CI GAME BY RISHI");
					delay(0);
					setcolor(RED);


					if(i<583 && j>=30 && j<32) // Red circle coridor-1 move
					{	i=i+8;  }
					if(i>580)
					{	j=j+8;  }

					if(j>370 && i>35)
					{       i=i-8;  }
					if(i==30 )
					{        j=j-8; }


					if(x2<525 && y2>=75 && y2<77) // Red circle coridor-2 move
					{	x2=x2+7;  }
					if(x2>523)
					{	y2=y2+7;  }

					if(y2>325 && x2>85)
					{       x2=x2-7;  }
					if(x2==85 )
					{        y2=y2-7; }

					
					
					
					if(kbhit())     //KEY CHECK
						{
							ch=getch();
							if(ch==72)   //up-key
								{
									  l=0;   //a=-3;
									   m=-4;  //b= 1;
								}
							if(ch==75)   //left-key
								{
								   l=-4;  //a=1;
								   m=0; //b=3;
								}
							if(ch==77)   //right-key
								{
									  l=4;  //a=-2;
									   m=0;  //b=-1;
								}
							if(ch==80)   //down-key
								{
									  l=0; //a=2;
									  m=4;  //b=-2;
								}
							if(ch==27)
							  exit(0);
						}                           //END KEY CHECK
					  p=p+l; //     //MOVES IN CIRCLES
					 q=q+m; //      //MOVES IN CIRCLES

						
					
					dt(i1,i2,j1,j2);
					boundary(p,q);  
					delay(50);
					cleardevice();

				
					}  // END FOR GREEN CIRCLE BLINK....				
		}              //END WHILE LOOP
    }                  //END MAIN

	