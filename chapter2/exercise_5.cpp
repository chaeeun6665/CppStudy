//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연습 05.
//섭씨 온도를 매개변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수.
//메인에서 호출할 것.
//섭씨 온도로 입력할 것을 요구한다.

#include <iostream>
using namespace std;

float convert_celsius_to_fahrenheit(float celsius) {
    return celsius * (1.8) + 32.0;
}

int main() {
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";

    float celsius;
    cin >> celsius;

    cout << "섭씨 " << celsius << "도는 화씨로 " << convert_celsius_to_fahrenheit(celsius) << "도 입니다. \n";
}