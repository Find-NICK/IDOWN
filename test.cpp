#include "TUI.hpp"
using namespace std;
#define FR FOREGROUND_RED
#define FB FOREGROUND_BLUE
#define FG FOREGROUND_GREEN
#define BR BACKGROUND_RED
#define BB BACKGROUND_BLUE
#define BG BACKGROUND_GREEN
int main() {
	draw_rect(2,2,51,31,BR|BB);
	draw_rect(1,1,50,30,BR|BB|BG);
	setcolor(BR|BG);
	gotoxy(10,30);
	printf("10,30");
	gotoxy(30,10);
	printf("30,10");
	Sleep(3000);
}
