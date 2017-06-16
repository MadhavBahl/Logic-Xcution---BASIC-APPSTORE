/*========================================================================*/
/* |									| */
/* |  L.X v1.01 miniature APPSTORE                                      				| */
/* |  THIS IS A .CPP FILE WHICH SHOULD NOT BE USED WITHOUT MY PERMISSION      | */
/* |  Copyright Madhav	 	                     			                 | */
/* |  All Rights Reserved                                             					| */
/* |									| */
/*========================================================================*/
#include<iostream.h>
#include<graphics.h>
#include<process.h>
#include<fstream.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<time.h>
#include<dos.h>

int a[10][10];
int x[5]={4,9,14,19,24};
int y[5]={4,8,12,16,20};
int win=2;
int scoreee=0;

class student
{
	int rollno;
	char name[50];
	int p_marks, c_marks, m_marks, e_marks, cs_marks;
	float per;
	char grade;
	void calculate();
public:
	void getdata();
	void showdata();
	void show_tabular();
	int retrollno();
};
class stud
{
   private:
	char  name[30];
	int   rno;
	float marks;
   public:
	void input();
	void display();
};
class employee
{
   public:
	char  name[30];
	int   eno;
	float salary;
	void  empinput();
	float retsal();
};

void employee::empinput()
{
	cout<<"\n Please enter the name : ";  gets(name);
	cout<<" Please enter the emp no : "; cin>>eno;
	cout<<" Please enter the salary : ";   cin>>salary;
	cout<<endl;
}

float employee::retsal()
{
	return salary;
}

void stud::input()
{
	cout<<"\n Please enter the name : ";  gets(name);
	cout<<" Please enter the roll no : "; cin>>rno;
	cout<<" Please enter the marks : ";   cin>>marks;
	cout<<endl;
}

void stud::display()
{
	cout<<"\n NAME --> ";  puts(name);
	cout<<" ROLL NO. --> "<<rno;
	cout<<"\n MARKS --> "<<marks;
	if(marks>=96)
		cout<<"\n\n STREAM OFFERED -> COMPUTER SCIENCE";
	else if(marks>90&&marks<96)
		cout<<"\n\n STREAM OFFERED -> ELECTRONICS";
	else if(marks>85&&marks<=90)
		cout<<"\n\n STREAM OFFERED -> MECHANICAL";
	else if(marks>80&&marks<=85)
		cout<<"\n\n STREAM OFFERED -> ELECTRICAL";
	else
		cout<<"\n\n STREAM --> NO IDEA!!";
}

void student::calculate()
{
	per=(p_marks+c_marks+m_marks+e_marks+cs_marks)/5.0;
	if(per>=60)
		grade='A';
	else if(per>=50)
		grade='B';
	else if(per>=33)
		grade='C';
	else
		grade='F';
}
void student::getdata()
{
	cout<<"\nEnter The roll number of student ";
	cin>>rollno;
	cout<<"\n\nEnter The Name of student ";
	gets(name);
	cout<<"\nEnter The marks in physics out of 100 : ";
	cin>>p_marks;
	cout<<"\nEnter The marks in chemistry out of 100 : ";
	cin>>c_marks;
	cout<<"\nEnter The marks in maths out of 100 : ";
	cin>>m_marks;
	cout<<"\nEnter The marks in english out of 100 : ";
	cin>>e_marks;
	cout<<"\nEnter The marks in computer science out of 100 : ";
	cin>>cs_marks;
	calculate();
}

void student::showdata()
{
	cout<<"\nRoll number of student : "<<rollno;
	cout<<"\nName of student : "<<name;
	cout<<"\nMarks in Physics : "<<p_marks;
	cout<<"\nMarks in Chemistry : "<<c_marks;
	cout<<"\nMarks in Maths : "<<m_marks;
	cout<<"\nMarks in English : "<<e_marks;
	cout<<"\nMarks in Computer Science :"<<cs_marks;
	cout<<"\nPercentage of student is  :"<<per;
	cout<<"\nGrade of student is :"<<grade;
}
void student::show_tabular()
{
	cout<<rollno<<setw(6)<<" "<<name<<setw(10)<<p_marks<<setw(4)<<c_marks<<setw(4)<<m_marks<<setw(4)<<e_marks<<setw(4)<<cs_marks<<setw(6)<<per<<setw(6)<<" "<<grade<<endl;
}
int  student::retrollno()
{
	return rollno;
}

const int max=100;

void storeis		(char a[]);
int  countis		(void);
void storechar		(char []);
void countchar		(void);
void puthashchar	(void);
void dispchar		(int);
void write_student	(void);
void display_all	(void);
void display_sp		(int);
void modify_student	(int);
void delete_student	(int);
void class_result	(void);
void result		(void);
void intro		(void);
void leftmove           (void);
void rightmove          (void);
void downmove           (void);
void upmove             (void);
void entry_menu		(void);
void startscreen	(void);
void genrand		(void);
void apps		(void);
void color		(void);
void move		(int,int);
void shutdown		(void);
void starting	   	(void);
void borders	 	(void);
void instructions	(void);
void winner     	(int);
void winer		(int);
void initials		(void);
void monster		(void);
void gamezone		(void);
void spkr		(void);
void gameon		(void);
void geass 		(void);
void tictactoe		(void);
void timepass 		(void);
void parabola 		(void);
void lines		(void);
void print		(void);
void chkwin		(void);
void chkfull		(void);
void game2048		(void);
void shpl		(void);
void reportcard		(void);
void disp2num		(int [][max],int,int);
void altswap		(int [],int);
void multip		(int [],int);
void halfswap		(int [],int);
void swaparray		(int [],int);
void sortasc		(int x[],int n);
void sortdes		(int x[],int n);
void mergasc		(int a[],int b[],int c[],int n1,int n2);
void rtrans		(int x[][max],int r,int c);
void genarray		(int [],int);
void zerotrans		(int x[][max],int r,int c);
void store		(char []);
void display		(void);

void main()
{
	startscreen();
	apps();
}

