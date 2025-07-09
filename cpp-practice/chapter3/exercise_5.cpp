//
// Created by Jayce Lee on 25. 7. 8.
//

// chapter 3 - exercise 5

//세계 인구와 미국의 현재 인구수를 요구하는 프로그램
//작성한 정보를 long long 변수에 저장하고, 전 세계 인구에서 미국 인구수가 차지하는 비중을 나타내라.

#include <iostream>
using namespace std;

int main() {
    long long world_population;
    long long america_population;

    cout << "세계 인구 수를 입력하시오 : ";
    cin >> world_population;
    cout << "미국 인구 수를 입력하시오 : ";
    cin >> america_population;

    double ratio = (double)america_population / (double)world_population * 100;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << ratio << "%이다. " << endl;

    return 0;
}
