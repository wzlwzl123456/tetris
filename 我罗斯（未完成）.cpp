#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#define FrameX  16  //游戏窗口左上角的X轴坐标
#define FrameY  4  //游戏窗口左上角的Y轴坐标
#define height  20 //游戏窗口的高度
#define width   10//游戏窗口的宽度 
#define StartX  1+width/2//俄罗斯方块中心出现位置横坐标 
#define StartY  2//俄罗斯方块中心出现位置纵坐标 
int flag_old = 0;	//当前俄罗斯方块序号 
int flag_next = 0;//下一个俄罗斯方块序号 
int left = 1;	//1为可左移，0为不可左移 
int right = 1;//1为可右移，0为不可右移
int down = 1;	//1为可下移，0为不可下移
int trans = 1;//1为可旋转，0为不可旋转 
int X = StartX;//中心方块横坐标
int Y = StartY;//中心方块纵坐标
/****************************************
 * 确定屏幕光标位置
 ****************************************/
void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;//横坐标
    pos.Y = y;//纵坐标
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/****************************************
* 隐藏屏幕光标
****************************************/
void HideCursor()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
    CursorInfo.bVisible = 0; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
}
/****************************************
 * 生成俄罗斯方块
 ****************************************/
void MakeTetris()
{
    int i = 0, j = 0;
    srand(time(NULL));
    if (flag_old == 0)flag_old = rand() % 19 + 1;
    else flag_old = flag_next;
    flag_next = rand() % 19 + 1;
    for (i = 0; i < 5; i++)for (j = 0; j < 5; j++)s[i][j] = 0;
    switch (flag_old)
    {
    case  1:s[1][1] = 1; s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; break;//■
    case  2:s[1][2] = 1; s[1][3] = 1; s[2][2] = 1; s[3][2] = 1; break;//■■■
    case  3:s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; s[3][3] = 1; break;
    case  4:s[1][2] = 1; s[2][2] = 1; s[3][1] = 1; s[3][2] = 1; break;
    case  5:s[1][2] = 1; s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; break;//  ■
    case  6:s[1][2] = 1; s[2][2] = 1; s[2][3] = 1; s[3][2] = 1; break;//■■■
    case  7:s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; s[3][2] = 1; break;//
    case  8:s[1][2] = 1; s[2][1] = 1; s[2][2] = 1; s[3][2] = 1; break;
    case  9:s[1][3] = 1; s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; break;//    ■
    case 10:s[1][2] = 1; s[2][2] = 1; s[3][2] = 1; s[3][3] = 1; break;//■■■
    case 11:s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; s[3][1] = 1; break;
    case 12:s[1][1] = 1; s[1][2] = 1; s[2][2] = 1; s[3][2] = 1; break;
    case 13:s[2][1] = 1; s[2][2] = 1; s[2][3] = 1; s[2][4] = 1; break;//■■■■
    case 14:s[1][2] = 1; s[2][2] = 1; s[3][2] = 1; s[4][2] = 1; break;
    case 15:s[1][1] = 1; s[1][2] = 1; s[2][2] = 1; s[2][3] = 1; break;//■■
    case 16:s[1][3] = 1; s[2][2] = 1; s[2][3] = 1; s[3][2] = 1; break;//  ■■
    case 17:s[1][2] = 1; s[1][3] = 1; s[2][1] = 1; s[2][2] = 1; break;//  ■■
    case 18:s[1][1] = 1; s[2][1] = 1; s[2][2] = 1; s[3][2] = 1; break;//■■
    case 19:s[2][2] = 1; s[2][3] = 1; s[3][2] = 1; s[3][3] = 1; break;//■■
                                                                      //■■
    default:break;
    }
}

/****************************************
 * 打印出俄罗斯方块
 ****************************************/
void PrintTetris()

{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
       for (j = 0; j < 5; j++)a[Y - 2 + i][X - 2 + j] = s[i][j];
    for (i = 1; i <= height; i++)
    {
        gotoxy(FrameX + 2, FrameY + i);
        for (j = 1; j <= width; j++)
            if (a[i][j])printf("■");
            else printf("  ");
    }
}

/****************************************
 * 判断俄罗斯方块是否可移动和变形
 ****************************************/