void startscreen()
{   reboot:
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	setbkcolor(1);
	setcolor(14);
	rectangle(270,370,370,390);
	int i;
	char pass[10],a[10],x;
	settextstyle(5,0,7);
	outtextxy(100,80,"WELCOME TO ");
	settextstyle(4,0,9);
	outtextxy(200,180," L.X. ");
	settextstyle(4,0,4);
	outtextxy(400,240," v 1.01 ");
	setcolor(12);
	for(i=272;i<369;i++)
	{
		line(i,372,i,388);
		delay(35);
	}
	cleardevice();
	closegraph();/*
	gotoxy(25,10);
	cout<<"PASSWORD : ";
	for(i=0;i<10;i++)
	{
		pass[i]=getch();
		cout<<"*";
	}
	ifstream fin("password.txt");
	i=0;
	while(!fin.eof())
	{
		fin>>x;
		a[i]=x;
		i++;
		if(i==10)
			break;
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=pass[i])
		{
			clrscr();
			gotoxy(25,10);
			cout<<"ERROR 007 !!!!!!!!!!!";
			gotoxy(25,11);
			cout<<"THE PASSWORD IS WRONG";
			gotoxy(25,12);
			cout<<"REBOOTING THE SYSTEM ";
			delay(3000);
			goto reboot;
		}
	}              */
	return;
}

void apps(void)
{
    home:
	geass();
	int y=5,y2;
	y2=y;
	char ch,sr=16;

	cout<<"\n ";
	cout<<"\n   PADDLEPOP";
	cout<<"\n   TICTACTOE";
	cout<<"\n   GRAPH FUNCTION : STANDARD  PARABOLA";
	cout<<"\n   GRAPH FUNCTION : SHIFTABLE PARABOLA";
	cout<<"\n   SCREEN SAVER ";
	cout<<"\n   STUDENT APP ";
	cout<<"\n   TIMEPASS APP";
	cout<<"\n   2048 -- GAME ";
	cout<<"\n   SHUT DOWN";
	gotoxy(2,y);cout<<sr;
	while(ch!=13)
	{
		ch=getch();
		if(ch==0)
		{
			ch=getch();
			if(ch==72&&y!=3)
			{
				y--;
				move(y,y2);
				y2=y;
			}
			if(ch==80&&y!=11)
			{
				y++;
				move(y,y2);
				y2=y;
			}
		}
	}
	if(ch==13)
	{
		if(y==3)
			gameon();
		if(y==4)
			tictactoe();
		if(y==5)
			parabola();
		if(y==6)
			shpl();
		if(y==7)
			spkr();
		if(y==8)
		{
			closegraph();
			reportcard();
		}
		if(y==9)
		{
			closegraph();
			timepass();
		}
		if(y==10)
			game2048();
		if(y==11)
			shutdown();
	}
	getch();
	ch=0;
	goto home;
}

void move(int y1,int y2)
{
	char sp=16;
	gotoxy(2,y2);cout<<" ";
	gotoxy(2,y1);cout<<(char)sp;
}

void shutdown(void)
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	setbkcolor(1);
	setcolor(14);
	rectangle(270,370,370,390);
	int i;
	char pass[10],a[10],x;
	settextstyle(5,0,7);
	outtextxy(45,80," SHUTTING DOWN ");
	settextstyle(4,0,9);
	outtextxy(200,180," L.X. ");
	settextstyle(4,0,4);
	outtextxy(400,240," v 1.01 ");
	setcolor(12);
	for(i=272;i<369;i++)
	{
		line(i,372,i,388);
		delay(35);
	}
	cleardevice();
	closegraph();
	exit(0);
}

