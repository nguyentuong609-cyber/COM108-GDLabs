#include <stdio.h>
#include <stdlib.h>

int soLonNhat(int x1, int x2, int x3){
    int max;
    if(x1 > x2){
        if(x1 > x3) {max = x1; printf("%d la so lon nhat\n",max);}
        else {max = x3; printf("%d la so lon nhat\n",max);}
    }
    else
        if(x2 > x3){max = x2; printf("%d la so lon nhat\n",max);}
        else{max = x3; printf("%d la so lon nhat\n",max);}
    
    return max;
}

int leapYear(int x){
    if (((x % 4 == 0) && (x % 100!= 0)) || (x%400 == 0))
        return 1;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = * y;
    *y = temp;
}

int main(){
    int choice;
    do{
        printf("\nNhap so de chon chuc nang\n");
        printf("Chuc nang 1: Tim gia tri lon nhat cua 3 so\n");
        printf("Chuc nang 2: Tinh nam Thuan\n");
        printf("Chuc nang 3: Xay dung ham hoan vi\n");
        printf("Chuc nang 4: EXIT\n");
        printf("Xin moi chon chuc nang (1,2,3,4): "); 

        if (scanf("%d", &choice) != 1){
            printf("Phien chon so tu 1 toi 4\n");
            while (getchar() != '\n' );
            continue;
        }
        switch(choice){
            case 1:{
                printf("Ban da chon CN1: Tim so lon nhat\n");
                int x1, x2, x3;
                printf("Nhap so dau tien: "); scanf("%d", &x1);
                printf("So thu hai: "); scanf("%d", &x2);
                printf("So thu ba: "); scanf("%d", &x3);
                soLonNhat(x1, x2, x3);
                break;
            }
            case 2:{
                printf("Ban da chon CN2: nam nhuan\n");
                int year;
                printf("Nhap nam: "); scanf("%d", &year);
                if(leapYear(year) == 1) printf("%d la nam nhuan\n", year);
                else printf("%d khong la nam nhuan\n", year);
                break;
            }
            case 3:{
                printf("Ban da chon CN3: Hoan vi\n");
                int a, b;
                printf("Nhap 2 so de thay doi\n");
                printf("a = "); scanf("%d", &a);
                printf("b = "); scanf("%d", &b);
                swap(&a, &b);
                printf("Sau khi doi a = %d, b = %d\n", a, b);
                break;
            }
            case 4:{
                printf("GoodBye!");
                break;
            }
        }
    }while (choice != 4);
    return 0;
}