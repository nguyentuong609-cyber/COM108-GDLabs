#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
} SinhVien;


void getStudentInfo(SinhVien *student);

void printStudentInfo(SinhVien student);

int main(){
//Nhap thong tin cua SV:
    SinhVien mangSV[50];
    int i, n, j;
    printf("Nhap so sinh vien moi them: "); scanf("%d", &n); getchar();
    
    for(i = 0; i < n; i ++){
        getStudentInfo(&mangSV[i]);
    }

//Xuat thong tin:
    for(i = 0; i < n; i ++){
        printStudentInfo(mangSV[i]);
    }

//Sap xep thong tin theo diem tang dan:
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(mangSV[i].diemTB > mangSV[j].diemTB){
                SinhVien svtemp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = svtemp;
            }
        }
    }
    printf("Danh sach moi sau khi sap xep:\n");
    for(i = 0; i < n; i++){
        printStudentInfo(mangSV[i]);
    }
    
//Tim kien Sinh Vien bang MSSV:
    char mssv [50];
    printf("Nhap ma so sinh vien muon tim: ");
    fgets(mssv, sizeof(mssv), stdin);

    for (i = 0; i < n; i++){
        if(mssv == mangSV[i].mssv){}
        printStudentInfo(mangSV[i]);
    }
    
    return 0;
}

void getStudentInfo(SinhVien *student){
    printf("Nhap ten cua SV: ");
    fgets(student->tenSV, sizeof(student->tenSV), stdin);
    student->tenSV[strcspn(student->tenSV, "\n")] = '\0';

    printf("Nhap Ma So Sinh Vien: ");
    fgets(student->mssv, sizeof(student->mssv), stdin);
    student->mssv[strcspn(student->mssv, "\n")] = '\0';

    printf("Nhap nganh hoc: ");
    fgets(student->nganhHoc, sizeof(student->nganhHoc), stdin);
    student->nganhHoc[strcspn(student->nganhHoc, "\n")] = '\0';

    printf("Nhap Diem trung binh cua SV: ");
    scanf("%f", &student->diemTB); getchar();
}

void printStudentInfo(SinhVien student){
    printf("Thong tin cua SV:\n");
    printf("Ten SV: %s\n",student.tenSV);
    printf("MSSV: %s\n", student.mssv);
    printf("Nganh hoc: %s\n", student.nganhHoc);
    printf("Diem TB: %.2f\n", student.diemTB);
}
