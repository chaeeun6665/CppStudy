//
// Created by Jayce Lee on 25. 7. 8.
//

// chapter 3 - 5

// 주행한 거리를 킬로미터 단위로, 소비한 휘발유의 양을 리터 단위로 묻고, 100킬로미터당 리터 수를 보고하는 프로그램을 작성하라.

#include <iostream>
using namespace std;

int main() {
    float distance_kilo, oil_liter;
    cout << "주행한 거리를 킬로미터 단위로 입력하세요 : ";
    cin >> distance_kilo;
    cout << "소비한 휘발유의 양을 리터 단위로 입력하세요 : ";
    cin >> oil_liter;

    cout << "100 km 당 리터 수는 : " << oil_liter / distance_kilo * 100 << endl;
    return 0;
}