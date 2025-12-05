#include <stdio.h>

int main(){
    int n, i;
    printf("Nhap so phan tu cua mang: "); scanf("%d", &n);
    int mang[n];
    for ( i = 0; i < n; i++){
        printf("Nhap du lieu vao trong mang: ");
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    float tb;
    int count = 0;

    for (i = 0; i < n; i ++){
        if(mang[i] % 3 == 0){
            tong += mang[i];
            count ++;
        }
    }
    tb = tong/count; printf("trung binh la: %.2f", tb);

    int max , min;
    for (i = 0; i < n; i ++){
        if(mang[i] > max) max = mang[i];
    }
    printf("So lon nhat la: %d", max);

    for (i = 0; i < n; i ++){
        if(mang[i] > min) min = mang[i];
    }
    printf("So nho nhat la: %d", min);


    return 0;
}