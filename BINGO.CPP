#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>

const char CPPKEYUP = 72;
const char CPPKEYLEFT = 75;
const char CPPKEYRIGHT = 77;
const char CPPKEYDOWN = 80;
char Arrow=0;
time_t t;
float x1,x2,d,xx;
int u,num,col[10],place[10][10],row,column,k,v=1;//v for draw.k for next page.

void Home();
void BINGO(int,char);
void welcomeS();
void welcome();
void choiceS();
void SingleS();
void MultiS();
void intro();
void introS(int);
void introg(int);
void hori();
void verti();
void rtoldia();
void ltordia();
void Pn();
void Single();
int SPlayS();
void SPlay();
int SRP();
void scissors(int);
void rock(int);
void paper(int);
void Multi();
void MPlayS1();
void MPlayS1n();
void MPlayS2();
void MPlayS2n();
void MPlayS3();
void MPlayS3n();
void MPlayS4();
void MPlayS4n();
void MPlaySn();
void MPlayS();
void MPlay();
void win1();
void win2();
void win3();
void win4(char);
void win();
void winS();
void twoS();
void loseS();
void wrongS();
void bombS();
void colorS(int c);
int color(int c);

void main()
{
	clrscr();
    int d=DETECT,m;
    initgraph(&d,&m,"c:\\turboC3\\bgi");	
    settextstyle(3,0,1); 
   	Home();
	bombS();
	delay(1000);
    clrscr();
    cleardevice();
    delay(1000);
    welcome();
    getch();
}

void Home()
{
	int i,j;
	for(j=470;j>0;j-=15)
	{
		clrscr();
		cleardevice();
		BINGO(j,'s');
		delay(45);
	}
	delay(10);

	for(j=320;j>0;j-=20)
	{
		BINGO(0,'s');
		for(i=0;i<15;i++)
		{
			setcolor(7);
			setfillstyle(1,7);
			fillellipse(360,300-j,20,20);
			line(350,310+i-j,310,310+i-j);
			line(350,310+i-j,330,320+i-j);
			line(330,320+i-j,310,305+i-j);
			line(310,310+i-j,285,305+i-j);
			line(285,305+i-j,260,310+i-j);
		} delay(1);
	}delay(100);
	sound(30);delay(100);nosound();
	BINGO(0,'s');
	for(i=0;i<8;i++)
	{
		setcolor(7);
		setfillstyle(1,7);
		fillellipse(340,270,20,20);
		line(340,280+i,310,310+i);
		line(340+i,280,320+i,310);
		line(327-i,307,300-i,320);
		line(310,310+i,295,300+i);
		line(295,300+i,270,310+i);
	}  delay(100);

	BINGO(0,'s');
	for(i=0;i<8;i++)
	{
		setcolor(7);
		setfillstyle(1,7);
		fillellipse(325,240,20,20);
		line(320+i,250,310+i,315);
		line(320+i,250,318+i,270);
		line(318+i,270,300+i,300);
		line(310+i,315,300+i,280);
		line(300+i,280,290+i,310);
	}  delay(100);
	BINGO(0,'s');
	for(i=0;i<6;i++)
	{
		setcolor(7);
		setfillstyle(1,7);
		fillellipse(320,180,20,20);
		line(318+i,200,318+i,250);
		line(318+i,203,320+i,240);
		line(318+i,203,313+i,240);
		line(320+i,240,325+i,260);
		line(313+i,240,320+i,260);
		line(318+i,250,323+i,280);
		line(318+i,250,316+i,280);
		line(323+i,280,318+i,310);
		line(316+i,280,313+i,310);
	}
	for(j=0;j<4;j++)
	{
		BINGO(0,'s');
		for(i=0;i<6;i++)
		{
			setcolor(7);
			setfillstyle(1,7);
			fillellipse(320,180,20,20);
			line(318+i,200,318+i,250);
			line(318,208+i,337,215+i);
			line(337,215+i,356,208+i);
			line(318+i,250,330+i,280);
			line(318+i,250,316+i,280);
			line(330+i,280,330+i,310);
			line(316+i,280,300+i,310);
		}delay(300);
		BINGO(0,'s');
		for(i=0;i<6;i++)
		{
			setcolor(7);
			setfillstyle(1,7);
			fillellipse(335,185,20,20);
			line(328+i,205,318+i,250);
			line(328,208+i,342,230+i);
			line(342,230+i,356,208+i);
			line(318+i,250,330+i,280);
			line(318+i,250,316+i,280);
			line(330+i,280,330+i,310);
			line(316+i,280,300+i,310);
		}delay(600);
	}delay(600);
	sound(30);delay(100);nosound();
	BINGO(0,'m');
	for(i=0;i<6;i++)
	{
		setcolor(7);
		setfillstyle(1,7);
		fillellipse(370,220,20,20);
		line(368+i,210,338+i,270);
		line(355+i,225,386+i,280);
		line(355+i,225,376+i,280);
		line(338+i,270,320+i,295);
		line(338,270+i,318,283+i);
		line(320+i,295,310+i,310);
		line(318,283+i,300,280+i);
	}delay(100);
	sound(30);delay(100);nosound();
	BINGO(0,'v');
	for(i=0;i<6;i++)
	{
		setcolor(7);
		setfillstyle(1,7);
		fillellipse(360,300,20,20);
		line(350,310+i,310,305+i);
		line(350,310+i,320,315+i);
		line(320,315+i,350,320+i);
		line(310,305+i,285,320+i);
		line(285,320+i,260,320+i);
	}delay(1000);
}

void BINGO(int j,char t)
{
	clrscr();
	cleardevice();
	int i;
	setcolor(14);
	for(i=0;i<10;i++)
		{
			line(174+i-j,170,174+i-j,290);
			arc(192-j,260,240,120,28+i);
			arc(192-j,200,290,120,28+i);	//B
			line(234-j,170+i,284-j,170+i);
			line(234-j,290-i,284-j,290-i);
			line(257+i-j,175,257+i-j,285);	//I
			line(292+i-j,170,292+i-j,290);
			line(342+i-j,170,342+i-j,290);
			line(292+i-j,170,342+i-j,290);	//N
			if(t=='s')
			{
				ellipse(390-j,230,0,360,25+i,58+i);	//O
				ellipse(459-j,230,220,140,25+i,58+i);
				line(456-j,250+i,424-j,250+i);
				line(424+i-j,254,424+i-j,290);	//G
			}
			else if(t=='m')
				line(418+i,170,418+i,290);
			else
			{
				ellipse(390-j,230,40,320,25+i,58+i);
				line(390-j,250+i,422-j,250+i);
				line(413+i-j,254,413+i-j,290);	//G
				ellipse(459-j,230,0,360,25+i,58+i);	//O
			}
		}
}

