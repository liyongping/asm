// win_UnAsm.cpp : Defines the entry point for the console application.
//

#include <stdlib.h>
#include <stdio.h>

int testInt(int fa, int fb){
    int a = fa;
    int b = fb;
    int c = a+b;
    return c;
}

int testPointer(int *fa, char *fb){
    int a = *fa;
    char b = *fb;
    int c = a+(int)b;
    return c;
}

int main(int argc, char* argv[])
{
    int f1 = 10;
    int f2 = 12;
    char c1 = 40;
    int f3 = testInt(f1,f2);
    int f4 = testPointer(&f1,&c1);
    f4+=f3;
    printf("heh:%d\n",f4);
	return 0;
}

