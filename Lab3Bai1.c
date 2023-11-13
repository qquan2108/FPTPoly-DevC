#include <stdio.h>

void Bai1(){
	float diem;
	printf("Nhap diem: ");
	scanf("%f",&diem);
	if (diem>=9){
		printf("Xuat sac");
	}
	else if(diem>=8){
		printf("Gioi");
	}
	else if(diem>=6.5){
		printf("Kha");
	}
	else if(diem>=5){
		printf("Trung binh");
	}
	else if(diem>=3.5){
		printf("Yeu");
	}
	else if(diem<3.5){
		printf("Kem");
	}
	return 0;
}