void welcomeS()
{
	 clrscr();
     cleardevice();
     setcolor(3);
     outtextxy(250,90,"Welcome ");
     outtextxy(120,150,"Single Player");
     outtextxy(120,200,"Multi Player");
     outtextxy(120,250,"How to play this game");
     outtextxy(120,300,"Exit");
}

void welcome()
{
	clrscr();
	cleardevice();
	u=0;
	int x=70,y=150;
	welcomeS();
	int i,n;
	char ch='n';
	setcolor(9);
	outtextxy(x,y,">>>");
	Arrow=0;
	while(Arrow!='\r')
   	{
   		Arrow = getch();
		welcomeS();
		switch(Arrow)
   		{
	   		case CPPKEYUP:
		   	{		   		
		   		setcolor(9);
		   		if(y>150)
		   		{
		   			y=y-50;
				    outtextxy(x,y,">>>");
		   		}
		   		else
	    		{
		   			y=300;
				    outtextxy(x,y,">>>");
		   		}
		   	}break;
   			case CPPKEYDOWN:
			{
				setcolor(9);
		     	if(y<300)
				{
					y=y+50;
					outtextxy(x,y,">>>");
				}
		     	else 
				 	{
					y=150;
					outtextxy(x,y,">>>");
				}
	     	}break;
    		default:outtextxy(x,y,">>>");
		}
    }sound(400);delay(30);nosound();
    Arrow=0;
    switch(y)
    {
       case 150:
	            {
	            	col[0]=color(-1);
					col[1]=(col[0]+3)%15;
					Single();					
				}break;
       case 200:
	   			{
	   				while(ch!='y')
					{
						MultiS();
						char a[3];
						int i=-1,e=0;
						cout<<"\n\n\n\n\n\nHow many people will play? (Maximum 10) \n";
						do{							
							i++;						
							a[i]=getch();				
							if(a[i]=='\r')
							{
								i=4;
							}
							else 
							{
								e*=10;
								e+=int(a[i]-48);
							}
							cout<<a[i];
						}while(a[i]!='\r'&&i<3);
						while(e>10||e<2)
						{
							cout<<"\nCan't access. Can access between ten and two people (including ten and two).\nHow many people will play? \n";i=-1;e=0;
							do{							
							i++;						
							a[i]=getch();				
							if(a[i]=='\r')
							{
								i=4;
							}
							else 
							{
								e*=10;
								e+=int(a[i]-48);
							}
							cout<<a[i];
						}while(a[i]!='\r'&&i<3);
						}
						num=e;
						cout<<"\nAre you sure? (y/n):";
						cin>>ch;
					}
					for(i=0;i<num;i++)
					{
						col[i]=color(i);
						n=0;
						while(n<i)
						{				
							if(col[i]==col[n])
							{
								outtextxy(10,450,"It has been chosen by one of the people. Choose another color.");delay(2500);
								col[i]=color(i);
								n=-1;
							}
							n++;	
						}
					} 
					Multi();
	   			}break;
       case 250:intro();break;
       case 300:exit(0);break;
    }
}

void choiceS()
{	 
     outtextxy(120,150,"Play");
     outtextxy(120,200,"Back");
     outtextxy(120,250,"Exit");
}

void SingleS()
{
	clrscr();
	cleardevice();
 	setcolor(3);
  	outtextxy(200,60,"Single Player ");
}

void MultiS()
{
	 clrscr();
     cleardevice();
     setcolor(3);
     outtextxy(200,60,"Multi Player ");
}

void intro()
{
	setcolor(9);
	static int e=1;
	Arrow=0;
	while(e!=6)
	{
		int x=25;
		while(Arrow!='\r')
	{
		introS(e);
		introg(e);
		outtextxy(x,435,">>");
   		Arrow = getch();
		switch(Arrow)
		{
	   		case CPPKEYLEFT:
		   	{		   		
		   		setcolor(9);
				if(x==25&&e==1)
				{
					x=245;
				}
				else if(x==465&&e==5)
				{
					x-=440;
				}
				else if(x==25)
				{
					x=465;
				}
				else
					x-=220;
				    outtextxy(x,435,">>");
			}break;
			case CPPKEYRIGHT:
			{
				setcolor(9);
				if(x==465||(e==1&&x==245))
				{
					x=25;
					outtextxy(x,435,">>");
				}
				else if(e==5&&x==25)
				{
						x+=440;
				}
				else
					x+=220;
				outtextxy(x,435,">>");

	     	}break;
    		default:outtextxy(x,435,">>");
		}
    }sound(400);delay(30);nosound();
    Arrow=0;
    switch(x)
    {
    	case 25:{e=1;welcome();}break;
		case 245:{
					e++;
					if(e!=6)
						introg(e);
					else
					{
						e=5;
						introg(e);
					}
				 }break;
		case 465:{
					e--;
					if(e!=0)
						introg(e);
					else
					{
						e=1;
						introg(e);	
					}
				 }break;
    } 
	}
}

void introS(int e)
{
	clrscr();
	cleardevice();
	setcolor(12);
	settextstyle(3,0,1);
	outtextxy(270,3,"BINGO");
	outtextxy(50,405,"Press 'n' to turn next information");
	setcolor(1);
	rectangle(3,3,635,438);
	rectangle(365,30,633,403);
	rectangle(5,30,361,403);
	rectangle(8,50,358,400);	
	rectangle(368,33,630,140);
	rectangle(368,143,630,400);
	float x,y;
	int x1=43,x2=323,d=70;
	int i;
	
	for(x=x1;x<=x2;x+=d)
	{
		for(y=85;y<=365;y+=d)
		{
			circle(x,y,30);
		}
	}
	setcolor(19);
	outtextxy(38,23,"V");
	outtextxy(38,30,"V");
	setcolor(2);
	settextstyle(3,0,2);
	outtextxy(52,435,"Back");
	if(e!=5)
		outtextxy(273,435,"Next page");
	if(e!=1)
		outtextxy(492,435,"Previous page");
}

void introg(int e)
{
	switch(e)
	{
		case 1:hori();break;
		case 2:verti();break;
		case 3:rtoldia();break;
		case 4:ltordia();break;
		case 5:Pn();break;
	}
}

