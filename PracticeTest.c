#include <stdio.h>
#include <string.h>

void menu();

void CN1();

void CN2();

void inputArray(int array[], int size);

void showInput(int array[], int size);

int checkPrime(int x);

void printPrime(int array[], int size);

void checkArray(int array[], int size, int num_check);

void sortArray(int array[], int size);


int main(){
    int choice;
    do {
        menu();
        if(scanf("%d", &choice) != 1){
            printf("Invalid please reenter: ");
            while(getchar() != '\n');
            continue;
        }
        while(getchar() != '\n');

        switch(choice){
            case 1:{
                printf("You have chosen ASM1.\n");
                CN1();
                break;
            }
            case 2:{
                printf("You have chosen ASM2.\n");
                CN2();
                break;
            }
            case 3:{
                printf("You have chosen ASM3.\n");
                int size, numb_check;
                printf("How many elements in the array: "); scanf("%d", &size);
                int array[size];
                inputArray(array, size);
                showInput(array, size);
                printf("\n--------\n");
                printPrime(array, size);
                printf("Insert number to check: "); scanf("%d", &numb_check);
                checkArray(array, size, numb_check);
                sortArray(array, size);
                showInput(array, size);
                break;
            }
            case 4:{
                printf("Exit.\n");
                break;
            }
            default:{
                printf("Invalid please reenter: ");
                break;
            }
        }
    }while(choice != 4);



    return 0;
}

void menu(){
    printf("\nWelcome!!!\n");
    printf("1. ASM 1.\n");
    printf("2. ASM 2.\n");
    printf("3. ASM 3.\n");
    printf("Exit\n");
    printf("Please choose a function (1-4): ");
}

void CN1(){
    int x;
    float input;
    printf("Insert number: "); scanf("%f", &input);

    if (input != (int)input){
        printf("Decimal numbers are not allowed.");
        return;
    }

    x = (int)input;

    int isPrime = 1;

    if(x <= 1) isPrime = 0;

    for(int i = 2; i < x; i ++){
        if(x % i == 0) {
            isPrime = 0;
            break;}
    }

    if(isPrime == 0)
        printf("%d is not a prime number.\n", x);
    else
        printf("%d is a Prime number.", x);
}

void CN2(){
    char str[50];
    char ch;
    int position = 0;

    printf("Insert string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Insert a char: ");
    scanf("%c", &ch); getchar();

    printf("\nYour String is: %s\n", str);
    printf("%c can be fount at: ", ch);

    for (int i = 0; str[i] != '\0'; i ++){
        if(str[i] == ch){
            printf("%d ", i);
            position = 1;
        }
    }
    if(!position){
        printf("None");
    }
    printf("\n");
}

void inputArray(int array[], int size){
    for(int i = 0; i < size; i ++){
        printf("\nArray [%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void showInput(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }
}

int checkPrime(int x){
    if(x <= 1) return 0;

    for(int i = 2; i < x; i ++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

void printPrime(int array[], int size){
    int found = 0;
    printf("Prime numbers are: ");
    for(int i = 0; i < size; i ++){
        if(checkPrime(array[i])){
            printf("%d ", array[i]);
            found = 1;
        }
    }
    if(!found){printf("None.\n");}
    
    printf("\n");
}

void checkArray(int array[], int size, int num_check){
    int found = 0;
    for(int i = 0; i < size; i ++){
        if(array[i] > num_check){
            printf("%d ", array[i]);
            found = 1;
        }
    }
    if(!found){printf("None.\n");}

    printf("\n");
}

void sortArray(int array[], int size){
    for(int i = 0; i < size; i ++){
        int swapped = 0;
        for(int j = 0; j < size - 1 - i; j ++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}
