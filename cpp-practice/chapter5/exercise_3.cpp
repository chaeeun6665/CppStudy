//
// Created by Jayce Lee on 25. 7. 9.
//

//5-3
//사용자에게 수를 입력하라고 요구하는 프로그램을 작성하라.
//수를 입력할 때 마다 프로그램은 그 때까지 입력된 수들의 누계를 출력해야 한다.
//사용자가 0을 입력하면 프로그램은 종료된다.

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    while (true) {
        std::cout << "Enter an integer: ";
        std::cin >> number;
        if (number == 0) {
            cout << "Program terminated." << endl;
            break;
        }

        sum += number;
    }

    cout << "The sum of the numbers is " << sum << endl;
    return 0;
}