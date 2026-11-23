#include<stdio.h>
#include<string.h>
#define out1() printf("Updated Course : %s\n", course)
#define out2() printf("University: %s\n", uni) 
#define out3() printf("New University : %s\n", uni)

int main(){
    char course[] = "CSE_101";
    const char *uni = "DUET";
    course[0]='E';
    out1();
    out2();
    uni = "BUET";
    out3();

    return 0;
}