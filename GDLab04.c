#include <stdio.h>

void trungBinhTongSoTuNhien(int min, int max){
    int i = min;
    float tong = 0, bienDem = 0, trungBinh = 0;
    while(i <= max){
        if(i % 2 ==0){
            tong += i;
            bienDem ++;
        }
        i++;
    }
    trungBinh = tong / bienDem;
    printf("Trung binh la %.2f", trungBinh);
}

void isPrime (int x){
    int i, count = 0;
    if(x <= 1){printf("%d khong phai la so nguyen to\n");}
    for (i = 2; i < x; i++){
        if (x % i == 0){
            count ++;
            break;
        }
    }
    if(count == 0){printf("%d la so nguyen to\n",x);}
    else{printf("%d khong la so nguyen to\n", x);}
}

void isSquare(int x){
    for (int i = 1; i < x; i ++){
        if (i * i == x){printf("%d la so chinh phuong\n",x); break;}
    }
}

int main(){
    int choice;
    do{
    printf("\nNhap so de chon chuc nang\n");
        printf("Chuc nang 1: Tinh Trung Binh Cong\n");
        printf("Chuc nang 2: Tim so nguyen to\n");
        printf("Chuc nang 3: Tim so chinh phuong\n");
        printf("Chuc nang 4: EXIT\n");
        printf("Xin moi chon chuc nang (1,2,3,4): "); 

        if (scanf("%d", &choice) != 1){
            printf("Phien chon so tu 1 toi 4\n");
            while (getchar() != '\n' );
            continue;
        }

        switch(choice){
            case 1:{
                printf("Ban da chon CN1: Tinh trung binh cong cua cac so tu nhien chia het cho 2\n");
                int min, max;
                printf("Nhap so nho nhat: "); scanf("%d", &min);
                printf("Nhap so lon nhat: "); scanf("%d", &max);
                trungBinhTongSoTuNhien(min, max);
                break;
            }
            case 2:{
                printf("Ban da chon CN2: Tim so nguyen to\n");
                int x;
                printf("Nhap so de kiem tra: "); scanf("%d", &x);
                isPrime(x);
                break;
            }
            case 3:{
                printf("Ban da chon CN3: Tim so chinh phuong\n");
                int x;
                printf("Nhap so de kiem tra: "); scanf("%d", &x);
                isSquare(x);
                break;
            }
            case 4:{
                printf("Goodbye");
                break;
            }
            default:{
                printf("Xin chon so (1, 2, 3, 4)\n");
                break;
            }
        }
    } while (choice != 4);

    return 0;
}