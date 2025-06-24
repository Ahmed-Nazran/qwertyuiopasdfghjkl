#include <stdio.h>

int main() {
    int X, Y, Z;

    printf("Enter three integers (X Y Z): ");
    scanf("%d %d %d", &X, &Y, &Z);

    if (X > Y && X > Z) {
        printf("X is greater\n");
    } else {
        if (Y > Z) {
            printf("Y is greater\n");
        } else {
            printf("Z is greater\n");
        }
    }
    return 0;
}