void gameon(void)
{
	getch();
	closegraph();
	long int life=5,scr=0,lvl=0,win=1,winchk;

	start:
	clrscr();
	starting();
	char ch,res;
	ch=getch();
	rstart:
	if(ch=='i')
	{
		instructions();
		getch();
	}
	if(ch=='q')
	{

		return;
	}
	if(ch=='p')
	{
		clrscr();
		borders();
	int balld=1,batd=1,batc=37,ballc=41,ballr=13;     //VARIOUS VARIABLES
	int i,j,obs1c[78],obs2c[78],obs3c[78],n2o=0,n2oa; //VARIOUS VARIABLES
	char x=(char)3,y=(char)4,z=(char)5;               //OBSTACLES
	gotoxy(batc,14);
		cout<<"|=======|";                        //BAT
	gotoxy(ballc,ballr);
		cout<<"o";                                //BALL
	gotoxy(60,15);
	cout<<" SCORE : ";                                //SCORE
	gotoxy(12,15);
	cout<<" LIFE : ";                                 //LIFE
	if(lvl==1||lvl==2||lvl==3)           //OBSTACLE LINE NO. 1
	{
	for(i=2,j=0;i<80;i++,j++)
	{
		if(i%4==0)
			obs1c[j]=100;
		else
		{
		obs1c[j]=i;
		gotoxy(i,6);
			cout<<x;
		}
	}
	}
	if(lvl==2||lvl==3)                   //OBSATACLE LINE NO. 2
	{
	for(i=2,j=0;i<80;i++,j++)
	{
		if(i%3==0)
			obs3c[j]=100;
		else
		{
		obs3c[j]=i;
		gotoxy(i,9);
			cout<<y;
		}
	}
	}
	if(lvl==3)                           //OBSTACLE LINE NO. 3
	{
	for(i=2,j=0;i<80;i++,j++)
	{
		if(i%5==0)
			obs2c[j]=100;
		else
		{
		obs2c[j]=i;
		gotoxy(i,3);
			cout<<z;
		}
	}
	}
	while(ch!='q')                       //GAMEPLAY
	{
		if(n2o>=800)
			n2oa=0;
		if(n2o<=650)
			n2oa=1;
		if(kbhit())
			ch=getch();
		if(ch=='d')
			batd=1;
		if(ch=='a')
			batd=2;
		if(ch=='q')
			exit;
		delay(55);
		if(batd==1)
		{
			if(batc>1&&batc<71)
			{
				gotoxy(batc,14);
					cout<<"         ";
				if(n2oa==0&&batc<=60)
				{
					batc+=2;
					n2o--;
				}
				else
				{
					batc++;
					n2o+=3;
				}
				gotoxy(batc,14);
					cout<<"|=======|";
			}
		}
		if(batd==2)
		{
			if(batc>2&&batc<80)
			{
				gotoxy(batc,14);
					cout<<"         ";
				if(n2oa==0&&batc>3)
				{
					batc-=2;
					n2o--;
				}
				else
				{
					batc--;
					n2o+=3;
				}
				gotoxy(batc,14);
					cout<<"|=======|";
			}
		}
		if(balld==1)
		{
			if(n2oa==0&&ballc<77&&ballr>3)
			{
			randomize();
			gotoxy(ballc,ballr);
				cout<<" ";
			ballc+=random(2)+1;
			ballr-=random(2)+1;
			}
			else
			{
			gotoxy(ballc,ballr);
				cout<<" ";
			ballc++;
			ballr--;
			}
			gotoxy(ballc,ballr);
				cout<<"o";
		}
		if(balld==2)
		{
			if(n2oa==0&&ballc<77&&ballr<12)
			{
				randomize();
				gotoxy(ballc,ballr);
				cout<<" ";

			ballc+=random(2)+1;
			ballr+=random(2)+1;
			}
			else
			{
			gotoxy(ballc,ballr);
				cout<<" ";

			ballc++;
			ballr++;
			}
			gotoxy(ballc,ballr);
				cout<<"o";
		}
		if(balld==3)
		{
			if(n2oa==0&&ballc>=4&&ballr>3)
			{
			randomize();
			gotoxy(ballc,ballr);
				cout<<" ";

			ballc-=random(2)+1;
			ballr-=random(2)+1;
			}
			else
			{
			gotoxy(ballc,ballr);
				cout<<" ";

			ballc--;
			ballr--;
			}
			gotoxy(ballc,ballr);
				cout<<"o";
		}
		if(balld==4)
		{
			if(n2oa==0&&ballc>=4&&ballr<12)
			{
				randomize();
			gotoxy(ballc,ballr);
				cout<<" ";

			ballc-=random(2)+1;
			ballr+=random(2)+1;
			}
			else
			{
			gotoxy(ballc,ballr);
				cout<<" ";

			ballc--;
			ballr++;
			}
			gotoxy(ballc,ballr);
				cout<<"o";
		}
		if(balld==1&&ballr==2)
			balld=2;
		if(balld==3&&ballr==2)
			balld=4;
		if(balld==1&&ballc==79)
			balld=3;
		if(balld==2&&ballc==79)
			balld=4;
		if(balld==3&&ballc==2)
			balld=1;
		if(balld==4&&ballc==2)
			balld=2;
		if(balld==2&&(ballc>=batc&&ballc<=batc+9)&&ballr==14)
			balld=1;
		if(balld==4&&(ballc>=batc&&ballc<=batc+9)&&ballr==14)
			balld=3;
		scr+=2;
		gotoxy(69,15);
			cout<<scr<<" ";
		gotoxy(20,15);
			cout<<life<<" ";
		if(ballr==15)
		{
			life--;
			break;
		}
		if(lvl==1||lvl==2||lvl==3)
		{
		for(i=0;i<78;i++)
		{
			if(balld==1&&ballc==obs1c[i]&&ballr==6&&obs1c[i]!=100)
			{
				balld=2;
				scr+=500;
				obs1c[i]=100;
			}
			if(balld==2&&ballc==obs1c[i]&&ballr==6&&obs1c[i]!=100)
			{
				balld=1;
				scr+=500;
				obs1c[i]=100;
			}
			if(balld==3&&ballc==obs1c[i]&&ballr==6&&obs1c[i]!=100)
			{
				balld=4;
				scr+=500;
				obs1c[i]=100;
			}
			if(balld==4&&ballc==obs1c[i]&&ballr==6&&obs1c[i]!=100)
			{
				balld=3;
				scr+=500;
				obs1c[i]=100;
			}
		}
		}
		if(lvl==2||lvl==3)
		{
		for(i=0;i<78;i++)
		{
			if(balld==1&&ballc==obs3c[i]&&ballr==9&&obs3c[i]!=100)
			{
				balld=2;
				scr+=500;
				obs3c[i]=100;
			}
			if(balld==2&&ballc==obs3c[i]&&ballr==9&&obs3c[i]!=100)
			{
				balld=1;
				scr+=500;
				obs3c[i]=100;
			}
			if(balld==3&&ballc==obs3c[i]&&ballr==9&&obs3c[i]!=100)
			{
				balld=4;
				scr+=500;
				obs3c[i]=100;
			}
			if(balld==4&&ballc==obs3c[i]&&ballr==9&&obs3c[i]!=100)
			{
				balld=3;
				scr+=500;
				obs3c[i]=100;
			}
		}
		}
		if(lvl==3)
		{
		for(i=0;i<78;i++)
		{
			if(balld==1&&ballc==obs2c[i]&&ballr==3&&obs2c[i]!=100)
			{
				balld=2;
				scr+=500;
				obs2c[i]=100;
			}
			if(balld==2&&ballc==obs2c[i]&&ballr==3&&obs2c[i]!=100)
			{
				balld=1;
				scr+=500;
				obs2c[i]=100;
			}
			if(balld==3&&ballc==obs2c[i]&&ballr==3&&obs2c[i]!=100)
			{
				balld=4;
				scr+=500;
				obs2c[i]=100;
			}
			if(balld==4&&ballc==obs2c[i]&&ballr==3&&obs2c[i]!=100)
			{
				balld=3;
				scr+=500;
				obs2c[i]=100;
			}
		}
		}
		if(lvl==0&&scr>300)
		{
			++lvl;
			gotoxy(20,6);
			cout<<" YOU HAVE CLEARED THE LEVEL 0 ";
			delay(2999);
			a1:
			gotoxy(20,8);
			cout<<" Press 'p' to start LEVEL 1";
			ch=getch();
				if(ch=='p')
			goto rstart;
			else
				goto a1;
		}
		if(lvl==1&&scr>=8000)
		{
			++lvl;
			gotoxy(20,6);
			cout<<" YOU HAVE CLEARED THE LEVEL  ";

			delay(2999);
			gotoxy(20,8);
			a2:
			cout<<" Press 'p' to start LEVEL 2";
			ch=getch();
				if(ch=='p')
			goto rstart;
			else
				goto a2;
		}
		if(lvl==2&&scr>=30000)
		{
			++lvl;
			gotoxy(20,6);
			cout<<" YOU HAVE CLEARED THE LEVEL  ";
			delay(2999);
			a3:
			gotoxy(20,8);
			cout<<" Press 'p' to start LEVEL 3";
			ch=getch();
				if(ch=='p')
			goto rstart;
			else
				goto a3;
		}
		if(lvl==3&&scr>=125000)
		{
			win=0;
			gotoxy(20,6);
			cout<<" WOWWWWWWWWWWW YOU WON  ";
			delay(2999);
			break;
		}
		gotoxy(35,15);
			cout<<" LEVEL : "<<lvl<<" ";
		gotoxy(50,22);
			cout<<"NITRO : ";
		if(n2o>=100)
			cout<<"|";
		if(n2o>=200)
			cout<<"|";
		if(n2o>=300)
			cout<<"|";
		if(n2o>=400)
			cout<<"|";
		if(n2o>=500)
			cout<<"|";

	}
	if(win==0)
	{
		clrscr();
		borders();
		gotoxy(15,10);
			cout<<"WHOOOOOOO!!!! YOU WON ";
		delay(1000);
		clrscr();
		winner(0);
		delay(2000);


		return;
	}
	if(ballr==15)
	{
		gotoxy(30,6);
		cout<<"\a YOU LOSE ";
		if(life>=0)
		{
		gotoxy(30,7);
		cout<<"\a DO YOU WANT TO START AGAIN ";
		gotoxy(46,8);
		cout<<"'y' for yes ";
		gotoxy(46,9);
		cout<<"'n' for no ";
		gotoxy(30,10);
		cout<<" YOUR CHOICE : ";
		cin>>res;
		if(res=='y')
		{
			clrscr();
			borders();
			a4:
			gotoxy(10,10);
			cout<<"Please Press 'p' To Start";
			ch=getch();
			if(ch=='p')
				goto rstart;
			else
				goto a4;
		}
		else
		{
			return;
		}
		}
		if(life<0)
		{
			clrscr();
			borders();
			gotoxy(30,10);
			cout<<" YOU LOSE ";
			delay(1000);
			clrscr();
			winner(1);
			delay(1000);

		}
	}
	getch();
	}
	else
		goto start;
}
// FUNCTION TO START A NEW GAME
void starting(void)
{
	int i;
	char x=(char)219;
	for(i=1;i<=80;i++)
	{
		gotoxy(i,1);
			cout<<x;
		gotoxy(i,24);
			cout<<x;
	}
	for(i=1;i<=24;i++)
	{
		gotoxy(1,i);
			cout<<x;
		gotoxy(80,i);
			cout<<x;
	}
	char l1[50]={ "  HELLO MY FRIEND PLEASE SELECT YOUR CHOICE :" };
	char l2[35]={ "  Press 'p' To Start The Game " };
	char l3[35]={ "  Press 'i' For Instructions" };
	char l4[25]={ "  Press 'q' To Quit " };
	gotoxy(10,10);
	for(i=0;i<50;i++)
	{
		cout<<l1[i];
		if(i%3==0)
		{
		sound(11*random(100));
		delay(55);
		nosound();
		}
	}
	gotoxy(22,12);
	for(i=0;i<35;i++)
	{
		cout<<l2[i];
		if(i%3==0)
		{
		sound(11*random(100));
		delay(55);
		nosound();
		}
	}
	gotoxy(22,14);
	for(i=0;i<35;i++)
	{
		cout<<l3[i];
		if(i%3==0)
		{
		sound(11*random(100));
		delay(55);
		nosound();
		}
	}
	gotoxy(22,16);
	for(i=0;i<25;i++)
	{
		cout<<l4[i];
		if(i%3==0)
		{
		sound(11*random(100));
		delay(55);
		nosound();
		}
	}
	gotoxy(22,18);
}
// FUNCTION TO CREATE BORDERS
void borders(void)
{
	int i;
	char x=(char)219;
	for(i=1;i<=80;i++)
	{
		gotoxy(i,1);
			cout<<x;
		gotoxy(i,15);
			cout<<x;
	}
	for(i=1;i<=15;i++)
	{
		gotoxy(1,i);
			cout<<x;
		gotoxy(80,i);
			cout<<x;
	}
}
// FUNCTION TO SHOW INSTRUCTIONS
void instructions(void)
{
	clrscr();
	int i;
	char x=(char)219;
	for(i=1;i<=80;i++)
	{
		gotoxy(i,1);
			cout<<x;
		gotoxy(i,24);
			cout<<x;
	}
	for(i=1;i<=24;i++)
	{
		gotoxy(1,i);
			cout<<x;
		gotoxy(80,i);
			cout<<x;
	}
	gotoxy(37,3);
		cout<<"INSTRUCTIONS";
	gotoxy(3,5);
		cout<<"1. Press 'a' or 'd' to control the bat ";
	gotoxy(3,7);
		cout<<"2. Press 'q' anytime to quit the game ";
	gotoxy(3,9);
		cout<<"3. In Total There Are 4 Levels Including Level 0 ";
	gotoxy(3,11);
		cout<<"4. Level 0 Is Free Play Round Without Obstacles";
	gotoxy(3,13);
		cout<<"5. If you hit an obstacle you get 500 points reward ";
	gotoxy(3,15);
		cout<<"6. By Collecting 500 Score Your Speed Gets Doubled ";
	gotoxy(3,17);
		cout<<"7. Please Wait For A Moment";
}
// FUNCTION TO SHOW RESULT SCREEN
void winner(int win)
{	int i;
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	setcolor(1);
	for(i=1;i<=480;i++)
		line(0,i,640,i);
	settextstyle(4,0,9);
	if(win==0)
		for(i=0;i<25;i++)
		{
			setcolor(15);
			outtextxy(10,80,"YOU WIN");
			delay(250);
			setcolor(1);
			outtextxy(10,80,"YOU WIN");
			delay(250);
		}
	if(win==1)
		for(i=0;i<25;i++)
		{
			setcolor(15);
			outtextxy(10,80,"YOU LOSE");
			delay(250);
			setcolor(1);
			outtextxy(10,80,"YOU LOSE");
			delay(250);
		}
	closegraph();
}

