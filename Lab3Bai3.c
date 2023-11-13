#include <stdio.h>
#define bac1 1678
#define bac2 1734
#define bac3 2014
#define bac4 2536
#define bac5 2834
#define bac6 2927

void Bai3(){
	float soDien, tienDien;
	printf("Nhap so dien (kWh): ");
	scanf("%f",&soDien);
	if (soDien <= 50) {
        tienDien = soDien * bac1;
    } else if (soDien <= 100) {
        tienDien = 50 * bac1 + (soDien - 50) * bac2;
    } else if (soDien <= 200) {
        tienDien = 50 * bac1 + 50 * bac2 + (soDien - 100) * bac3;
    } else if (soDien <= 300) {
        tienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (soDien - 200) * bac4;
    } else if (soDien <= 400) {
        tienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (soDien - 300) * bac5;
    } else {
        tienDien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (soDien - 400) * bac6;
    }
    printf("Tong tien dien la %f",tienDien); printf("dong");
    return 0;

}
