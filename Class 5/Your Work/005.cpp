#include <stdio.h>
#include <string.h>
int main(){
    char dept[30] = "CSE";
    char batch[30] = "2026";
    char status[30] = "ENROLLED";
    printf("%s | %s | %s\n", dept, batch, status);
    puts("--- End of Record ---");
    return 0;
}