
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
	PlaySound((".\\res\\����춣��.wav"),NULL, SND_FILENAME|SND_ASYNC);
	
}
int main()
{
	system("Title ");
	initgraph(1120, 540);		
	playSound();
	loadimage(NULL, ".\\res\\tree.jpg",0,true);
	setcolor(RGB(255, 34, 0));
	setfont(30,0,"����");
	Sleep(1000);
	outtextxy(520,50,"   �����ƴ��ѩ����������ѩ����   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,100,"   �챼�۹���Ұ�����ǻ�Ц�ָ質   ");Sleep(5000);
	setcolor(RGB(255, 34, 0));
	outtextxy(520,150,"   ��������춣�������˾���໶��   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,200,"   ���ǽ���ѩ����֣��ѻ�ѩ�����   ");Sleep(5000);
	setcolor(RGB(38, 255, 0));
	outtextxy(520,250,"   ��������������������춣��   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,300,"   ����ѩ����֣���������ѩ����   ");Sleep(5000);
	setcolor(RGB(38, 255, 0));
	outtextxy(520,350,"   ��������������������춣��   ");Sleep(5000);
	setcolor(RGB(8,194,150));
	outtextxy(520,400,"   ����ѩ����֣���������ѩ����   ");Sleep(5000);
	initgraph(1120, 540);
	LOGFONT f;
	gettextstyle(&f);                     // ��ȡ��ǰ��������
	f.lfHeight = 110;                      // ��������߶�Ϊ 48
	f.lfEscapement = 50;
	f.lfWeight = FW_BLACK;
	_tcscpy(f.lfFaceName, _T("����"));    // ��������Ϊ�����塱(�߰汾 VC �Ƽ�ʹ�� _tcscpy_s ����)
	f.lfQuality = ANTIALIASED_QUALITY;    // �������Ч��Ϊ�����  
	setcolor(RGB(255, 0, 89));//�Һ�
	settextstyle(&f);  
	Sleep(2000);
	outtextxy(100, 50, _T("�긴һ��"));
	f.lfEscapement = 0.2;
	Sleep(2000);
	setcolor(RGB(0, 255, 72));//����
	outtextxy(100, 300, _T("����һҳҳ����"));
	Sleep(3000);
	
	initgraph(1120, 540);
	LOGFONT f1;
	gettextstyle(&f1);                     // ��ȡ��ǰ��������
	f1.lfHeight = 100;                      // ��������߶�Ϊ 48
	f1.lfEscapement = -50;
	//f.lfWeight = FW_BLACK;
	_tcscpy(f1.lfFaceName, _T("����"));    // ��������Ϊ�����塱(�߰汾 VC �Ƽ�ʹ�� _tcscpy_s ����)
	f1.lfQuality = ANTIALIASED_QUALITY;    // �������Ч��Ϊ�����  
	setcolor(RGB(255, 0, 89));//�Һ�
	settextstyle(&f1);  
	Sleep(2000);
	outtextxy(100, 50, _T("��һ��ʥ����������"));
	f1.lfEscapement = 0.2;
	Sleep(2000);
	setcolor(RGB(132, 255, 0));//����
	outtextxy(100, 300, _T("����㣬�¿�ʼ"));
	Sleep(3000);
	
	initgraph(1120, 540);
	loadimage(NULL, ".\\res\\end.jpg",1120, 540,true);
	Sleep(2000);
	LOGFONT f2;
	gettextstyle(&f2);                     // ��ȡ��ǰ��������
	f2.lfHeight = 170;                      // ��������߶�Ϊ 48
	f2.lfEscapement = 0;
	f2.lfWeight = FW_BLACK;
	_tcscpy(f2.lfFaceName, _T("����"));    // ��������Ϊ�����塱(�߰汾 VC �Ƽ�ʹ�� _tcscpy_s ����)
	f2.lfQuality = ANTIALIASED_QUALITY;    // �������Ч��Ϊ�����  
	setcolor(RGB(255, 89, 0));
	settextstyle(&f2);  
	outtextxy(150, 90, _T("ʥ"));Sleep(2000);
	setcolor(RGB(255, 0, 191));
	outtextxy(350, 200, _T("��"));Sleep(2000);
	setcolor(RGB(115, 0, 255));
	outtextxy(550, 60, _T("��"));Sleep(2000);
	setcolor(RGB(255, 0, 59));

	outtextxy(750, 200, _T("��"));Sleep(2000);
	f2.lfEscapement = 0;
	Sleep(2000);
	setcolor(RGB(0, 255, 196));//��ɫ
	Sleep(1000);
	initgraph(0, 0);
	MessageBox(NULL,"Merry Christmas","лл����",MB_OK); 

	Sleep(500);
	return 0;
}