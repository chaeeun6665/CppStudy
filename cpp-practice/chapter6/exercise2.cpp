//
// Created by Jayce Lee on 25. 7. 11.
//

// 6-2
// double 형의 배열에 기부금을 10개까지 읽어들이는 프로그램을 작성하라
// array 가능
// 10개가 입력되기 전에 수가 아닌 것이 입력되면 프로그램이 종료된다.
// 입력된 기부금들의 평균, 평균보다 큰 기부금이 배열에 몇 개 들어있는지 보고한다.

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    const int ARR_SIZE = 10;
    array <double, ARR_SIZE> arr;

    int count = ARR_SIZE;

    cout << "기부금을 입력하세요 : ";
    for (int i = 0; i < ARR_SIZE; i++) {
        cin >> arr[i];

        if (cin.fail()) {
            count = i;
            cout << "프로그램 종료\n";
            break;
        }
    }

    cout << "총 입력된 상금 수 : " << count << "\n";

    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }

    double average = sum / count;
    cout << "평균 기부금  : " << average << "\n";

    int count_bigger_than_avg = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > average) count_bigger_than_avg ++;
    }

    cout << "평균보다 큰 기부금의 개수 : " << count_bigger_than_avg << "\n";
    return 0;

}
