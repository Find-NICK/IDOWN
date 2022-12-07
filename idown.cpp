#include<cstdio>
#include<iostream>
#include<windows.h>
#include<string>
#include "TUI.hpp" 
using namespace std;
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
#define MAXLEN 1000
string URI,strf=".\aria2c ",DIR,USEROPT,Personset;
int connection=32;
char f[5000];
void downinit();
void down();
void settings();
void init();
void setcolor(WORD colors) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colors);
}
void gotoxy(short x, short y) {
    COORD coord = {x, y}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
string int2str(int x);
void downinit() {
	printf("+---------------------------------------+\n|                                       |\n|  Paste your URL here,and PRESS ENTER  |\n|                                       |\n+---------------------------------------+\n");
	URI.resize(1000);
	scanf("%s",&URI[0]);
}
void down() {
	strf=strf+" --dir=download "+" -j 32 -s 32 -x 32 "+Personset+" "+URI;
	strcpy(f,strf.c_str());
	system(f);
}
void init() {
	char tmp[100][MAXLEN]= {"CHOICEA","CHOICEB","C","d","aaaaaa","S**T"};
	printf("%d",list("SIMPLETEST",tmp,6));
}
int main() {
	downinit();
}