void hori()
{
	setcolor(4);
	setfillstyle(1,2);
	float r[5]={43,113,183,253,323};
	float c[5]={365,295,225,155,85};
	for(int i=0;i<5;i++)
	{
		fillellipse(r[i],c[0],25,25);
	}
	setcolor(2);
	settextstyle(3,0,1);
	outtextxy(400,45,"GREEN");
	outtextxy(400,85,"CONGRATULATION");
	outtextxy(400,110,"You win");
	setcolor(12);
	settextstyle(3,0,2);
	outtextxy(400,170,"Horizontal Win");
}

void verti()
{
	setcolor(4);
	setfillstyle(1,2);
	float r[5]={43,113,183,253,323};
	float c[5]={365,295,225,155,85};
	for(int i=0;i<5;i++)
	{
		fillellipse(r[3],c[i],25,25);
	}
	setcolor(2);
	settextstyle(3,0,1);	
	outtextxy(400,45,"GREEN");
	outtextxy(400,85,"CONGRATULATION");
	outtextxy(400,110,"You win");
	setcolor(12);
	settextstyle(3,0,2);
	outtextxy(400,170,"Vertical Win");
}

void rtoldia()
{
	setcolor(4);
	setfillstyle(1,2);
	float r[5]={43,113,183,253,323};
	float c[5]={365,295,225,155,85};
	for(int i=0;i<5;i++)
	{
		fillellipse(r[i],c[4-i],25,25);
	}
	setcolor(7);
	setfillstyle(1,5);
	for(i=0;i<5;i++)
	{
		for(int n=0;n<(4-i);n++)
		{
			fillellipse(r[i],c[n],25,25);
		}
	}
	setcolor(2);
	settextstyle(3,0,1);
	outtextxy(400,45,"GREEN");
	outtextxy(400,85,"CONGRATULATION");
	outtextxy(400,110,"You win");
	setcolor(12);
	settextstyle(3,0,2);
	outtextxy(370,170,"Right to Left Diagonal Win");
}

void ltordia()
{
	setcolor(4);
	setfillstyle(1,2);
	float r[5]={43,113,183,253,323};
	float c[5]={365,295,225,155,85};
	for(int i=0;i<5;i++)
	{
		fillellipse(r[i],c[i],25,25);
	}
	setcolor(7);
	setfillstyle(1,5);
	for(i=0;i<5;i++)
	{
		for(int n=0;n<i;n++)
		{
			fillellipse(r[i],c[n],25,25);
		}
	}
	setcolor(2);
	settextstyle(3,0,1);
	outtextxy(400,45,"GREEN");
	outtextxy(400,85,"CONGRATULATION");
	outtextxy(400,110,"You win");
	setcolor(12);
	settextstyle(3,0,2);
	outtextxy(370,170,"Left to Right Diagonal Win");
}

void Pn()
{
	setcolor(4);
	setfillstyle(1,2);
	float r[5]={43,113,183,253,323};
	float c[5]={365,295,225,155,85};
	for(int i=0;i<4;i++)
	{
		fillellipse(r[3],c[i],25,25);
	}
	for(i=0;i<4;i++)
	{
		fillellipse(400,300-(i*15),7,7);
	}
	circle(400,240,9);
	
	setcolor(2);
	settextstyle(3,0,1);
	outtextxy(400,45,"GREEN");
	setcolor(12);
	settextstyle(3,0,2);
	outtextxy(370,320,"You can know information");
	outtextxy(400,350,"with a press 'n'");
}

void Single()
{
	clrscr();
	cleardevice();
	int x=70,y=150;
	SingleS();
	choiceS();
	setcolor(9);
	outtextxy(x,y,">>>");
	while(Arrow!='\r')
   	{
   		Arrow = getch();
		SingleS();
		choiceS();
		switch(Arrow)
   		{
	   		case CPPKEYUP:
		   	{		   		
		   		setcolor(9);
		   		if(y>150)
				{
		   			y=y-50;
				    outtextxy(x,y,">>>");
		   		}
		   		else
	    		{
		   			y=250;
				    outtextxy(x,y,">>>");
		   		}
		   	}break;
   			case CPPKEYDOWN:
			{
				setcolor(9);
		     	if(y<250)
				{
					y=y+50;
					outtextxy(x,y,">>>");
				}
		     	else 
				 	{
					y=150;
					outtextxy(x,y,">>>");
				}
	     	}break;
    		default:outtextxy(x,y,">>>");
		}
    }sound(400);delay(30);nosound();
    Arrow=0;
    switch(y)
    {
       case 150:SPlay();break;
       case 200:welcome();break;
       case 250:exit(0);break;
    }
}


int SPlayS()
{
	clrscr();
	cleardevice();
	int h,n,i,r=20;
	int warn[12],p[7];
	setcolor(12);
	settextstyle(3,0,1); 
	outtextxy(270,5,"BINGO");
	outtextxy(240,35,"Single Player");
	outtextxy(50,445,"Press 'n' to turn next information");
	setcolor(1);
	rectangle(3,3,635,478);
	rectangle(365,60,633,443);
	rectangle(5,60,361,443);
	rectangle(8,90,358,440);	
	rectangle(368,63,630,170);
	rectangle(368,173,630,440);
	MPlayS4();		
	if(col[u%num]==0)
		setcolor(2);
	else
		setcolor(col[u%num]);
	if(v)
	{
		if(u%2)
			outtextxy(400,75,"Computer");
		else
			outtextxy(400,75,"Player");
		h=(u+k)%2;
		if(h==0)
		{			
			if(col[0]==0)
				setcolor(2);
			else
				setcolor(col[0]);
			outtextxy(460,170,"Player");
		}
		else
		{
			if(col[1]==0)
				setcolor(2);
			else
				setcolor(col[1]);
			outtextxy(450,170,"Computer");	
		}
	for(i=0;i<12;i++)
	{
		warn[i]=0;
	}
	for(i=0;i<5;i++)
	{
		for(n=0;n<5;n++)
		{
			if(place[i][n]==col[h])
				warn[i]++;
			else if(place[i][n]==col[(h+1)%2])
				warn[i]=11;
			
			if(place[n][i]==col[h])
				warn[i+5]++;
			else if(place[n][i]==col[(h+1)%2])
				warn[i+5]=11;
			else 
				p[i]=n;
		}
		
	}
	for(i=0;i<5;i++)
	{
		if(place[i][i]==col[h])
			warn[10]++;
		else if(place[i][i]==col[(h+1)%2])
			warn[10]=11;
		else 
			p[5]=i;
	
		if(place[i][4-i]==col[h])
			warn[11]++;
		else if(place[i][4-i]==col[(h+1)%2])
			warn[11]=11;
		else 
			p[6]=i;
	}
	for(i=0;i<5;i++)
	{		
		setcolor(col[h]+2);
		setfillstyle(1,col[h]);
		if(warn[i]==4)
		{
			for(n=0;n<4;n++)
			{
				fillellipse(400+(i*15),300-(n*15),7,7);
			}
			circle(400+(i*15),240,9);
			r=i;				
		}			
		
		if(warn[i+5]==4)
		{
			for(n=0;n<5;n++)
			{
				if(n!=p[i])
					fillellipse(520+(n*15),300-(i*15),7,7);
				else
					circle(520+(n*15),300-(i*15),9);
				r=n;
			}
			
		}
		if(warn[10]==4)
		{
			if(i!=p[5])
				fillellipse(400+(i*15),420-(i*15),7,7);
			else
				circle(400+(i*15),420-(i*15),9);
			r=i;
		}
			
		if(warn[11]==4)
		{
			if(i!=p[6])
				fillellipse(520+(i*15),360+(i*15),7,7);
			else 
				circle(520+(i*15),360+(i*15),9);
			r=i;
		}			
	}				
	}
	else
	{
		setcolor(20);
		outtextxy(400,110,"Game Draw");
		twoS();
		getch();
		v=1;
		welcome();
	}
	return r;
}
	
