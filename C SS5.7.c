#include <stdio.h>

int main() {
    int n1, n2, ucln;
    int i;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &n1);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("Vui long nhap 2 so nguyen duong!\n");
        return 1;
    }
    
    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            ucln = i;
        }
    }

    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", n1, n2, ucln);

    return 0;
}

