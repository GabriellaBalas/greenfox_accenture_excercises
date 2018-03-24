#include <iostream>
#include <string>
using namespace std;

int excercise2(string text) {
    char array[100];
    int numb[100];
    int count = 1;

    int length = text.length();

    for (int i=1; i<length; i++) {
        if (text[i] == text[0]) {
            count++;
        }
    }

    for (int i=0; i<length; i++) {
        array[i] = text [i];
        numb[i] = array[i];
        if (numb[i] >= 97 && numb[i] <= 122) {
            numb[i] = numb[i] + count;
        }
        if (numb[i] >= 65 && numb[i] <= 90) {
            numb[i] = numb[i] + 32 + count;
        }
        if (numb[i] > 122) {
            numb[i] = numb[i] - 26;
        }
        array[i] = numb[i];

        cout << array[i];
    }
    return 0;
}


int main() {
    string test = "White dogz";
    excercise2(test);
    
    return 0;
}
