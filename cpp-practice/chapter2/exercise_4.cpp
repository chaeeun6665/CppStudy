//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연습 04.
//사용자에게 본인의 이름을 입력하도록 요구하는 프로그램 작성.
//그리고 사용자의 나이를 월 수로 나타내도록 한다.

#include <iostream>

int main(int argc, char const *argv[]) {
    const int ONE_YEAR_IN_MONTHS = 12;
    using namespace std;

    cout << "Enter your age : ";

    int age;
    cin >> age;

    int month = age * ONE_YEAR_IN_MONTHS;

    cout << "You are " << month << " months old ! ";
}
