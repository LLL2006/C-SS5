#include <stdio.h>
int main() {
	int soDung = 12;
	int soNhap;
	
	do {
		printf("Nhap vao mot so cho den khi trung voi so da cho (12):\n");
		scanf("%d", &soNhap);
	} while (soNhap != soDung);
	
	printf("Ban da nhap dung so.\n", soDung);
	
	return 0;
}
