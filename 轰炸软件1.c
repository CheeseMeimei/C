#include<stdio.h>

#include<Windows.h>

int main()
{
    int num=100,i=0;

    FindWindow(NULL,"��·��");

    while(i<num)
    {
        //ճ�� �������MW_PASTE
        SendMessageA(SendMessage,MW_PASTE,0,0);
        //���� �������MW_KEYDOWN,MW_RETURN
        SendMessageA(SendMessage,MW_KEYDOWN,MW_RETURN,0);

        i++;
    }

    return 0;
}
