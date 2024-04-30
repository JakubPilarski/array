
#include <iostream>
#define SIZE 10

void  enterValue(int *array){
    printf("Input values to array:\n");
    for (int i=0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}


void printArray(int array[]) {
    for (int i=0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i )
    {
        if(array[i] > max) max = array[i];
    }
    return max;
}
int findMiniumValue(int array[]){
    int min = array[0];
    for (int i = 0; i < SIZE; ++i )
    {
        if(array[i] < min) min = array[i];
    }
    return min;
}
float calculateAverage(int array[]){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i ) {
        sum = sum + array[i];
    }
    float avg = (float)sum / SIZE;
    return avg;
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};

    enterValue(array);


    printArray(array);


    int max = findMaximumValue(array);
    printf("maxmium value = %d\n",max);


    int min = findMiniumValue(array);
    printf("minium value = %d\n",min);

    float avg= calculateAverage(array);
    printf("Average valute = %f\n", avg);

    return 0;
}
