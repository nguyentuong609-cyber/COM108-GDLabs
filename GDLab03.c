#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kiemTraDiem(float x){
    if(x > 10) printf("Khong hop le\n");
    else if (x >= 9) printf("Hoc luc xuat sac\n");
    else if (x >= 8) printf("Hoc luc gioi\n");
    else if (x >= 6.5)printf("Hoc luc kha\n");
    else if (x >= 5)printf("Hoc luc trung binh\n");
    else if (x >= 3.5) printf("Hoc luc yeu\n");
    else if (x >= 0) printf("Hoc luc kem\n");
    else printf("Khong hop le\n");
}

void phuongTrinh_2_1(float a, float b){
    if (a == 0){
        if(b == 0) printf("Phuong Trinh co vo so nghiem");
        else printf("Phuong trinh vo nghiem");
    }
    else{
        float x = -b / a;
        printf("x la: %.2f\n",x);}
}

void phuongTrinh_2_2(float a, float b, float c){
    if(a == 0){
        float x = -c / b;
        printf("Phuong trinh thanh bx + c = 0\n");
        printf("x la %.2f\n", x);
    }
    else{
        float delta = (b*b) - 4*a*c;
        if(delta < 0)printf("Phuont trinh vo nghiem\n");
        else if(delta == 0){float x = -b/(2*a); printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x);}
        else{
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem rieng biet\nx1 la: %.2f va x2 la: %.2f\n", x1, x2);
        }
    }
}

void tinhTienDien(float so_kWh_suDung){
    float totalCost;
    if(so_kWh_suDung <= 50){
        totalCost = so_kWh_suDung * 1.678;
        printf("Ban can phai dong: %.2f\n", totalCost);
    }
    else if (so_kWh_suDung <= 100){
        totalCost = so_kWh_suDung * 1.734;
        printf("Ban can phai dong: %.2f\n", totalCost);
    }
    else if (so_kWh_suDung <= 200){
        totalCost = so_kWh_suDung * 2.014;
        printf("Ban can phai dong: %.2f()\n", totalCost);
    }
    else if (so_kWh_suDung <= 300){
        totalCost = so_kWh_suDung * 2.536;
        printf("Ban can phai dong: %.2f\n", totalCost);
    }
    else if (so_kWh_suDung <= 400){
        totalCost = so_kWh_suDung * 2.834;
        printf("Ban can phai dong: %.2f\n", totalCost);
    }
    else{
        totalCost = so_kWh_suDung * 2.937;
        printf("Ban can phai dong: %.2f\n", totalCost);
    }
}

int main(){
    int choice;
    do{
        printf("Nhap so de chon chuc nang\n");
        printf("Chuc nang 1: Tinh hoc luc\n");
        printf("Chuc nang 2: Giai phuong trinh 2.1\n");
        printf("Chuc nang 3: Giai phuong trinh 2.2\n");
        printf("Chuc nang 4: Tinh tien dien\n");
        printf("Chuc nang 0: EXIT\n");
        printf("Chon so: "); 

        if (scanf("%d", &choice) != 1){
            printf("Phien chon so tu 1 toi 4\n");
            while (getchar() != '\n' );
            continue;
        }

        switch(choice){
            case 1:{
                printf("Ban da chon CN1: tinh hoc luc\n");
                float diem;
                printf("Phien ban nhap diem: "); scanf("%f", &diem);
                kiemTraDiem(diem);
                break;
            }
            case 2:{
                printf("Ban da chon CN2: bac 1\n");
                float a, b;
                printf("Phuong trinh de giai ax + b = 0\n");
                printf("Nhap so a: "); scanf("%f", &a);
                printf("Nhap so b: "); scanf("%f", &b);

                phuongTrinh_2_1(a,b);
                break;
            }
            case 3:{
                printf("Ban da chon CN3: bac 2\n");
                float a, b, c;
                printf("Phuong trinh de giai ax2 + bx + c = 0\n");
                printf("Nhap so a: "); scanf("%f", &a);
                printf("Nhap so b: "); scanf("%f", &b);
                printf("Nhap so c: "); scanf("%f", &c);

                phuongTrinh_2_2(a,b,c);
                break;
            }
            case 4:{
                printf("Ban da chon CN4: ting tien dien\n");
                float x;
                printf("Nhap so kWh da su dung: "); scanf("%f", &x);
                tinhTienDien(x);
                break;
            }
            case 0:{
                printf("Goodbye!");
                break;
            }
            default:{
                printf("Phien cho so tu 0 toi 4");
                break;
            }

        }

    }
    while(choice != 0);

    return 0;
}
