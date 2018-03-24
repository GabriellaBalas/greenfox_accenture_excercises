#include <iostream>
using namespace std;

float numerator = 0;
float denominator = 0;
float odd_average;
int evens = 0;

void excercise1(int numbers[], int size) {
    for (int a=0; a<size; a++) {
        if (numbers[a]%2 == 1 || numbers[a]%2 == -1) {
            numerator+=numbers[a];
            denominator++;
        }
        else {
            evens++;
        }
    }
    if (evens != size) {
        odd_average = numerator/denominator;
        cout<<"the average of odd numbers: "<<odd_average<<endl;
    }
    else {
        cout<<"no odd numbers \n";
    }
}