void SPlay()
{
	num=2;
	u=SRP();	
	clrscr();
	cleardevice();
	for(int i=0;i<5;i++)
    {
    	for(int n=0;n<5;n++)
    	{
	    	place[i][n]=20;
	    }
    }
    while(v)
    {
    	k=0;
    	int r;
    	r=SPlayS();
		xx=x1;
    	if((u%2)==0)
    	{	      	
			setcolor(19);
			outtextxy(xx-5,60,"V");
			outtextxy(xx-5,70,"V");
			Arrow=getch();
			while(Arrow!='\r')
			{
				setcolor(19);
				outtextxy(xx-5,60,"V");
				outtextxy(xx-5,70,"V");
				switch(Arrow)
				{
					case CPPKEYRIGHT:
						if(xx==x2)
							xx=x1;
						else
							xx+=d;break;
					case CPPKEYLEFT:
						if(xx==x1)
							xx=x2;
						else 
							xx-=d;break;
					case 'n':k++;break;
				}
				r=SPlayS();
				setcolor(19);
				outtextxy(xx-5,60,"V");
				outtextxy(xx-5,70,"V");
				Arrow=getch();
			}sound(400);delay(30);nosound();
    	}
    	else
		{
			column=5;			
			while(column==5)
			{
				if(r!=20)
				{
					row=r;	
				}
				else
				{						
					srand(time(NULL));
					row=(rand()%5);		
				}	
				column=0;
				while(place[row][column]!=20&&column!=5)
				{
					column++;
				}	
				if(column==5)
					r=20;	
			}				
	    	delay(500);
		}
		MPlayS4n();
		win4('s');	
		r=SPlayS();
		u++;		
    }
}

int SRP()
{
	clrscr();
	cleardevice();  
	setcolor(3);
	int y,c;
	char p;
	do
	{
		clrscr(); 
		cleardevice();
		int q=30;
		outtextxy(150,q,"SCISSORS, ROCK & PAPER"); q+=50;
		outtextxy(60,q,"For Computer,Press any key to Start.");
		getch();
		srand(time(NULL));
		c=(rand()%3);    
		q+=30;
		outtextxy(60,q,"Please only enter the initial character you prefer. ");
		p=getch();
		p=tolower(p);
		while(p!='s'&&p!='r'&&p!='p')
		{
			q+=30;
			outtextxy(100,q,"Wrong input. Please enter \'s or r or p\'.");
			p=getch();
		}  q+=40;
		outtextxy(420,q,"Player: ");
		switch(p)
		{
			case 's':{outtextxy(480,q,"Scissors.");y=0;scissors(316);}break;
			case 'r':{outtextxy(480,q,"Rock.");y=1;rock(316);}break;
			case 'p':{outtextxy(480,q,"Paper.");y=2;paper(316);}break;
		}  
		outtextxy(90,q,"Computer:");
		switch(c)
		{
			case 0:{outtextxy(180,q,"Scissors.");scissors(0);}break;
			case 1:{outtextxy(180,q,"Rock.");rock(0);}break;
			case 2:{outtextxy(180,q,"Paper.");paper(0);}break;
		}
		if(y==c)
			outtextxy(60,400,"You and Computer are the same, Please Start Again.");
		getch();
	}while(y==c);
  
  if((y==0&&c==2)||(y==1&&c==0)||(y==2&&c==1))
  {
    outtextxy(110,400,"Player will start");
    getch();
    return 0;
  }
  else
  {
    outtextxy(110,400,"Computer will start");
    getch();
    return 1;
  }
}

void scissors(int o)
{
	circle(161+o,300,40);
	line(186+o,275,138+o,330);
	line(186+o,274,136+o,328);
	line(196+o,290,130+o,320);
	line(193+o,292,130+o,322);
	arc(145+o,325,220,70,9);
	arc(138+o,315,20,200,9);
}

void rock(int o)
{
	circle(161+o,300,40);
	circle(161+o,305,30);
	line(161+o,275,158+o,280);
	line(158+o,280,163+o,285);
	line(163+o,285,161+o,290);
	line(161+o,290,165+o,300);
	line(165+o,300,157+o,305);
	line(157+o,305,160+o,310);
	line(160+o,310,165+o,315);
	line(165+o,315,157+o,325);
}

void paper(int o)
{
	circle(161+o,300,40);
	arc(161+o,230,250,290,50);
	arc(95+o,285,320,10,50);
	arc(155+o,375,70,110,60);
	arc(233+o,305,150,195,60);
}

