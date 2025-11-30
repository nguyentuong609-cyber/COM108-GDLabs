#include <stdio.h>

int main(){
    int x1, x2, sum;
    printf("Nhap so dau tien: "); scanf("%d", &x1);
    printf("Nhap so thu 2: "); scanf("%d", &x2);
    sum = x1 + x2;
    printf("Tong 2 so la: %d\n", sum);

    printf("Tinh chu vi va dien tich cua hinh chu nhat.\n");
    int chieudai, chieurong, chuvi, dientich;
    printf("nhap chieu dai: "); scanf("%d", &chieudai);
    printf("nhap chieu rong: "); scanf("%d", &chieurong);
    chuvi = (chieudai + chieurong) * 2;
    dientich = chieudai * chieurong;

    printf("Chu vi la: %d\n", chuvi);
    printf("Dien tich la: %d\n", dientich);

    printf("Tinh chu vi dien tich hinh tron\n");
    int r;
    printf("Nhap ban kinh cua duong tron: "); scanf("%d", &r);
    int chuViTron = 2*r*3.14;
    int dienTichTron = r * r * 3.14;
    printf("Chu vi hinh tron la: %d\n", chuViTron);
    printf("Dien tich hinh tron la: %d\n", dienTichTron);


    printf("Nhap diem de tinh trung binh\n");
    float toan, ly, hoa;
    printf("Nhap diem Toan: "); scanf("%f", &toan);
    printf("Nhap diem Ly: "); scanf("%f", &ly);
    printf("Nhap diem Hoa: "); scanf("%f", &hoa);
    float avr = (toan + ly + hoa) / 3;
    printf("Diem trung bing la: %.2f", avr);





    return 0;
}