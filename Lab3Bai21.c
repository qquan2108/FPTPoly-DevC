#include <stdio.h>

void Bai21(){
	float a, b, x;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	if (a==0){
		if(b==0){
			printf("Phuong trinh co vo so nghiem");
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
	else{
		x=-b/a;
		printf("Nghiem cua phuong trinh la: %f",x);
	}
	return 0;
}