void Multi()
{
	clrscr();
	cleardevice();
	int x=70,y=150;
	MultiS();
	choiceS();
	setcolor(9);
	outtextxy(x,y,">>>");
	while(Arrow!='\r')
   	{
   		Arrow = getch();
		MultiS();
		choiceS();
		switch(Arrow)
   		{
	   		case CPPKEYUP:
			{
				setcolor(9);
		   		if(y>150)
		   		{
		   			y=y-50;
				    outtextxy(x,y,">>>");
		   		}
		   		else
	    		{
		   			y=250;
				    outtextxy(x,y,">>>");
		   		}
		   	}break;
   			case CPPKEYDOWN:
			{
				setcolor(9);
		     	if(y<250)
				{
					y=y+50;
					outtextxy(x,y,">>>");
				}
		     	else 
				 	{
					y=150;
					outtextxy(x,y,">>>");
				}
	     	}break;
			default:outtextxy(x,y,">>>");
		}
    }sound(400);delay(30);nosound();
    Arrow=0;
    switch(y)
    {
       case 150:MPlay();break;
       case 200:welcome();break;
       case 250:exit(0);break;
    }
}

void MPlayS()
{
	clrscr();
	cleardevice();	
	int h,n,i,j,r,d;
	int warn[22],p[12];	
	setcolor(12);
	settextstyle(3,0,1); 
	outtextxy(270,5,"BINGO");
	outtextxy(240,35,"Multi Player");
	outtextxy(50,445,"Press 'n' to turn next information");	
	setcolor(17);
	rectangle(3,3,635,478);	
	rectangle(365,60,633,443);
	rectangle(5,60,361,443);
	rectangle(8,90,358,440);	
	rectangle(368,63,630,170);
	rectangle(368,173,630,440);
	if(num>8)
	{
		MPlayS1();
		j=10;
		r=3;
		d=6;
	}
	else if(num>5)
	{
		MPlayS2();
		j=8;
		r=4;
		d=8;
	}
	else if(num>=3)
	{
		MPlayS3();
		j=7;
		r=5;
		d=10;
	}
	else
	{
		MPlayS4();
		j=5;
		r=7;
		d=15;
	}
					
	if(col[u%num]==0)
		setcolor(2);
	else
		setcolor(col[u%num]);
	if(v)
	{		
		switch(col[u%num])
		{
			case 0:outtextxy(400,75,"BLACK");break;
			case 1:outtextxy(400,75,"BLUE");break;
			case 2:outtextxy(400,75,"GREEN");break;
			case 3:outtextxy(400,75,"CYAN");break;
			case 4:outtextxy(400,75,"RED");break;
			case 5:outtextxy(400,75,"MAGENTA");break;
			case 6:outtextxy(400,75,"BROWN");break;
			case 7:outtextxy(400,75,"LIGHTGRAY");break;
			case 8:outtextxy(400,75,"DARKGRAY");break;
			case 9:outtextxy(400,75,"LIGHTBLUE");break;
			case 10:outtextxy(400,75,"LIGHTGREEN");break;
			case 11:outtextxy(400,75,"LIGHTCYAN");break;
			case 12:outtextxy(400,75,"LIGHTRED");break;
			case 13:outtextxy(400,75,"LIGHTMAGENTA");break;
			case 14:outtextxy(400,75,"YELLOW");break;
		}
		h=(u+k)%num;
		if(col[h]==0)
			setcolor(2);
		else 
			setcolor(col[h]);
		switch(col[h])
		{
			case 0:outtextxy(460,170,"BLACK");break;
			case 1:outtextxy(460,170,"BLUE");break;
			case 2:outtextxy(460,170,"GREEN");break;
			case 3:outtextxy(460,170,"CYAN");break;
			case 4:outtextxy(460,170,"RED");break;
			case 5:outtextxy(450,170,"MAGENTA");break;
			case 6:outtextxy(450,170,"BROWN");break;
			case 7:outtextxy(440,170,"LIGHTGRAY");break;
			case 8:outtextxy(440,170,"DARKGRAY");break;
			case 9:outtextxy(440,170,"LIGHTBLUE");break;
			case 10:outtextxy(440,170,"LIGHTGREEN");break;
			case 11:outtextxy(440,170,"LIGHTCYAN");break;
			case 12:outtextxy(440,170,"LIGHTRED");break;
			case 13:outtextxy(440,170,"LIGHTMAGENTA");break;
			case 14:outtextxy(460,170,"YELLOW");break;			
		}
		
	for(i=0;i<22;i++)
	{
		warn[i]=0;
	}
	for(i=0;i<j;i++)
	{
		for(n=0;n<j;n++)
		{
			if(place[i][n]==col[h])
				warn[i]++;
			else if(place[i][n]!=20)
				warn[i]=11;
			
			if(place[n][i]==col[h])
				warn[i+10]++;
			else if(place[n][i]==20)
				p[i]=n;
			else 				
				warn[i+10]=11;
		}
		
	}
	for(i=0;i<j;i++)
	{
		if(place[i][i]==col[h])
			warn[20]++;
		else if(place[i][i]==20)
			p[10]=i;
		else 
			warn[20]=11;
	
		if(place[i][j-i-1]==col[h])
			warn[21]++;
		else if(place[i][j-1-i]==20)
			p[11]=i;
		else 
			warn[21]=11;
	}
	for(i=0;i<j;i++)
	{		
		setcolor(col[h]+2);
		setfillstyle(1,col[h]);
		if(warn[i]==(j-1))
		{
			for(n=0;n<(j-1);n++)
			{
				fillellipse(400+(i*d),300-(n*d),r,r);
			}
			circle(400+(i*d),240,r+2);				
		}			
		
		if(warn[i+10]==(j-1))
		{
			for(n=0;n<j;n++)
			{
				if(n!=p[i])
					fillellipse(520+(n*d),300-(i*d),r,r);
				else
					circle(520+(n*d),300-(i*d),r+2);
			}
			
		}
		if(warn[20]==(j-1))
		{
			if(i!=p[10])
				fillellipse(400+(i*d),420-(i*d),r,r);
			else
				circle(400+(i*d),420-(i*d),r+2);
		}
			
		if(warn[21]==(j-1))
		{
			if(i!=p[11])
				fillellipse(520+(i*d),360+(i*d),r,r);
			else 
				circle(520+(i*d),360+(i*d),r+2);
		}			
	}				
	}
	else
	{
		setcolor(20);
		outtextxy(400,110,"Game Draw");
		twoS();
		getch();
		v=1;
		welcome();
	}
}

