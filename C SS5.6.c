#include <stdio.h>

int main() {
    float n1, n2;
    int chon;

    printf("Nhap so thu nhat: ");
    scanf("%f", &n1);
    printf("Nhap so thu hai: ");
    scanf("%f", &n2);

    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf("Tong: %.2f\n", n1 + n2);
                break;
            case 2:
                printf("Hieu: %.2f\n", n1 - n2);
                break;
            case 3:
                printf("Tich: %.2f\n", n1 * n2);
                break;
            case 4:
                if (n2 != 0) {
                    printf("Thuong: %.2f\n", n1 / n2);
                } else {
                    printf("Khong the chia cho 0\n");
                }
                break;
            case 5:
                printf("Ket thuc.\n");
                break;
            default:
                printf("Hay thu lai.\n");
        }
    } while (chon != 5);

    return 0;
}

