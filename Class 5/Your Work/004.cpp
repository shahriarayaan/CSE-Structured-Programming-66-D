#include <stdio.h>
#include <string.h>
#define endl() printf("\n")
int main(){
    char first[30], scnd[30];
    char sec;
    scanf("%s %s", &first, &scnd);
    scanf(" %c", &sec);
    printf("%s %s | %c" ,first, scnd, sec);
    endl();
    return 0;
}