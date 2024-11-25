#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    
    if (n < 0) n = -n;

    printf("Cac chu so trong so nguyen: ");
    
    while (n > 0) {
        printf("%d ", n % 10);
        n /= 10;
    }

    printf("\n");
    return 0;
}

