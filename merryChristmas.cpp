
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include"stdlib.h"
#include"windows.h"
#include"mmsystem.h"
#include"conio.h"
#include"string.h"
#include"graphics.h"
#include"stdio.h"
#include <time.h>
#include"math.h"
#pragma  comment(lib,"winmm.lib")

using namespace std;


void playSound()
{
	Sleep(1000);
	PlaySound((".\\res\\铃儿响叮当.wav"),NULL, SND_FILENAME|SND_ASYNC);
	
}
int main()
{
	system("Title ");
	initgraph(1120, 540);		
	playSound();
	loadimage(NULL, ".\\res\\tree.jpg",0,true);
	setcolor(RGB(255, 34, 0));
	setfont(30,0,"黑体");
	Sleep(1000);
	outtextxy(520,50,"   啊冲破大风雪，我们坐在雪橇上   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,100,"   快奔驰过田野，我们欢笑又歌唱   ");Sleep(5000);
	setcolor(RGB(255, 34, 0));
	outtextxy(520,150,"   马儿铃声响叮当，令人精神多欢畅   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,200,"   我们今晚滑雪真快乐，把滑雪歌儿唱   ");Sleep(5000);
	setcolor(RGB(38, 255, 0));
	outtextxy(520,250,"   叮叮当，叮叮当，铃儿响叮当   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,300,"   今晚滑雪多快乐，我们坐在雪橇上   ");Sleep(5000);
	setcolor(RGB(38, 255, 0));
	outtextxy(520,350,"   叮叮当，叮叮当，铃儿响叮当   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,400,"   今晚滑雪多快乐，我们坐在雪橇上   ");Sleep(5000);
	initgraph(1120, 540);
	LOGFONT f;
	gettextstyle(&f);                     // 获取当前字体设置
	f.lfHeight = 110;                      // 设置字体高度为 48
	f.lfEscapement = 50;
	f.lfWeight = FW_BLACK;
	_tcscpy(f.lfFaceName, _T("黑体"));    // 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f.lfQuality = ANTIALIASED_QUALITY;    // 设置输出效果为抗锯齿  
	setcolor(RGB(255, 0, 89));//桃红
	settextstyle(&f);  
	Sleep(2000);
	outtextxy(100, 50, _T("年复一年"));
	f.lfEscapement = 0.2;
	Sleep(2000);
	setcolor(RGB(0, 255, 72));//翠绿
	outtextxy(100, 300, _T("日历一页页翻过"));
	Sleep(3000);
	
	initgraph(1120, 540);
	LOGFONT f1;
	gettextstyle(&f1);                     // 获取当前字体设置
	f1.lfHeight = 100;                      // 设置字体高度为 48
	f1.lfEscapement = -50;
	//f.lfWeight = FW_BLACK;
	_tcscpy(f1.lfFaceName, _T("黑体"));    // 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f1.lfQuality = ANTIALIASED_QUALITY;    // 设置输出效果为抗锯齿  
	setcolor(RGB(255, 0, 89));//桃红
	settextstyle(&f1);  
	Sleep(2000);
	outtextxy(100, 50, _T("又一个圣诞又是新年"));
	f1.lfEscapement = 0.2;
	Sleep(2000);
	setcolor(RGB(132, 255, 0));//翠绿
	outtextxy(100, 300, _T("新起点，新开始"));
	Sleep(3000);
	
	initgraph(1120, 540);
	loadimage(NULL, ".\\res\\end.jpg",1120, 540,true);
	Sleep(2000);
	LOGFONT f2;
	gettextstyle(&f2);                     // 获取当前字体设置
	f2.lfHeight = 170;                      // 设置字体高度为 48
	f2.lfEscapement = 0;
	f2.lfWeight = FW_BLACK;
	_tcscpy(f2.lfFaceName, _T("楷体"));    // 设置字体为“黑体”(高版本 VC 推荐使用 _tcscpy_s 函数)
	f2.lfQuality = ANTIALIASED_QUALITY;    // 设置输出效果为抗锯齿  
	setcolor(RGB(255, 89, 0));
	settextstyle(&f2);  
	outtextxy(150, 90, _T("圣"));Sleep(2000);
	setcolor(RGB(255, 0, 191));
	outtextxy(350, 200, _T("诞"));Sleep(2000);
	setcolor(RGB(115, 0, 255));
	outtextxy(550, 60, _T("快"));Sleep(2000);
	setcolor(RGB(255, 0, 59));

	outtextxy(750, 200, _T("乐"));Sleep(2000);
	f2.lfEscapement = 0;
	Sleep(2000);
	setcolor(RGB(0, 255, 196));//蓝色
	Sleep(1000);
	initgraph(0, 0);
	MessageBox(NULL,"Merry Christmas","谢谢观赏",MB_OK); 

	Sleep(500);
	return 0;
}