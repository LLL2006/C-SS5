#include <stdio.h>
int main() {
	int n, tong = 0;
	int i; // Khai bao bien i ben ngoai vong lap
	
	printf("Hay nhap vao mot so nguyen duong: \n");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) { // Su dung bien da khai bao
		tong += i;
	}
	
	printf("Tong cac so tu 1 den %d la: %d\n", n, tong);
	
	return 0;
}