void tictactoe()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	int j,k,l,m,plr,win=0,ch,temp;
	char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
	delay(2500);
		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180);

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();
	for(j=1;j<=10;j++)
	{
		clrscr();
		setcolor(0);
		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180);

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();



		if(j<10)
		{
			if(j%2==0)
				plr=2;
			else
				plr=1;
			gotoxy(1,15);
			str:
			if(plr==2)
			{
				cout<<" PLAYER 1 YOUR CHOICE : ";
				cin>>ch;

			}
			else
			{
				cout<<" PLAYER 2 YOUR CHOICE : ";
				cin>>ch;
			}

			if(ch==1&&plr==2)
			{
				if(a==''||a=='X')
					goto str;
				else
				a='';
			}
			if(ch==2&&plr==2)
			{
				if(b==''||b=='X')
					goto str;
				else
				b='';
			}
			if(ch==3&&plr==2)
			{
				if(c==''||c=='X')
					goto str;
				else
				c='';
			}
			if(ch==4&&plr==2)
			{
				if(d==''||d=='X')
					goto str;
				else
				d='';
			}
			if(ch==5&&plr==2)
			{
				if(e==''||e=='X')
					goto str;
				else
				e='';
			}
			if(ch==6&&plr==2)
			{
				if(f==''||f=='X')
					goto str;
				else
				f='';
			}
			if(ch==7&&plr==2)
			{
				if(g==''||g=='X')
					goto str;
				else
				g='';
			}
			if(ch==8&&plr==2)
			{
				if(h==''||h=='X')
					goto str;
				else
				h='';
			}
			if(ch==9&&plr==2)
			{
				if(i==''||i=='X')
					goto str;
				else
				i='';
			}
			if(ch==1&&plr==1)
			{
				if(a==''||a=='X')
					goto str;
				else
				a='X';
			}
			if(ch==2&&plr==1)
			{
				if(b==''||b=='X')
					goto str;
				else
				b='X';
			}
			if(ch==3&&plr==1)
			{
				if(c==''||c=='X')
					goto str;
				else
				c='X';
			}
			if(ch==4&&plr==1)
			{
				if(d==''||d=='X')
					goto str;
				else
				d='X';
			}
			if(ch==5&&plr==1)
			{
				if(e==''||e=='X')
					goto str;
				else
				e='X';
			}
			if(ch==6&&plr==1)
			{
				if(f==''||f=='X')
					goto str;
				else
				f='X';
			}
			if(ch==7&&plr==1)
			{
				if(g==''||g=='X')
					goto str;
				else
				g='X';
			}
			if(ch==8&&plr==1)
			{
				if(h==''||h=='X')
					goto str;
				else
				h='X';
			}
			if(ch==9&&plr==1)
			{
				if(i==''||i=='X')
					goto str;
				else
				i='X';
			}
		if(a==b&b==c)
			win=plr;
		if(d==e&&e==f)
			win=plr;
		if(g==h&&h==i)
			win=plr;
		if(a==d&&d==g)
			win=plr;
		if(b==e&&e==h)
			win=plr;
		if(c==f&&f==i)
			win=plr;
		if(a==e&&e==i)
			win=plr;
		if(c==e&&e==g)
			win=plr;
			setcolor(0);
  /*		for(k=0;k<=640;k++)
			line(0,k,640,k);
		setcolor(15);
		line(0,60,180,60);
		line(0,120,180,120);
		line(60,0,60,180);
		line(120,0,120,180); */

		gotoxy(4,2);
			cout<<a;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,2);
			cout<<b;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,2);
			cout<<c;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,6);
			cout<<d;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,6);
			cout<<e;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,6);
			cout<<f;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(4,10);
			cout<<g;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(12,10);
			cout<<h;
			sound(10*random(100));
			delay(80);
			nosound();
		gotoxy(20,10);
			cout<<i;
			sound(10*random(100));
			delay(80);
			nosound();
		}
		if(win==2||win==1)
			break;

	}

	delay(1000);

	winer(win);
	delay(5000);

	closegraph();
	getch();
}
void initials(void)
{
	clrscr();
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	setbkcolor(1);
	setcolor(14);
		settextstyle(4,0,10);
		outtextxy(200,150,"M.D");
	closegraph();
}
void winer(int win)
{
	clrscr();
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	setbkcolor(1);
	setcolor(14);
		settextstyle(4,0,5);
	if(win==1)
	{
		outtextxy(120,150,"PLAYER 2 WINS");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	else if(win==2)
	{
		outtextxy(100,150,"PLAYER 1 WINS");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	else
	{
		outtextxy(150,150,"GAME DRAW");
			sound(10*random(100));
			delay(5000);
			nosound();
	}
	closegraph();
}
void parabola()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	float i,ox=getmaxx()/2,oy=getmaxy()/2;
	float a,ch;
	int j;
	cout<<"PLEASE SELECT YOUR CHOICE\n 1.About X-Axis\n 2.About Y-Axis";
	cout<<"\n\n CHOICE : ";
	cin>>ch;

	if(ch==1)
	{
	cout<<"Y square = 4*_*X";
	gotoxy(14,6);
	cin>>a;
	for(i=-240;i<=240;i+=0.1)
	{
		putpixel((i*i/(4*a))+ox,i+oy,random(15));
		line(ox,0,ox,480);
		line(0,oy,640,oy);
		j=(int)i;
		if(j%10==0)
		{
			outtextxy(ox-2,i+oy,".");
			outtextxy(i+ox,oy-4,".");
		}
	}
	}
	else if(ch==2)
	{
	cout<<"X square = 4*_*Y";
	gotoxy(14,6);
	cin>>a;
	for(i=240;i>=-240;i-=0.1)
	{
		putpixel(i+ox,(i*i/(4*(-a)))+oy,random(15));
		line(ox,0,ox,480);
		line(0,oy,640,oy);
		j=(int)i;
		if(j%10==0)
		{
			outtextxy(ox-2,i+oy,".");
			outtextxy(i+ox,oy-4,".");
		}
	}
	}
	else
		cout<<"U MAD??";
	closegraph();

}

void gamezone()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	int i;
	setcolor(1);
	for(i=1;i<=480;i++)
		line(0,i,640,i);
	settextstyle(1,0,7);
	for(i=0;i<14;i++)
		{

			setcolor(15);
			outtextxy(10,80,"WELCOME TO THE");
			outtextxy(50,180,"GAMING ZONE");
			sound(10*random(100));
			delay(250);
			nosound();
			setcolor(1);
			outtextxy(10,80,"WELCOME TO THE");
			outtextxy(50,180,"GAMING ZONE");
			sound(10*random(100));
			delay(250);
			nosound();
			if(kbhit())
				break;
		}
	closegraph();
}
void geass()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	int i;
	setcolor(4);
	//right side
	line(360,240,480,180);
	line(480,180,375,250);
	line(375,250,395,300);
	line(360,240,370,260);
	line(370,260,330,285);
	line(330,285,330,155);
	line(330,155,333,140);
	line(333,140,320,100);
	line(320,330,330,300);
	line(330,300,373,270);
	line(373,270,395,300);
	//left side
	line(280,240,160,180);
	line(160,180,265,250);
	line(265,250,245,300);
	line(280,240,270,260);
	line(270,260,310,285);
	line(310,285,310,155);
	line(310,155,307,140);
	line(307,140,320,100);
	line(320,330,310,300);
	line(310,300,267,270);
	line(267,270,245,300);
	//color
	setfillstyle(1,4);
	floodfill(320,200,4);
	while(!kbhit())
	{
		putpixel(random(640),random(480),random(15));
		delay(55);
	}
	getch();

}
void spkr()
{
	clrscr();
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	int x,y,i,g;
	x=getmaxx()/2;
	y=getmaxy()/2;
	char ch;
	settextstyle(1,1,4);
	outtextxy(10,50,"Press any key to quit");
	while(!kbhit())
	{
		g=random(6)+1;
		if(g==1)
			goto a;
		if(g==2)
			goto b;
		if(g==3)
			goto c;
		if(g==4)
			goto d;
		if(g==5)
			goto e;
		if(g==6)
			goto f;
		a:
		for(i=0;i<=40;i++)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
		b:
		for(i=70;i<=100;i++)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
		c:
		for(i=120;i<=140;i++)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
		d:
		for(i=150;i<=160;i++)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
		e:
		for(i=160;i>=150;i--)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
		f:
		for(i=140;i>=120;i--)
		{
			circle(x,y,i);
			delay(10);
		}setcolor(random(16));
	}
	getch();
	closegraph();
}
void shpl()
{
	int gm=DETECT,gd;
	initgraph(&gm,&gd,"..\\bgi\\");
	float i,X,Y,ox=getmaxx()/2,oy=getmaxy()/2;
	float a,ch;
	int j;
	cout<<"PLEASE SELECT YOUR CHOICE\n 1.About X-Axis\n 2.About Y-Axis";
	cout<<"\n\n CHOICE : ";
	cin>>ch;

	if(ch==1)
	{
	cout<<"X=x+ ";cin>>X;
	cout<<"Y=y+ ";cin>>Y;
	cout<<"Y square = 4*_*X";
	gotoxy(14,8);
	cin>>a;
	for(i=-240;i<=240;i+=0.1)
	{
		putpixel((i*i/(4*a))+ox-X,i+oy+Y,random(15));
		line(ox,0,ox,480);
		line(0,oy,640,oy);
		j=(int)i;
		if(j%10==0)
		{
			outtextxy(ox-2,i+oy,".");
			outtextxy(i+ox,oy-4,".");
		}
	}
	}
	else if(ch==2)
	{
	cout<<"X=x+ ";cin>>X;
	cout<<"Y=y+ ";cin>>Y;
	cout<<"X square = 4*_*Y";
	gotoxy(14,8);
	cin>>a;
	for(i=240;i>=-240;i-=0.1)
	{
		putpixel(i+ox-X,(i*i/(4*(-a)))+oy+Y,random(15));
		line(ox,0,ox,480);
		line(0,oy,640,oy);
		j=(int)i;
		if(j%10==0)
		{
			outtextxy(ox-2,i+oy,".");
			outtextxy(i+ox,oy-4,".");
		}
	}
	}
	else
		cout<<"U MAD??";
	closegraph();

}

