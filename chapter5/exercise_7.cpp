//
// Created by Jayce Lee on 25. 7. 9.
//

#include <iostream>
#include <string>
using namespace std;

struct Car{
    string company_name;
    int made_year;
};

int main() {
    int car_count;
    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    cin >> car_count;

    Car * cars = new Car[car_count];

    for (int i = 0; i < car_count; i++) {
        cout << "자동차 #" << i + 1 << "\n";
        cout << "제작업체 : ";
        cin >> cars[i].company_name;
        cout << "제작년도 : ";
        cin >> cars[i].made_year;
    }

    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다. \n";
    for (int i = 0; i < car_count; i++) {
        cout << cars[i].made_year << "년형 " << cars[i].company_name << "\n";
    }

    delete[] cars;
    return 0;
}