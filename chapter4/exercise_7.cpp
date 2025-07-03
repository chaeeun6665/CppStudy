//
// Created by Jayce Lee on 25. 7. 4.
//

//chapter 4 - exercise 7

//TCL 사는 피자 분석 서비스를 대행한다.
// 피자 회사의 이름, 피자의 지름, 중량을 저장할 수 있는 구조체 템플릿을 설계하고, 그 구조체형의 변수를 사용하는 프로그램을 자성하라.

#include <iostream>

using namespace std;

int main() {
    struct Pizza {
        char company_name[30];
        float diameter;
        float weight;
    };

    Pizza pizza;

    cout << "피자 회사 이름 :  ";
    cin.getline(pizza.company_name, 30);
    cout << "피자 지름 : ";
    cin >> pizza.diameter;
    cout << "피자 중량 : ";
    cin >> pizza.weight;

    cout << "저장 내용 : ";
    cout << pizza.company_name << ", " << pizza.diameter <<", " << pizza.weight << "\n";

}