void reportcard()
{
	char ch;
	cout.setf(ios::fixed|ios::showpoint);
	cout<<setprecision(2); // program outputs decimal number to two decimal places
	clrscr();
	do
	{
		clrscr();
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. RESULT MENU";
		cout<<"\n\n\t02. ENTRY/EDIT MENU";
		cout<<"\n\n\t03. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-3) ";
		cin>>ch;
		clrscr();
		switch(ch)
		{
			case '1': result();
				break;
			case '2': entry_menu();
				break;
			case '3':
				break;
			default :cout<<"\a";
		}
     }while(ch!='3');
	getch();
}

void write_student()
{
	student st;
	ofstream outFile;
	outFile.open("student.dat",ios::binary|ios::app);
	st.getdata();
	outFile.write((char *) &st, sizeof(student));
	outFile.close();
	cout<<"\n\nStudent record Has Been Created ";
	cin.ignore();
	getch();
}

void display_all()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	cout<<"\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
	while(inFile.read((char *) &st, sizeof(student)))
	{
		st.showdata();
		cout<<"\n\n====================================\n";
	}
	inFile.close();
	getch();
}

void display_sp(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	int flag=0;
	while(inFile.read((char *) &st, sizeof(student)))
	{
		if(st.retrollno()==n)
		{
			 st.showdata();
			 flag=1;
		}
	}
	inFile.close();
	if(flag==0)
		cout<<"\n\nrecord not exist";
	getch();
}

