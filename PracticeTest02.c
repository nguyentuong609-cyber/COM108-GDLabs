#include <stdio.h>
#include <string.h>


typedef struct {
    char hoTenSv [30];
    char maSV [10];
    int diemTB;
}SinhVien;

void ASM1();

void array_Input(int array[], int size);

void array_Output(int array[], int size);

void even_array_Output(int array[], int size);

void studentInput(SinhVien *student);

void studentOutput(SinhVien student);

void studentSorting(SinhVien studentArray[], int size);

int main(){
    
    // int size;
    // printf("Enter the size of your array: ");
    // scanf("%d", &size); getchar();
    // int Array[size];
    // array_Input(Array, size);
    // array_Output(Array, size);
    // even_array_Output(Array, size);

    int size = 3;
    SinhVien studentArray[size];

    for(int i = 0; i < size; i++){
        studentInput(&studentArray[i]);
    }
    
    for(int i = 0; i < size; i++){
        studentOutput(studentArray[i]);
    }

    printf("\n------\n");
    printf("Sorting descending.\n");
    for(int i = 0; i < size; i++){
        studentSorting(studentArray, size);
    }
    for(int i = 0; i < size; i++){
        studentOutput(studentArray[i]);
    }

    return 0;
}


void menu(){
    printf("------\n");
    printf("WELCOME! Please pick a function below:\n");
    printf("1. ASM1.\n");
    printf("2. ASM2.\n");
    printf("3. ASM3.\n");
    printf("EXIT.\n");
}

void ASM1(){
    printf("Please insert a string: ");
    char string[50];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    int count = 0; //FPT Polytechnic should be 15
    for(int i = 0; string[i] != '\0'; i++){
        count ++;
    }

    printf("In %s there are %d.\n", string, count);
}

void array_Input(int array[], int size){
    for(int i = 0; i < size; i ++){
        printf("Array [%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void array_Output(int array[], int size){
    printf("\nHere are your arrays: \n");
    for(int i = 0; i < size; i++){
        printf("Array [%d]: %d\n", i, array[i]);
    }
}

void even_array_Output(int array[], int size){
    int found = 0;
    printf("\nEven numbers array only: ");
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            found = 1;
            printf("%d ", array[i]);
        }
    }
    if(!found) printf("None.\n");
    else printf("\n");
}

void studentInput(SinhVien *student){
    printf("\nInsert student name: ");
    fgets(student->hoTenSv, sizeof(student->hoTenSv), stdin);
    student->hoTenSv[strcspn(student->hoTenSv, "\n")] = '\0';

    printf("Insert student's code: ");
    fgets(student->maSV, sizeof(student->maSV), stdin);
    student->maSV[strcspn(student->maSV, "\n")] = '\0';

    printf("Insert student's grade: ");
    scanf("%d", &student->diemTB); getchar();
}

void studentOutput(SinhVien student){
    printf("\nStudent info:\n");
    printf("Studetn 'name: %s\n", student.hoTenSv);
    printf("Student's code: %s\n", student.maSV);
    printf("Student's grade: %d\n", student.diemTB);
}

void studentSorting(SinhVien studentArray[], int size){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = i + 1; j < size; j++){
            if(studentArray[i].diemTB < studentArray[j].diemTB){
                SinhVien studenttemp = studentArray[i];
                studentArray[i] = studentArray[j];
                studentArray[j] = studenttemp;
            }
        }
    }
}

