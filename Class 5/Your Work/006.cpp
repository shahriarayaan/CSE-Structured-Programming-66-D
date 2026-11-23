#include <stdio.h>
#include <string.h>
int main(){
    char name[30];
    char alpha[30];
    scanf("%[^\n]", name);
    scanf("%[A-Za-z]", alpha);
    printf("Full Name : %s\n", name);
    printf("City Name : %s\n", alpha);

    return 0;
}