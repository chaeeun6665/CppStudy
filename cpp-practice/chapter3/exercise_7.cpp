//
// Created by Jayce Lee on 25. 7. 8.
//

// chapter 3-7
//휘발유 소비량을 유럽 스타일로 묻고, 미국 스타일로 변환하는 프로그램을 작성하라.
//100킬로미터는 62.14마일, 1갤런은 3.875리터

#include <iostream>
using namespace std;

int main() {
    const float HUNDRED_MILES = 62.14;
    const float ONE_GALLON_IN_LITER = 3.875;

    float oil_liter;

    cout << "휘발유 소비량을 입력하시오 (100 킬로미터 당 리터 수) : ";
    cin >> oil_liter;

    float oil_gallon = oil_liter / ONE_GALLON_IN_LITER;
    float oil_miles = HUNDRED_MILES / oil_gallon;

    cout << "미국 스타일 (마일/연료) : " << oil_miles << endl;

    return 0;
}