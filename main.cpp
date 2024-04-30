
#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include "array.h"
FILE * fptr;
void menu() {
    printf("1- Intput Values\n");
    printf("2- Print Array\n");
    printf("3- Find Maximum Value\n");
    printf("4- Find Minium Value\n");
    printf("5- Calculate Average\n");
    printf("6- Enter to fail\n");
    printf("7- Read  fail\n");
    printf("8- Stop Program\n");
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int option = 0;
    int min;
    int max;
    float avg;
    while(option!=8) {
        menu();
        printf("choice = ");
        scanf("%d", &option);
        switch(option){
            case 1 :enterValue(array);
                break;
            case 2 :
                printArray(array);
                break;
            case 3 :
                max = findMaximumValue(array);
                printf("maxmium value = %d\n",max);
                break;
            case 4 :
                min = findMiniumValue(array);
                printf("minium value = %d\n",min);
                break;
            case 5:
                avg= calculateAverage(array);
                printf("Average valute = %f\n", avg);
            case 6 :
                fptr = fopen("letters.txt", "w+");
                if (fptr == 0)
                {
                    exit(1);
                }
                for (int u = 0; u < SIZE ; ++u)
                {
                    fputc(array[u], fptr);
                }

                fclose(fptr);

                puts("Zapisano tablice");
                break;
            case 7 :
                fptr = fopen("letters.txt", "r+");
                fseek(fptr, 0, SEEK_SET);
                printf("Oto zawartosc pliku:\n");
                for (int i = 0; i < SIZE; i++)
                {
                    array [i] = fgetc(fptr);
                    fseek(fptr, 0, SEEK_CUR);
                    printf("%d", array [i]);
                }
                printf("\n");
                fclose(fptr);
                break;
            case 8 :
                break;



        }
    }

}