void Judge_MoveAndTansform()
{
    switch (flag_old)
    {
    case  1:if (a[Y - 1][X - 2] == 0 && a[Y][X - 2] == 0)left = 1; else left = 0;
        if (a[Y - 1][X] == 0 && a[Y][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0 && a[Y - 1][X + 1] == 0 && a[Y + 1][X] == 0)trans = 1; else trans = 0;
        break;
    case  2:if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 2] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 2][X] == 0 && a[Y][X + 1] == 0)down = 1; else down = 0;
        if (a[Y][X - 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case  3:if (a[Y][X - 2] == 0 && a[Y + 1][X] == 0)left = 1; else left = 0;
        if (a[Y][X + 2] == 0 && a[Y + 1][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 2][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0 && a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0)trans = 1; else trans = 0;
        break;
    case  4:if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 2] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 2][X - 1] == 0 && a[Y + 2][X] == 0)down = 1; else down = 0;
        if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case  5:if (a[Y - 1][X - 1] == 0 && a[Y][X - 2] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y + 1][X] == 0)trans = 1; else trans = 0;
        break;
    case  6:if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 2] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 2][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y][X - 1] == 0)trans = 1; else trans = 0;
        break;
    case  7:if (a[Y][X - 2] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y][X + 2] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 2][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0)trans = 1; else trans = 0;
        break;
    case  8:if (a[Y - 1][X - 1] == 0 && a[Y][X - 2] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 2][X] == 0)down = 1; else down = 0;
        if (a[Y][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case  9:if (a[Y][X - 2] == 0 && a[Y - 1][X] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 2] == 0 && a[Y][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case 10:if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 2][X] == 0 && a[Y + 2][X + 1] == 0)down = 1; else down = 0;
        if (a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0 && a[Y][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case 11:if (a[Y][X - 2] == 0 && a[Y + 1][X - 2] == 0)left = 1; else left = 0;
        if (a[Y][X + 2] == 0 && a[Y + 1][X] == 0)right = 1; else right = 0;
        if (a[Y + 2][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X - 1] == 0 && a[Y - 1][X] == 0 && a[Y + 1][X] == 0)trans = 1; else trans = 0;
        break;
    case 12:if (a[Y - 1][X - 2] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y][X - 1] == 0 && a[Y + 2][X] == 0)down = 1; else down = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X - 1] == 0 && a[Y][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case 13:if (a[Y][X - 2] == 0)left = 1; else left = 0;
        if (a[Y][X + 3] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0 && a[Y + 1][X + 2] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0 && a[Y + 1][X] == 0 && a[Y + 2][X] == 0)trans = 1; else trans = 0;
        break;
    case 14:if (a[Y - 1][X - 1] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0 && a[Y + 2][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0 && a[Y + 2][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 3][X] == 0)down = 1; else down = 0;
        if (a[Y][X - 1] == 0 && a[Y][X + 1] == 0 && a[Y][X + 2] == 0)trans = 1; else trans = 0;
        break;
    case 15:if (a[Y - 1][X - 2] == 0 && a[Y][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 2] == 0)right = 1; else right = 0;
        if (a[Y][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y + 1][X] == 0)trans = 1; else trans = 0;
        break;
    case 16:if (a[Y - 1][X] == 0 && a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 2] == 0 && a[Y][X + 2] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 2][X] == 0 && a[Y + 1][X + 1] == 0)down = 1; else down = 0;
        if (a[Y - 1][X - 1] == 0 && a[Y - 1][X] == 0)trans = 1; else trans = 0;
        break;
    case 17:if (a[Y - 1][X - 1] == 0 && a[Y][X - 2] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 2] == 0 && a[Y][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 1][X] == 0 && a[Y][X + 1] == 0)down = 1; else down = 0;
        if (a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case 18:if (a[Y - 1][X - 2] == 0 && a[Y][X - 2] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y - 1][X + 1] == 0 && a[Y][X + 1] == 0 && a[Y + 1][X + 1] == 0)right = 1; else right = 0;
        if (a[Y + 1][X - 1] == 0 && a[Y + 2][X] == 0)down = 1; else down = 0;
        if (a[Y - 1][X] == 0 && a[Y - 1][X + 1] == 0)trans = 1; else trans = 0;
        break;
    case 19:if (a[Y][X - 1] == 0 && a[Y + 1][X - 1] == 0)left = 1; else left = 0;
        if (a[Y][X + 2] == 0 && a[Y + 1][X + 2] == 0)right = 1; else right = 0;
        if (a[Y + 2][X] == 0 && a[Y + 2][X + 1] == 0)down = 1; else down = 0;
        trans = 0;
        break;
    default:break;
    }
}

int main()
{
	
}
