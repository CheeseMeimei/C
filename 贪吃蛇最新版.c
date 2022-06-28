#include<stdio.h>

#include<stdlib.h>

#include<Windows.h>

#include<conio.h>


//��Ϸ��ʼ 
void Gamestart();
//��ӭ���� 
void welcome();
//�߿� 
void Map();
//Ѱ�ҹ��λ�� 
void gotoxy(int x,int y);

//��
//�˴������漰����֪ʶ��������
//�ߵ�ÿһ�ڶ���һ���ڵ㶼��x��y������ 
/*
	�����ɽڵ���� �ڵ��������򣨴洢���ݣ���ָ����ָ����һ���ڵ㣩��� 
*/
typedef struct _Snake
{
	int x;int y;
	
	struct _Snake *next;//��һ���ڵ� 
	
	
}Snake; 

Snake *Head=NULL;

enum{UP=72,DOWN=80,LEFT=75,RIGHT=77};

//��ʼ�� ��
void InitSnake();
//���������������ƶ� 
void RunGame(); 
//û���������ҵ�ʱ����ǰ�ƶ�
void MoveSnake(int direction); 

int main()
{
	
	Gamestart();

	return 0;
}

void Gamestart()
{
	system("mode con cols=120 lines=44");//�ı䴰�ڴ�С����Ҫ��ͷ�ļ�Windows.h 
	welcome();//��ӭ���� 
	Map();
	InitSnake();//�� 
	RunGame();
}

void welcome()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t=================================================================\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t\t\t\t\t\t=\n");
	printf("\t\t\t=\t\t\t��ӭ����̰��������\t\t\t=\n");
	printf("\t\t\t=\t\t\t��Ϸ�����ߣ������\t\t\t=\n");
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
		printf("��");
		gotoxy(i,39);
		printf("��");
	}
	
	for(i=0;i<40;i++)
	{
		gotoxy(0,i);
		printf("��");
		gotoxy(78,i);
		printf("��");
	}
	
	//����Ҳ���ԣ����ǲ����� 
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

void gotoxy(int x,int y)//�����������ʵ��Ѱ�ҹ��λ�ã���Ҫ�������仰ʵ�� 
{
	
	COORD pos ={x,y};//��ȡ���λ�÷���һ��IDֵ 
	
	HANDLE hOut=GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ���� 

	SetConsoleCursorPosition(hOut,pos);// �������ҵ����λ�ã�������һ������ 
	
	
}

void InitSnake()//��ʼ���� �����ߵ�λ�ú����ӣ��ĸ����飩 
{
	
	
	Snake* temp=(Snake*)malloc(sizeof(Snake));//����ͷ���ڵ㣩 
	temp->x=15;//ͷ������ 
	temp->y=10;
	temp->next=NULL;//ͷ����һ���ڵ�����Ϊ�� 
	Head=temp;//�������ʱ�����ı�����ֵ��ͷ 
	
	int i=1;
	for(i=1;i<=3;i++)//�������ĸ��ڵ���� 
	{
		Snake* p=(Snake*)malloc(sizeof(Snake));
		
		p->x=15+2*i;//ͷ����һ���ڵ����� 
		p->y=10;
		p->next=NULL;
		temp->next=p;//p��ͷ����һ���ڵ� 
		temp=p;//��p���ͷ���Լ���������һ���ڵ� 
		
	}
	//�ڵ�ͼ����ʾ��
	temp=Head;
	while(temp!=NULL)
	{
		gotoxy(temp->x,temp->y);
		printf("��");
		temp=temp->next;
	 } 
}

//������Ϸ
void RunGame()
{
	int direction=RIGHT;
	while(1)
	{
		char ch;
		//���ж���û������ ��������˾����������ƶ�
		
		if(kbhit())//���kbhit�������ж��Ƿ������� ��Ҫ��conio.hͷ�ļ� 
		{
			//�������������£���ȡ����
			ch=getch();
			switch(ch)
			{
				case 72://�� 
				direction=UP;
					break;
				case 75://�� 
				direction=LEFT;
					break;
				case 77://�� 
				direction=RIGHT;
					break;
				case 80://�� 
				direction=DOWN;
					break;
			} 
		} 
		//���û������ͼ�����ǰ�� 
		MoveSnake(direction);
		
		Sleep(500);
	}
}

void MoveSnake(int direction)
{
	//�ҵ�β�� 
	Snake* p=Head;
	while(p!=NULL&&p->next!=NULL)
	{
		p=p->next;
	}
	
	//��һ���ڵ㣨β�ͣ�
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
	
	
	//����β�ʹ�ӡ����
	gotoxy(temp->x,temp->y);
	printf("��");
	gotoxy(Head->x,Head->y);
	printf("  ");
	
	//ɾ��ͷ
	temp=Head->next;
	free (Head);
	Head=temp;
	
	
	 
	
}


















