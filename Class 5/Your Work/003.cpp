#include<stdio.h>
#include <string.h>
#define endl() printf("\n")
int main(){
    char top[30] = "NUSRAT JAHAN";
    char snd[30] = "TANVIR HASAN";
    printf("%s %s", top, snd);
    endl();
    char temp[30];
    strcpy(temp, top);
    strcpy(top, snd);
    strcpy(snd, temp);
    printf("%s %s", top, snd);
    endl();
    return 0;
}