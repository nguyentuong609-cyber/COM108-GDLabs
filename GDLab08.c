#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct SinhVien{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
}mangSV[50];

int main(){
//Nhap thong tin cua SV:
    int i, n;
    printf("Nhap so sinh vien moi them: "); scanf("%d", &n); getchar();
    
    for(i = 0; i < n; i ++){
        printf("Nhap ten cua SV: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';

        printf("Nhap Ma So Sinh Vien: ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0';

        printf("Nhap nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';

        printf("Nhap Diem trung binh cua SV: ");
        scanf("%f", mangSV[i].diemTB); getchar();
    }

//Xuat thong tin:
    for(i = 0; i < n; i ++){
        printf("Thong tin cua SV:\n");
        printf("Ten SV: %s\n",mangSV[i].tenSV);
        printf("MSSV: %s\n", mangSV[i].mssv);
        printf("Nganh hoc: %s\n", mangSV[i].nganhHoc);
        printf("Diem TB: %.2f\n", mangSV[i].diemTB);
    }

    return 0;
}