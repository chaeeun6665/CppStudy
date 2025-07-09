//
// Created by Jayce Lee on 25. 7. 8.
//

//chapter 3 - exercise 2

//키를 피트와 인치 단위로 묻고, 체중을 파운드 단위로 묻는 프로그램을 작성하라.
//정보를 세 개의 변수를 사용하여 저장
//프로그램은 BMI를 보고해야 한다.
//여러가지 환산 인수를 나타내기 위해 기호 상수를 사용한다.

#include <iostream>
using namespace std;

int main() {
    const int feet_to_inch = 12;
    const float inch_to_meter = 2.54;
    const float pound_to_kilo = 2.2;

    float height_feet;
    float weight_pound;

    cout << "키를 피트 단위로 입력하세요 : ";
    cin >> height_feet;
    cout << "체중을 파운드 단위로 입력하세요 : ";
    cin >> weight_pound;

    float height_inch = height_feet * feet_to_inch;
    float height_meter = height_inch * inch_to_meter / 100.0;

    float weight_kilo = weight_pound / pound_to_kilo;

    float bmi = weight_kilo / (height_meter * height_meter);

    cout << "BMI 값 : " << bmi << endl;

    return 0;
}