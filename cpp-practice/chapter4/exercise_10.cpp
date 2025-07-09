//
// Created by Jayce Lee on 25. 7. 4.
//

//chapter 4 - exercise 10

#include <iostream>

using namespace std;

int main() {
    array<int, 3> results;  // <타입, 크기>

    for (int i = 0; i < results.size(); ++i) {
        cout << "달리기 결과를 입력하세요 : ";
        cin >> results[i];
    }

    cout << "입력 횟수는 : " << results.size() << "번 입니다.\n";
    cout << "평균은 : " << (results[0] + results[1] + results[2]) / results.size() << "초 입니다.";

    return 0;
}