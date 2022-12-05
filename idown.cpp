#include<cstdio>
#include<iostream>
#include<windows.h>
#include<string> 
using namespace std;
string URI,strf,DIR,USEROPT,Personset;
int connect=32;
char f[5000];
void downinit();
void down();
void settings;
void init();
string int2str(int x);
void downinit(){
	printf("©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´\n©¦                                       ©¦\n©¦  Paste your URL here,and PRESS ENTER  ©¦\n©¦                                       ©¦\n©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼\n");
	URI.resize(1000);
	scanf("%s",&URI[0]);
}
void down(){
	strf=".\\aria2\\aria2c"+" --dir="+DIR+" --spilt="+int2str(connect)+" "+Personset;
	strcpy("")
}
void
int main(){
	init();
}

