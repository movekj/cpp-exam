/*
 ============================================================================
 Name        : testc.c
 Author      : starli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mainc(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    char a,b,c;
    printf("请输入三个字符：");
    scanf("%c%c%c",&a,&b,&c);
    printf("%c,%c,%c\n", a,b,c);
    return 0;
}
