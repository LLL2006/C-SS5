#include <stdio.h>
int main() {
	int n;
	int i;
	
	do {
		printf("Nhap mot so nguyen duong tu 1 den 10: ");
		scanf("%d", &n);
		
		if (n < 1 || n > 10) {
			printf("Hay thu lai.\n");
		}
	} while (n <1 || n > 10);
	
	printf("Bang cuu chuong cua %d:\n", n);
	for (i = 1; i <= 10; i++) { 
		printf("%d x %d = %d\n", n, i, n * i);
	}
	
	return 0;
}
