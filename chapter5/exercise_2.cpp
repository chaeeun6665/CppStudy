//
// Created by Jayce Lee on 25. 7. 9.
//

//chapter 5-2
//listing 5.4 프로그램을 array 객체와 long double 형을 사용하여 수정하라.

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 101;

int main() {
    array<long double, ARRAY_SIZE> factorials;
    factorials[1] = factorials[0] = 1;
    for (int i = 2; i < ARRAY_SIZE; ++i) {
        factorials[i] = factorials[i - 1] * i;
    }
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        std::cout << i << " ! = " << factorials[i] << std::endl;
    }

    return 0;
}