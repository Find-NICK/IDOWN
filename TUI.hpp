#include<windows.h>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
#define MAXLEN 1000
#define FR FOREGROUND_RED
#define FB FOREGROUND_BLUE
#define FG FOREGROUND_GREEN
#define BR BACKGROUND_RED
#define BB BACKGROUND_BLUE
#define BG BACKGROUND_GREEN
void gotoxy(short x, short y) {
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void cls() {
	COORD coord = {0, 0};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void setcolor(WORD colors) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colors);
}
void draw_rect(int begin_x, int begin_y, int end_x, int end_y, WORD colors/*must be BACKGROUND_XXX*/) {
	setcolor(colors);
	for (int i = begin_x; i <= end_x; i++) {
		for (int j = begin_y; j <= end_y; j++) {
			gotoxy(i, j);
			putchar(' ');
		}
	}
	return ;
}
//void menushow(){
//
//}
//int menu(int posx,int posy,char head[],char choice[][MAXLEN],int nums) {
//	int choose=1;
//	printf("%s\n",head);
//	for(int i=0; i<nums; i++) {
//		if(i==choose) {
//			setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|BACKGROUND_BLUE|BACKGROUND_GREEN);
//		} else {
//			setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
//		}
//		printf("%s\n",choice[i]);
//	}
//	while(!KEY_DOWN(VK_RETURN)) {
//		if(KEY_DOWN(VK_UP) || KEY_DOWN(87)) {
//			setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
//			gotoxy(0,0);
//			choose=max(choose-1,0);
//			printf("%s\n",head);
//			for(int i=0; i<nums; i++) {
//				if(i==choose) {
//					setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|BACKGROUND_BLUE|BACKGROUND_GREEN);
//				} else {
//					setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
//				}
//				printf("%s\n",choice[i]);
//			}
//			Sleep(50);
//		}
//		if(KEY_DOWN(VK_DOWN)||KEY_DOWN(83)) {
//			setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
//			gotoxy(0,0);
//			choose=min(choose+1,nums-1);
//			printf("%s\n",head);
//			for(int i=0; i<nums; i++) {
//				if(i==choose) {
//					setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|BACKGROUND_BLUE|BACKGROUND_GREEN);
//				} else {
//					setcolor(FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
//				}
//				printf("%s\n",choice[i]);
//			}
//			Sleep(50);
//		}
//	}
//	return choose;
//}
