//
// Created by Jayce Lee on 25. 7. 8.
//

//chapter 3
//exercise 1

//키를 정수형 센티미터 단위로 묻고, 그 값을 미터와 센티미터 단위로 변환하는 간단한 프로그램을 작성하라.
//입력해야 할 곳을 사용자에게 지시하기 위해 밑줄 문자를 사용하고, 환산 인수로 const 기호 상수를 사용하라.

#include <iostream>

using namespace std;

int main() {
    int height;
    const int one_meter_in_centimeter = 100;

    cout << "키를 입력하시오 : _____\b\b\b\b\b";
    cin >> height;

    cout << "미터 : " << float(height) / one_meter_in_centimeter;
    return 0;

}