void modify_student(int n)
{
	int found=0;
	student st;
	fstream File;
	File.open("student.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";

		getch();
		return;
	}

	while(File.read((char *) &st, sizeof(student)) && found==0)
	{
		if(st.retrollno()==n)
		{
			st.showdata();
			cout<<"\n\nPlease Enter The New Details of student"<<endl;
			st.getdata();
		    int pos=(-1)*sizeof(st);
		    File.seekp(pos,ios::cur);
		    File.write((char *) &st, sizeof(student));
		    cout<<"\n\n\t Record Updated";
		    found=1;
		}
	}
	File.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
	getch();
}

void delete_student(int n)
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		getch();
		return;
	}
	ofstream outFile;
	outFile.open("Temp.dat",ios::out);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &st, sizeof(student)))
	{
		if(st.retrollno()!=n)
		{
			outFile.write((char *) &st, sizeof(student));
		}
	}
	outFile.close();
	inFile.close();
	remove("student.dat");
	rename("Temp.dat","student.dat");
	cout<<"\n\n\tRecord Deleted ..";

	getch();
}

void class_result()
{
	student st;
	ifstream inFile;
	inFile.open("student.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";

		getch();
		return;
	}
	cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
	cout<<"==========================================================\n";
	cout<<"R.No       Name        P   C   M   E   CS   %age   Grade"<<endl;
	cout<<"==========================================================\n";
	while(inFile.read((char *) &st, sizeof(student)))
	{
		st.show_tabular();
	}

	getch();
	inFile.close();
}

