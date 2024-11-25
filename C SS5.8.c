#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int n1, n2;
    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &n1, &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("Vui long nhap 2 so nguyen duong!\n");
        return 1;
    }

    printf("BCNN cua %d va %d la: %d\n", n1, n2, bcnn(n1, n2));
    return 0;
}

