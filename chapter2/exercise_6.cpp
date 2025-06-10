//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연슴 06.
//거리를 매개변수로 전달받아 천문 단위로 환산하여 리턴하는 사용자 정의 함수 생성.
//main에서 호출할 것.
//광년 단위로 입력받을 것.

#include <iostream>
using namespace std;

const double ASTRONOMICAL_UNIT = 63240;

double convert_light_year_to_au(double light_year) {
    const double astronomical_year = light_year * ASTRONOMICAL_UNIT;

    return astronomical_year;
}

int main(int argc, char const *argv[]) {
    cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";

    double light_year;
    cin >> light_year;

    cout << light_year << " 광년은 " << convert_light_year_to_au(light_year) << " 천문 단위입니다. \n";
}