void MPlay()
{	
    for(int i=0;i<10;i++)
    {
    	for(int n=0;n<10;n++)
    	{
	    	place[i][n]=20;
	    }
    }
	while(v)
	{
		k=0;
		MPlayS();
		xx=x1;
		setcolor(19);
		outtextxy(xx-5,60,"V");
		outtextxy(xx-5,70,"V");	
		Arrow=getch();
		while(Arrow!='\r')
		{
			setcolor(19);
			outtextxy(xx-5,60,"V");
			outtextxy(xx-5,70,"V");
			switch(Arrow)
			{
				case CPPKEYRIGHT:
					if(xx==x2)
						xx=x1;
					else
						xx+=d;break;
				case CPPKEYLEFT:
					if(xx==x1)
						xx=x2;
					else 
						xx-=d;break;
				case 'n':k++;break;
			}
			MPlayS();
			setcolor(19);
			outtextxy(xx-5,60,"V");
			outtextxy(xx-5,70,"V");
			Arrow=getch();
		}sound(400);delay(30);nosound();
		MPlaySn();					
		win();
		MPlayS();
		u++;		
	}
}
void MPlayS1()
{
	float x,y;	
	float r[10]={25.5,60.5,95.5,130.5,165.5,200.5,235.5,270.5,305.5,340.5};
	float c[10]={422.5,387.5,352.5,317.5,282.5,247.5,212.5,177.5,142.5,107.5};		
	x1=25.5,x2=340.5,d=35;	
	for(x=x1;x<=x2;x+=d)
	{
		for(y=107.5;y<=422.5;y+=d)
		{
			circle(x,y,16);
		}
	}
	for(int i=0;i<10;i++)
	{
		for(int n=0;n<10;n++)
		{
			if(place[i][n]!=20)
			{
				setcolor(place[i][n]+2);
				setfillstyle(1,place[i][n]);
				fillellipse(r[i],c[n],10,10);
			}
		}
	}
	int z=xx;
	switch(z)
	{
		case 25:row=0;break;
		case 60:row=1;break;
		case 95:row=2;break;
		case 130:row=3;break;
		case 165:row=4;break;
		case 200:row=5;break;
		case 235:row=6;break;
		case 270:row=7;break;
		case 305:row=8;break;
		case 340:row=9;break;
	}
	column=0;
	while(place[row][column]!=20 && column!=10)
	{
		column++;
	}	
}
void MPlayS1n()
{
	float c[10]={422.5,387.5,352.5,317.5,282.5,247.5,212.5,177.5,142.5,107.5};	
	if(column==10)
	{ 
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
	   outtextxy(400,120,"Full");wrongS();delay(1500);
	   u--;
	}
	else
	{	
		setfillstyle(1,col[u%num]);
    	setcolor(col[u%num]+2);
    	fillellipse(xx,c[column],10,10); 
		place[row][column]=col[u%num];
	}
	xx=x1;
}

void MPlayS2()
{
	float x,y;
	float r[8]={29.875,73.625,117.375,161.125,204.875,248.625,292.375,336.125};
	float c[8]={418.125,374.375,330.625,286.875,243.125,199.375,155.625,111.875};
	x1=29.875,x2=336.125,d=43.75;
	for(x=x1;x<=x2;x+=d)
	{
		for(y=111.875;y<=418.125;y+=d)
		{
			circle(x,y,20);
		}
	}
	for(int i=0;i<8;i++)
	{
		for(int n=0;n<8;n++)
		{
			if(place[i][n]!=20)
			{
				setcolor(place[i][n]+2);
				setfillstyle(1,place[i][n]);
				fillellipse(r[i],c[n],15,15);
			}
		}
	}
	int z=xx;
	switch(z)
	{
		case 29:row=0;break;
		case 73:row=1;break;
		case 117:row=2;break;
		case 161:row=3;break;
		case 204:row=4;break;
		case 248:row=5;break;
		case 292:row=6;break;
		case 336:row=7;break;
	}
	column=0;
	while(place[row][column]!=20 && column!=8)
	{
		column++;
	}	
}

void MPlayS2n()
{
	float c[8]={418.125,374.375,330.625,286.875,243.125,199.375,155.625,111.875};
	if(column==8)
	{ 
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
		outtextxy(400,120,"Full");wrongS();delay(1500);
		u--;
	}
	else
	{	
		setfillstyle(1,col[u%num]);
    	setcolor(col[u%num]+2);
    	fillellipse(xx,c[column],15,15); 
		place[row][column]=col[u%num];
	}
	xx=x1;
}


void MPlayS3()
{
	float x,y;
	float r[7]={33,83,133,183,233,283,333};
	float c[7]={415,365,315,265,215,165,115};
	x1=33,x2=333,d=50;
	for(x=x1;x<=x2;x+=d)
	{
		for(y=115;y<=415;y+=d)
		{
			circle(x,y,23);
		}
	}
	for(int i=0;i<7;i++)
	{
		for(int n=0;n<7;n++)
		{
			if(place[i][n]!=20)
			{
				setcolor(place[i][n]+2);
				setfillstyle(1,place[i][n]);
				fillellipse(r[i],c[n],20,20);
			}
		}
	}
	int z=xx;
	switch(z)
	{
		case 33:row=0;break;
		case 83:row=1;break;
		case 133:row=2;break;
		case 183:row=3;break;
		case 233:row=4;break;
		case 283:row=5;break;
		case 333:row=6;break;
	}
	column=0;
	while(place[row][column]!=20 && column!=7)
	{
		column++;
	}	
}

void MPlayS3n()
{
	float c[7]={415,365,315,265,215,165,115};
	if(column==7)
	{ 
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);setcolor(col[u%num]);
		outtextxy(400,120,"Full");wrongS();delay(1500);
		u--;
	}
	else
	{	
		setfillstyle(1,col[u%num]);
    	setcolor(col[u%num]+2);
    	fillellipse(xx,c[column],20,20); 
		place[row][column]=col[u%num];
	}
	xx=x1;
}

void MPlayS4()
{
	float x,y;column=0;	
	float r[5]={43,113,183,253,323};
	float c[5]={405,335,265,195,125};
	x1=43,x2=323,d=70;
	int i;
	int z=xx;
	
	for(x=x1;x<=x2;x+=d)
	{
		for(y=125;y<=405;y+=d)
		{
			circle(x,y,30);
		}
	}
	for(i=0;i<5;i++)
	{
		for(int n=0;n<5;n++)
		{
			if(place[i][n]!=20)
			{
				setcolor(place[i][n]+2);
				setfillstyle(1,place[i][n]);
				fillellipse(r[i],c[n],25,25);
			}
		}
	}
	switch(z)
	{
		case 43:row=0;break;
		case 113:row=1;break;
		case 183:row=2;break;
		case 253:row=3;break;
		case 323:row=4;break;
	}

	while(place[row][column]!=20&&column!=5)
	{
		column++;
	}
	
}