void result()
{
	char ch;
	int rno;
	cout<<"\n\n\n\tRESULT MENU";
	cout<<"\n\n\n\t1. Class Result";
	cout<<"\n\n\t2. Student Report Card";
	cout<<"\n\n\t3. Back to Main Menu";
	cout<<"\n\n\n\tEnter Choice (1/2/3)? ";
	cin>>ch;
	clrscr();
	switch(ch)
	{
	case '1' :	class_result(); break;
	case '2' :	cout<<"\n\n\tEnter Roll Number Of Student : "; cin>>rno;
				display_sp(rno); break;
	case '3' :	break;
	default:	cout<<"\a";
	}
}

void entry_menu()
{
	char ch;
	int num;
	clrscr();
	cout<<"\n\n\n\tENTRY MENU";
	cout<<"\n\n\t1.CREATE STUDENT RECORD";
	cout<<"\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
	cout<<"\n\n\t3.SEARCH STUDENT RECORD ";
	cout<<"\n\n\t4.MODIFY STUDENT RECORD";
	cout<<"\n\n\t5.DELETE STUDENT RECORD";
	cout<<"\n\n\t6.BACK TO MAIN MENU";
	cout<<"\n\n\tPlease Enter Your Choice (1-6) ";
	cin>>ch;
	clrscr();
	switch(ch)
	{
	case '1':	write_student(); break;
	case '2':	display_all(); break;
	case '3':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				display_sp(num); break;
	case '4':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				modify_student(num);break;
	case '5':	cout<<"\n\n\tPlease Enter The roll number "; cin>>num;
				delete_student(num);break;
	case '6':	break;
	default:	cout<<"\a"; entry_menu();
	}
}

void timepass()
{
	textbackground(BLUE);
	textcolor(WHITE);
	C:
	clrscr();

	 char ch,a[20],ch2;
	 int num=100,rnum,guess,count,ch1,c=0;
	 cout<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
	 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t** Welcome To High/Low Game **"<<"\n\t\t\t** ________________________ **";
	 cout<<"\n\t\t\t**                          **"<<"\n\t\t\t******************************"<<"\n\t\t\t******************************";
	 cout<<"\n\n\n\n------------"<<"\n Main  Menu"<<"\n------------"<<"\n\n\n 1.Rules\n\n 2.Play\n\n 3.Exit"<<"\n\n Enter your choice(1-3):";
	 cin>>ch1;

	 switch(ch1)
	 {
	  case 1:
	    {
	    clrscr();
	    cout<<"\n\n---------------------";
	    cout<<"\n General Description"<<"\n---------------------";
	    cout<<"\n\n1.The Computer picks a random number from 0 to 99.";
	    cout<<"\n  You must try to guess the number.";
	    cout<<"\n\n2.The Computer ask you to enter your guess.You have 8";
	    cout<<"\n  chances to guess the number.";
	    cout<<"\n\n3.The computer checks the number,if your guess is";
	    cout<<"\n  less than computer's numer than it will show a message";
	    cout<<"\n  that your guess is low and ask for higher number.";
	    cout<<"\n\n4.If your guess is higher than the computer's number";
	    cout<<"\n  than computer will show a message that your guess is high and";
	    cout<<"\n  ask for lower number.";
	    D: cout<<"\n\n\n  Press # to goto Main Menu:";
	    cin>>ch2;
	    if(ch2=='#')
	    {
	     ch2='#';
	     goto C;
	    }
	    else
	     goto D;
	   }
	    break;

	 case 2:
	  {
	   clrscr();
	   cout<<"\n\n\nEnter Your Name:";
	   cin>>a;
	   cout<<"\n\n";
	   for(int i=0;i<=100;i+=20)
	   {
	    cout<<"Loading......."<<i<<"%\r";
	    sleep(1);
	   }
	   cout<<"\n\nHi "<<a<<".........!!!!";

	       A: if(c>0)
	clrscr();
	   randomize();
	   rnum=random(num);
	   cout<<"\n\nEnter Your Guess:";
	   cin>>guess;
	   count=8;

     B: while(guess!=rnum)
		{
	    count--;
	    if(guess>rnum)
	    {
	     cout<<"\n\n"<<guess<<" is High....!!!!\a\a"<<"\n\nNow You Have "<<count<<" chance left";
	     if(count==0)
	     break;
	     cout<<"\n\nEnter Your Guess Again:";
	     cin>>guess;
	     goto B;
	    }
	    if(guess<rnum)
	    {
	     cout<<"\n\n"<<guess<<" is Low...!!!\a\a"<<"\n\nNow You Have "<<count<<" chance left";
	     if(count==0)
	      break;
	     cout<<"\n\nEnter Your Guess Again:";
	     cin>>guess;
	     goto B;
	    }
	   }
	   if(guess==rnum)
	   {
	    cout<<"\n\n\t\tCongratulation "<<a<<" You Have Done IT.......!!!!!\a\a";
	    switch(count)
	    {
	     case 7: cout<<"\n\nYour Score is 100 out of 100";
	      break;
	     case 6: cout<<"\n\nYour Score is 85 out of 100";
	      break;
	     case 5: cout<<"\n\nYour Score is 70 out of 100";
	      break;
	     case 4: cout<<"\n\nYour Score is 55 out of 100";
	      break;
		    case 3: cout<<"\n\nYour Score is 40 out of 100";
	      break;
	     case 2: cout<<"\n\nYour Score is 25 out of 100";
	      break;
	     case 1: cout<<"\n\nYour Score is 10 out of 100";
	      break;
	  }
		   }
	   else
	    cout<<"\n\n\t\tSorry "<<a<<" Bad Luck......!!! Try Next Time\a\a\a";
	   cout<<"\n\nWant to Play More(y/n):";
	   cin>>ch;

	 if(ch=='y'||ch=='Y')
	 {
	    c++;
	    goto A;
	   }
	   else
	    {
	     cout<<"\n\n\n\n\t\t\t    @@@@@@@@ THANK YOU @@@@@@@@   \n\n";
	     cout<<"================================================================================";
	     cout<<"\a\a\n\n\t\t\t\t BYE BYE";
	     cout<<"\n\n================================================================================";
	     delay(1000);
	     return;
	    }
  }
   break;
 case 3:
  {
   cout<<"\n\n\n================================================================================";
    cout<<"\n\n\t\t\t\t OHHKK";
    cout<<"\n\n\n================================================================================";
    delay(1000);
    return;

  }
 }
 getch();
}
/*void color()
{
   back:
	clrscr();
	int bcol;
	cout<<" PLEASE CHOOSE A BACKGROUND COLOR;;;";
	cout<<"\n 0 = Black           ";
	cout<<"\n 1 = Blue            ";
	cout<<"\n 2 = Green           ";
	cout<<"\n 3 = Aqua            ";
	cout<<"\n 4 = Red             ";
	cout<<"\n 5 = Pink            ";
	cout<<"\n 6 = Yellow          ";
	cout<<"\n 7 = White           ";
	cout<<"\n 8 = Gray            ";
	cout<<"\n 9 = Light Blue      ";
	cout<<"\n 10 = Light Green    ";
	cout<<"\n 11 = Light Aqua     ";
	cout<<"\n 12 = Light Red      ";
	cout<<"\n 13 = Light Purple   ";
	cout<<"\n 14 = Light Yellow   ";
	cout<<"\n 15 = Bright White   ";
	cout<<"\n CHOICE --> "; cin>>bcol;
	if(bcol>=0&&bcol<=15)
	{
		textbackground(bcol);
if(bcol==0||bcol==1||bcol==4||bcol==5||bcol==8||bcol==9||bcol==12||bcol==13)
			textcolor(15);
else if(bcol==2||bcol==3||bcol==6||bcol==7||bcol==10||bcol==11||bcol==14||bcol==15)
			textcolor(1);
		clrscr();
	}
	else
		goto back;
	getch();
} */

