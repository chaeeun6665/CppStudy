//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연습 02.
//거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 환산하는 프로그램을 작성하시오.
//1마일을 1.60934km

#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    const double MILE_IN_KM = 1.60934;

    double distance_in_miles;

    cout << "거리를 입력하시오 (마일 단위) : \n";
    cin >> distance_in_miles;

    const double distance_in_km = distance_in_miles * MILE_IN_KM;

    cout << "킬로미터로 환산하면, " << distance_in_km << " km 입니다.\n";

}