void MPlayS4n()
{
	float r[5]={43,113,183,253,323};
	float c[5]={405,335,265,195,125};
	if(column==5)
	{ 
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
		outtextxy(400,120,"Full");wrongS();delay(1500);
		u--;
	}
	else
	{	
		setfillstyle(1,col[u%num]);
		setcolor(col[u%num]+2);
		fillellipse(r[row],c[column],25,25);
		place[row][column]=col[u%num];
	}
	xx=x1;delay(100);
}

void MPlaySn()
{
	if(num>8)
	{
		MPlayS1n();
	}
	else if(num>5)
	{
		MPlayS2n();
	}
	else if(num>=3)
	{
		MPlayS3n();
	}
	else
	{
		MPlayS4n();
	}
		
}

void win1()
{
	int w=0,i=1,j;
	char ch='y';
	while(i<10&&ch=='y')
	{
		if(place[0][0]!=place[i][i]||place[0][0]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	while(i<10&&ch=='y')
	{
		if(place[0][9]!=place[i][9-i]||place[0][9]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	for(j=0;j<10;j++)
	{
		while(i<10&&ch=='y')
		{
			if(place[j][0]!=place[j][i]||place[j][0]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	i=1;
	for(j=0;j<10;j++)
	{
		while(i<10&&ch=='y')
		{
			if(place[0][j]!=place[i][j]||place[0][j]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	
	if(w>0)
	{
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
		outtextxy(400,115,"CONGRATULATION");
		outtextxy(400,140,"You win");
		winS();
		getch();		
		welcome();
	}
	int z=0;
	for(i=0;i<10;i++)
	{
		if(place[i][9]!=20)
		{
			z++;
		}
	}
	if(z==10)
		v=0;
}
void win2()
{
	int w=0,i=1,j;
	char ch='y';
	while(i<8&&ch=='y')
	{
		if(place[0][0]!=place[i][i]||place[0][0]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	while(i<8&&ch=='y')
	{
		if(place[0][7]!=place[i][7-i]||place[0][7]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	for(j=0;j<8;j++)
	{
		while(i<8&&ch=='y')
		{
			if(place[j][0]!=place[j][i]||place[j][0]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	i=1;
	for(j=0;j<8;j++)
	{
		while(i<8&&ch=='y')
		{
			if(place[0][j]!=place[i][j]||place[0][j]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	
	if(w>0)
	{
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);		
		outtextxy(400,115,"CONGRATULATION");
		outtextxy(400,140,"You win");
		winS();
		getch();
		welcome();
	}
	int z=0;
	for(i=0;i<8;i++)
	{
		if(place[i][7]!=20)
		{
			z++;
		}
	}
	if(z==8)
		v=0;
}

void win3()
{
	int w=0,i=1,j;
	char ch='y';
	while(i<7&&ch=='y')
	{
		if(place[0][0]!=place[i][i]||place[0][0]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	while(i<7&&ch=='y')
	{
		if(place[0][6]!=place[i][6-i]||place[0][6]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	for(j=0;j<7;j++)
	{
		while(i<7&&ch=='y')
		{
			if(place[j][0]!=place[j][i]||place[j][0]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	i=1;
	for(j=0;j<7;j++)
	{
		while(i<7&&ch=='y')
		{
			if(place[0][j]!=place[i][j]||place[0][j]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	
	if(w>0)
	{
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
		outtextxy(400,115,"CONGRATULATION");
		outtextxy(400,140,"You win");
		winS();
		getch();
		welcome();
	}
	int z=0;
	for(i=0;i<7;i++)
	{
		if(place[i][6]!=20)
		{
			z++;
		}
	}
	if(z==7)
		v=0;
}

void win4(char c)
{
	int w=0,i=1,j;
	char ch='y';
	while(i<5&&ch=='y')
	{
		if(place[0][0]!=place[i][i]||place[0][0]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	while(i<5&&ch=='y')
	{
		if(place[0][4]!=place[i][4-i]||place[0][4]==20)
			ch='n';
		i++;
	}
	if(ch=='y')
		w++;
	ch='y';
	i=1;
	for(j=0;j<5;j++)
	{
		while(i<5&&ch=='y')
		{
			if(place[j][0]!=place[j][i]||place[j][0]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	i=1;
	for(j=0;j<5;j++)
	{
		while(i<5&&ch=='y')
		{
			if(place[0][j]!=place[i][j]||place[0][j]==20)
				ch='n';
			i++;
		}
		if(ch=='y')
			w++;
		ch='y';
		i=1;
	}
	
	if(w>0)
	{
		if(col[u%num]==0)
			setcolor(2);
		else
			setcolor(col[u%num]);
		if(c!='s')
		{
			outtextxy(400,115,"CONGRATULATION");
			outtextxy(400,140,"You win");
			winS();
		}
		else 
			if(u%num)
			{
				outtextxy(490,75,"Win");
				if(col[0]==0)
					setcolor(2);
				else
					setcolor(col[0]);
				outtextxy(400,110,"Player Lose");
				loseS();
			}
			else
			{
				outtextxy(460,75,"Win");
				if(col[1]==0)
					setcolor(2);
				else
					setcolor(col[1]);
				outtextxy(400,110,"Computer Lose");
				winS();
			}
		getch();
		welcome();
	}
	int z=0;
	for(i=0;i<5;i++)
	{
		if(place[i][4]!=20)
		{
			z++;
		}
	}
	if(z==5)
		v=0;
}

void win()
{
	if(num>8)
		win1();
	else if(num>5)
		win2();
	else if(num>=3)
		win3();		
	else
		win4('n');
}

void winS()
{	
   	nosound();
   	delay(100);
  for(int i=800;i<=1000;i+=100)
   {
   sound(i);
   delay(300);
   nosound();
   sound(1800-i);
   delay(150);
   nosound();
   }
}
void twoS()
{
	nosound();
	delay(100);
  for(int i=900;i<=1200;i+=100)
  {
    sound(i);
    delay(200);
    nosound();
  }
}
void loseS()
{
	nosound();
	delay(100);
	for(int i=800;i>=200;i-=100)
	{
	sound(i);
	delay(300);
	nosound();
	}
}
void wrongS()
{
	nosound();
	delay(100);
  for(int i=700;i>=550;i-=200)
  {
    sound(i);
    delay(200);
    nosound();
  }
}

void bombS()
{
  nosound();
  delay(100);
  for(int i=100;i<=300;i+=100)
  {
    sound(i);
    delay(100);
    nosound();
  }
}

void colorS(int c)
{	
	if(c!=-1)
	{
		MultiS();
		cout<<"\n\n\n\n\nFor Player "<<c+1;
	}
	else
	{
		SingleS();
		cout<<"\n\n\n\n\nFor Player ";
	}
	outtextxy(120,30,"Choose Your Favourite COLORS");
	setfillstyle(1,0);
    setcolor(7);
    fillellipse(56,130,20,20);    setcolor(7);
    outtextxy(80,128,"Black");

	setfillstyle(1,1);
    setcolor(1);
    fillellipse(261,130,20,20);   setcolor(7);
    outtextxy(285,128,"Blue");

	setfillstyle(1,2);
    setcolor(2);
    fillellipse(466,130,20,20);    setcolor(7);
    outtextxy(490,128,"Green");

	setfillstyle(1,3);
    setcolor(3);
    fillellipse(56,180,20,20);    setcolor(7);
    outtextxy(80,178,"Cyan");

	setfillstyle(1,4);
    setcolor(4);
    fillellipse(261,180,20,20);     setcolor(7);
    outtextxy(285,178,"Red");

	setfillstyle(1,5);
    setcolor(5);
    fillellipse(466,180,20,20);      setcolor(7);
    outtextxy(490,178,"Magenta");

	setfillstyle(1,6);
    setcolor(6);
    fillellipse(56,230,20,20);       setcolor(7);
    outtextxy(80,228,"Brown");

	setfillstyle(1,7);
    setcolor(7);
    fillellipse(261,230,20,20);       setcolor(7);
    outtextxy(285,228,"LightGray");

	setfillstyle(1,8);
    setcolor(8);
    fillellipse(466,230,20,20);         setcolor(7);
    outtextxy(490,228,"DarkGray");

	setfillstyle(1,9);
    setcolor(9);
    fillellipse(56,280,20,20);          setcolor(7);
    outtextxy(80,278,"LightBlue");

	setfillstyle(1,10);
    setcolor(10);
    fillellipse(261,280,20,20);          setcolor(7);
    outtextxy(285,278,"LightGreen");

	setfillstyle(1,11);
    setcolor(11);
    fillellipse(466,280,20,20);        setcolor(7);
    outtextxy(490,278,"LightCyan");

	setfillstyle(1,12);
    setcolor(12);
    fillellipse(56,330,20,20);           setcolor(7);
    outtextxy(80,328,"LightRed");

    setfillstyle(1,13);
	setcolor(13);
    fillellipse(261,330,20,20);           setcolor(7);
    outtextxy(285,328,"LightMagenta");

	setfillstyle(1,14);
    setcolor(14);
    fillellipse(466,330,20,20);           setcolor(7);
    outtextxy(490,328,"Yellow");
    
    setcolor(3);
    outtextxy(490,370,"Back");
    outtextxy(490,420,"Exit");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	for(int i=0;i<80;i++)
	{
		cout<<"=";
	}
	cout<<endl;
}

int color(int c)
{
	int x=12,y=100;
	int col;
	colorS(c);
	setcolor(9);
	outtextxy(x,y,">>");
	while(Arrow!='\r')
	{
   		Arrow = getch();
		colorS(c);
		switch(Arrow)
   		{
			case CPPKEYUP:
	   		{		   		
	   			setcolor(9);
	   			if(y>=150)
	   			{
	   				y=y-50;
			    	outtextxy(x,y,">>");
	   			}
	   			else if(x==422)
	   			{
			   		y=400;
			   		outtextxy(x,y,">>");
			   	}
	   			else
	   			{
	   				y=300;
			    	outtextxy(x,y,">>");
	   			}
	  		}break;
			case CPPKEYDOWN:
			{
				setcolor(9);
	     		if(y<=250)
				{
					y=y+50;
					outtextxy(x,y,">>");
				}
				else if(x==422)
				{
					if(y<=350)
					{
						y=y+50;
						outtextxy(x,y,">>");
					}
					else 
					{
						y=100;
						outtextxy(x,y,">>");
					}
				}
	     		else 
			 	{
					y=100;
					outtextxy(x,y,">>");
				}
	   		}break;
		case CPPKEYRIGHT:
	   		{
	   			setcolor(9);
	   			switch (y)
	   			{
			   		case 350:outtextxy(x,y,">>");break;
			   		case 400:outtextxy(x,y,">>");break;
			   		default:
	     				if(x<250)
						{
							x=x+205;
							outtextxy(x,y,">>");
						}
	     				else 
	 					{
							x=12;
							outtextxy(x,y,">>");
						}break;
	   			}
	   		}break;  
		case CPPKEYLEFT:
	   		{
	   			setcolor(9);
	   			switch (y)
	   			{
			   		case 350:outtextxy(x,y,">>");break;
			   		case 400:outtextxy(x,y,">>");break;
			   		default:
					if(x>=217)
						{
							x=x-205;
							outtextxy(x,y,">>");
						}
	     				else 
	 					{
							x=422;
							outtextxy(x,y,">>");
	 					}break;
	   			}
	   		}break;
			default:outtextxy(x,y,">>");
		}
    }sound(400);delay(30);nosound();
    Arrow=0;
    switch(x)
    {
    	case 12: 
    	{
	   		switch(y)
	   		{
	   			case 100:col=0;break;
	   			case 150:col=3;break;
	   			case 200:col=6;break;
	   			case 250:col=9;break;
	   			case 300:col=12;break;
	   		}
	   	}break;
	   	case 217:
	   	{
	   		switch(y)
	   		{
	    		case 100:col=1;break;
	   			case 150:col=4;break;
	   			case 200:col=7;break;
	   			case 250:col=10;break;
	   			case 300:col=13;break;
	    	}
	   	}break;
	   	case 422:
	   	{
	   		switch(y)
	   		{
	    		case 100:col=2;break;
	   			case 150:col=5;break;
	   			case 200:col=8;break;
	   			case 250:col=11;break;
	   			case 300:col=14;break;
	   			case 350:welcome();break;
	   			case 400:exit(0);break;
	    	}
	   	}break;
    }
	return col;
}
