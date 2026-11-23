#include<stdio.h>
#include <string.h>
#define endl() printf("\n")
int main(){
    char name[20]="DHAKA";
    printf("%lu", strlen(name));
    endl();
    name[3]='\0';
    printf("%s %lu", name, strlen(name));
    endl();
    char arr[4] = {'T','e','s','t'};
    printf("%lu", sizeof(arr));
    endl();
    return 0;
}