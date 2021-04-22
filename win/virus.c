#include <windows.h>
#include <stdio.h>
#include <string.h>

int main() {
    int y = 1;
    char x[9];
    printf("------------COMPUTER HACKING UTILITY 1.0------------\n");
    sleep(0.1);
    printf("\n");
    sleep(0.1);
    printf("\n");
    sleep(0.1);
    printf("\n");
    sleep(0.1);
    printf("\n");
    sleep(0.1);
    printf("\n");
    sleep(0.1);
    printf("\n");
    sleep(2);
    printf("MAINFRAME TERMINAL\n");
    while(y==1) {
        sleep(2);
        printf("ENTER PASSWORD:");
        scanf("%s", x);
        sleep(2);
        printf("01101101\n");
        sleep(00.1);
        printf("10110101\n");
        sleep(00.1);
        printf("01011101\n");
        sleep(2);
        if(strcmp(x,"HACK01101")==0) {
            printf("ACCESS GRANTED\nHACKER TERMINAL 1.0\n>");
            scanf("%s",x);
            while(y==1){
                printf("10110101    01010010\n");
                printf("01010110    10111101\n");
                printf("01001010    11010010\n");
            }
        } else {
            printf("ACCESS DENIED\n");
            sleep(2);
        }
    }
}