void leftmove(void)
{
	int i,j,k;
	for(i=3;i>=0;i--)
		for(j=i-1;j>=0;j--)
			for(k=0;k<4;k++)
				if(a[j][k]==a[i][k]||a[j][k]==0)
				{
					a[j][k]=a[j][k]+a[i][k];
					a[i][k]=0;
					scoreee+=a[j][k];
					if(a[j][k]==2048)
						win=1;
				}
}

void rightmove(void)
{
	int i,j,k;
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
			for(k=0;k<4;k++)
				if(a[j][k]==a[i][k]||a[j][k]==0)
				{
					a[j][k]=a[j][k]+a[i][k];
					a[i][k]=0;
					scoreee+=a[j][k];
					if(a[j][k]==2048)
						win=1;
				}
}

void upmove(void)
{
	int i,j,k;
	for(i=3;i>=0;i--)
		for(j=i-1;j>=0;j--)
			for(k=0;k<4;k++)
				if(a[k][j]==a[k][i]||a[k][j]==0)
				{
					a[k][j]=a[k][j]+a[k][i];
					a[k][i]=0;
					scoreee+=a[k][j];
					if(a[k][j]==2048)
						win=1;
				}
}

void downmove(void)
{
	int i,j,k;
	for(i=0;i<4;i++)
		for(j=i+1;j<4;j++)
			for(k=0;k<4;k++)
				if(a[k][j]==a[k][i]||a[k][j]==0)
				{
					a[k][j]=a[k][j]+a[k][i];
					a[k][i]=0;
					scoreee+=a[k][j];
					if(a[k][j]==2048)
						win=1;
				}
}

void genrand(void)
{
	int ranx,rany,i;
	unsigned int sval;
	time_t t;
	sval=(unsigned)time(&t);
	srand(sval);
    start:
	ranx=(rand()%4);
	rany=(rand()%4);
	if(a[ranx][rany]==0)
		a[ranx][rany]=2;
	else
		goto start;
}
void lines(void)
{
	int i,j;
	char v=219,h=219;
	//LINE 1
	for(i=y[0];i<=y[4];i++)
	{
		for(j=0;j<5;j++)
		{
			gotoxy(x[j],i);
			cout<<v;
		}
	}
	for(i=x[0];i<=x[4];i++)
	{
		for(j=0;j<5;j++)
		{
			gotoxy(i,y[j]);
			cout<<h;
		}
	}
}

void chkfull(void)
{
	int i,j,flag=0;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			if(a[i][j]==0)
			{
				flag=1;
				break;
			}
	if(flag==0)
		win=0;
}

void chkwin(void)
{
	int i;
	if(win==0)
	{
		clrscr();
		for(i=1;i<24;i++)
		{
			gotoxy(20,i);
			cout<<"DAMN IT !!!!! YOU LOST MAN !!";
			delay(150);
			clrscr();
		}
	}
	else if(win==1)
	{
		clrscr();
		for(i=1;i<24;i++)
		{
			gotoxy(20,i);
			cout<<"WOHOOOO !!!!! YOU WON MAN !!";
			delay(150);
			clrscr();
		}
	}
	else if(win==3)
	{
		clrscr();
		for(i=1;i<24;i++)
		{
			gotoxy(20,i);
			cout<<"THANKS FOR PLAYING THE GAME :)";
			delay(150);
			clrscr();
		}
	}
}

void print(void)
{
	int i,j;
     //	clrscr();
	gotoxy(1,1);
	cout<<"\n\t\t GAME -----> 2048";
	gotoxy(1,21);
	cout<<"\n\t\t Press 'q' to stop the game anytime";
	cout<<"\n\n\t\t ENJOY THE GAME :) ";
	lines();
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++)
		{
			gotoxy(x[i]+1,y[j]+2);
			if(a[i][j]==0)
				cout<<"    ";
			else
				cout<<a[i][j];
		}
	gotoxy(30,15);
	cout<<"SCORE --> "<<scoreee;
}

void game2048(void)
{
	clrscr();
	geass();
	int i,j;
	char ch;
	for(i=0;i<=3;i++)
		for(j=0;j<=3;j++)
			a[i][j]=0;
	print();
 //	genrand();
   //	print();
	while(ch!='q')
	{
		genrand();
		print();
		chkfull();
		chkwin();
		ch=getch();
		if(ch==0)
		{
			chkfull();
			chkwin();
			ch=getch();
			if(ch==72)
				upmove();
			if(ch==75)
				leftmove();
			else if(ch==77)
				rightmove();
			else if(ch==80)
				downmove();
			print();
			delay(200);
		}
	}
	win=3;
	chkwin();
}


