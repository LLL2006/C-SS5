#include <stdio.h>

int main() {
    int n1, n2, n3, chon;
    
    do {
        printf("\nMENU\n1. Nhap 3 so\n2. Tong 3 so\n3. Trung binh cong\n4. So nho nhat\n5. So lon nhat\n6. Thoat\nLua chon: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                printf("Nhap 3 so: ");
                scanf("%d %d %d", &n1, &n2, &n3);
                break;
            case 2: printf("Tong: %d\n", n1 + n2 + n3); break;
            case 3: printf("Trung binh cong: %.2f\n", (n1 + n2 + n3) / 3.0); break;
            case 4: printf("So nho nhat: %d\n", (n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3))); break;
            case 5: printf("So lon nhat: %d\n", (n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3))); break;
            case 6: printf("Thoat\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (chon != 6);

    return 0;
}

