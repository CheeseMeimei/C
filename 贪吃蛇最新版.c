#include<stdio.h>

#include<stdlib.h>

#include<Windows.h>

#include<conio.h>


//游戏开始 
void Gamestart();
//欢迎界面 
void welcome();
//边框 
void Map();
//寻找光标位置 
void gotoxy(int x,int y);

//蛇
//此处的蛇涉及到的知识点是链表
//蛇的每一节都是一个节点都有x，y的坐标 
/*
	链表由节点组成 节点由数据域（存储数据）和指针域（指向下一个节点）组成 
*/
typedef struct _Snake
{
	int x;int y;
	
	struct _Snake *next;//下一个节点 
	
	
}Snake; 

Snake *Head=NULL;

enum{UP=72,DOWN=80,LEFT=75,RIGHT=77};

//初始化 蛇
void InitSnake();
//控制蛇上下左右移动 
void RunGame(); 
//没有上下左右的时候往前移动
void MoveSnake(int direction); 

int main()
{
	
	Gamestart();

	return 0;
}

void Gamestart()
{
	system("mode con cols=120 lines=44");//改变窗口大小，需要引头文件Windows.h 
	welcome();//欢迎界面 
	Map();
	InitSnake();//蛇 
	RunGame();
}

void welcome()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t=================================================================\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t欢迎来到贪吃蛇世界\t\t\t=\n");
	printf("\t\t\t=\t\t\t游戏开发者：张雨佳\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=================================================================\n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	system("pause");
	
	system("cls");
}

void Map()
{
	int i; 
	for(i=0;i<80;i+=2)
	{
		gotoxy(i,0);
		printf("■");
		gotoxy(i,39);
		printf("■");
	}
	
	for(i=0;i<40;i++)
	{
		gotoxy(0,i);
		printf("■");
		gotoxy(78,i);
		printf("■");
	}
	
	//这样也可以，但是不方便 
	/*for(int i=0;i<40;i++)
	{
		
		for(int j=0;j<40;j++)
		{
			if(i==0||i==39)
			{
				printf("??");
				
			}
			else
			{
				if(j==0||j==39)
				{
					printf("??");	
				}
				else
				{
					printf("  ");
				}
			}		
		} 
		printf("\n");	
	}*/
}

void gotoxy(int x,int y)//这个函数用来实现寻找光标位置，主要靠第三句话实现 
{
	
	COORD pos ={x,y};//获取光标位置返回一个ID值 
	
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);//获取窗口 

	SetConsoleCursorPosition(hOut,pos);// 窗口上找到光标位置，进行下一步操作 
	
	
}

void InitSnake()//初始化蛇 做出蛇的位置和样子（四个方块） 
{
	
	
	Snake* temp=(Snake*)malloc(sizeof(Snake));//创建头（节点） 
	temp->x=15;//头的坐标 
	temp->y=10;
	temp->next=NULL;//头的下一个节点先设为空 
	Head=temp;//把这个临时创建的变量赋值给头 
	
	int i=1;
	for(i=1;i<=3;i++)//做的是四个节点的蛇 
	{
		Snake* p=(Snake*)malloc(sizeof(Snake));
		
		p->x=15+2*i;//头的下一个节点坐标 
		p->y=10;
		p->next=NULL;
		temp->next=p;//p是头的下一个节点 
		temp=p;//让p变成头可以继续链接下一个节点 
		
	}
	//在地图中显示蛇
	temp=Head;
	while(temp!=NULL)
	{
		gotoxy(temp->x,temp->y);
		printf("■");
		temp=temp->next;
	 } 
}

//运行游戏
void RunGame()
{
	int direction=RIGHT;
	while(1)
	{
		char ch;
		//先判断有没有输入 如果输入了就上下左右移动
		
		if(kbhit())//这个kbhit函数是判断是否有输入 需要引conio.h头文件 
		{
			//在有输入的情况下，获取输入
			ch=getch();
			switch(ch)
			{
				case 72://上 
				direction=UP;
					break;
				case 75://左 
				direction=LEFT;
					break;
				case 77://右 
				direction=RIGHT;
					break;
				case 80://下 
				direction=DOWN;
					break;
			} 
		} 
		//如果没有输入就继续往前走 
		MoveSnake(direction);
		
		Sleep(500);
	}
}

void MoveSnake(int direction)
{
	//找到尾巴 
	Snake* p=Head;
	while(p!=NULL&&p->next!=NULL)
	{
		p=p->next;
	}
	
	//加一个节点（尾巴）
	Snake* temp=(Snake*)malloc(sizeof(Snake));
	temp->next=NULL;
	temp->x=0,temp->y=0;
	p->next=temp;
	if(direction==RIGHT)
	{
		temp->x=p->x+2;
		temp->y=p->y;
	}
	else if(direction==LEFT)
	{
		temp->x=p->x-2;
		temp->y=p->y;
	}
	else if(direction==UP)
	{
		temp->x=p->x;
		temp->y=p->y-1;
	}
	else if(direction==DOWN)
	{
		temp->x=p->x;
		temp->y=p->y+1;
	}
	
	
	//把新尾巴打印出来
	gotoxy(temp->x,temp->y);
	printf("■");
	gotoxy(Head->x,Head->y);
	printf("  ");
	
	//删除头
	temp=Head->next;
	free (Head);
	Head=temp;
	
	
	 
	
}


















