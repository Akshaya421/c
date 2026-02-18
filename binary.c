#include <stdio.h>
int main() {
    int i,num;
    int b [8]; 
    printf("Enter an integer : ");
    scanf("%d", &num);
    if (num < 0 || num > 255) {
        printf("Error:\n");
    }
    for ( i=0; i<7; i--) {
        b[i] = num % 2;   
        num /= 2;            
    }
    printf("Binary equivalent: ");
    for ( i = 0; i < 8; i++) {
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}

