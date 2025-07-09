//
// Created by Jayce Lee on 25. 7. 9.
//

// chapter 5-1

// 사용자에게 2개의 정수를 입력하라고 요구
// 입력한 두 정수를 포함하여 그 사이에 있는 모든 정수들의 합을 계산하고 출력한다.
// 작은 정수를 먼저 입력한다.

#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;
    cout << "Enter two integers: ";
    cin >> num_1 >> num_2;

    int sum = 0;

    for (int i = num_1; i <= num_2; i++) {
        sum += i;
    }

    cout << "Result : " << sum << endl;
    return 0;
}