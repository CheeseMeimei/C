#include<stdio.h>

#include<Windows.h>

int main()
{
    int num=100,i=0;

    FindWindow(NULL,"ÍõÂ·Ã÷");

    while(i<num)
    {
        //Õ³Ìù ĞéÄâ¼ü£ºMW_PASTE
        SendMessageA(SendMessage,MW_PASTE,0,0);
        //·¢ËÍ ĞéÄâ¼ü£ºMW_KEYDOWN,MW_RETURN
        SendMessageA(SendMessage,MW_KEYDOWN,MW_RETURN,0);

        i++;
    }

    return 0;
}
