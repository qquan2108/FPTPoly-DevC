#include <stdio.h>
#include <stdlib.h>

int main() {
	int so;
	printf("=================Menu=================\n");
	printf("1. Bai 1: Tinh hoc luc\n");
	printf("2. Bai 2.1: Giai phuong trinh bac 1\n");
	printf("3. Bai 2.2: Giai phuong trinh bac 2\n");
	printf("4. Bai 3: Tinh tien dien\n");
	printf("5. Bai 5: Tinh tien nuoc\n");
	printf("======================================\n");
	printf("Vui long chon chuc nang: ");
	scanf("%d", &so);
	switch(so){
		case 1:
			printf("CHUONG TRINH TINH HOC LUC\n");
			Bai1();
			break;
		case 2:
			printf("CHUONG TRINH GIAI PHUONG TRINH BAC 1\n");
			Bai21();
			break;
		case 3:
			printf("CHUONG TRINH GIAI PHUONG TRINH BAC 2\n");
			Bai22();
			break;
		case 4:
			printf("CHUONG TRINH TINH TIEN DIEN\n");
			Bai3();
			break;
		case 5:
			printf("CHUONG TRINH TINH TIEN NUOC\n");
			Bai5();
			break;
		default:
			printf("Vui long chon tinh nang tu 1->5!");
			break;
	}
	return 0;
}
