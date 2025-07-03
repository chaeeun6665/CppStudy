//
// Created by Jayce Lee on 25. 7. 4.
//
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    struct Pizza {
        char company_name[30];
        float diameter;
        float weight;
    };

    Pizza *pizza = new Pizza;

    cout << "피자 회사 이름 :  ";
    cin.getline(pizza -> company_name, 30);
    cout << "피자 지름 : ";
    cin >> pizza -> diameter;
    cout << "피자 중량 : ";
    cin >> pizza -> weight;

    cout << "저장 내용 : ";
    cout << pizza->company_name << ", " << pizza->diameter <<", " << pizza->weight << "\n";
}
