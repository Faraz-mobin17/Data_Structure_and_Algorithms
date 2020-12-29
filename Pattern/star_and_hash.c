#include <stdio.h>

int main () {
    int input;
    do {
        scanf("%d",&input);
        if (input <=  1)
            printf("*#\n");
        else if (input > 20) {
            for (int i = 1; i <= input;  i += 1) {
                for (int j = 1; j <= i; j += 1) {
                    printf("*#");
                }
                printf("\n");
            }
        } else {
            for (int i = 1; i <= input; i += 1) {
                for (int j = 1; j <= i; j += 1) {
                    printf("*#");
                }
                printf("\n");
            }
        }
    } while (input != -1);
    return 0;
}
