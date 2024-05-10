
#define SIZE 10
#include <iostream>
using namespace std;
#include "array.h"
void menu() {
    cout << "1- Intput Values" << endl;
    cout << "2- Print Array" << endl;
    cout << "3- Find Maximum Value" << endl;
    cout << "4- Find Minium Value" << endl;
    cout << "5- Calculate Average" << endl;
    cout << "6- Enter to fail" << endl;
    cout << "7- Read  fail"<< endl;
    cout << "8- Stop Program" << endl;
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int option = 0;
    int min;
    int max;
    float avg;
    while(option!=8) {
        menu();
        cout<<"choice = ";
        cin>>option;
        switch(option){
            case 1 :enterValue(array);
                break;
            case 2 :
                printArray(array);
                break;
            case 3 :
                max = findMaximumValue(array);
                cout << "maxmium value = " << max << endl;
                break;
            case 4 :
                min = findMiniumValue(array);
                cout << "minium value = " << min << endl;
                break;
            case 5:
                avg= calculateAverage(array);
                cout << "Average valute = " << avg << endl;
            case 6 :
                fileenter(array);
                cout<<"Zapisano tablice"<< endl;
                break;
            case 7 :
          readFile(array);
                break;
            case 8 :
                break;



        }
    }

}