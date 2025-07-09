//
// Created by Jayce Lee on 25. 7. 9.
//

// chapter 5 - exercise 4

//투자 가치 비교하는 프로그램

#include <iostream>
using namespace std;

int main() {
    const float interest_a = 0.1;
    const float interest_b = 0.05;

    const int principal_a = 10000 * interest_a;
    float principal_b = 10000;

    int total_price_a = 10000;

    int year = 0;

    while (true) {
        year++;
        total_price_a += principal_a;
        principal_b += principal_b * interest_b;

        if (principal_b > total_price_a) {
            cout << year << "년이 지나면 B의 가치가 A의 가치를 능가합니다. \n";
            cout << "각자의 투자 가치는 " << total_price_a << ", " << (int) principal_b << " 입니다.";

            break;
        }
    }

    return 0;
}