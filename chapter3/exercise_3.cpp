//
// Created by Jayce Lee on 25. 7. 8.
//

//chapter 3 - exercise 3
//위도를 도각, 분각, 초각 단위로 요청하여, 10진수 형식으로 출력하는 프로그램을 작성하라.
//1분각은 60초각이다.

#include <iostream>
using namespace std;

int main () {
    int let_degree, let_minute, let_second;
    const float one_minute_in_seconds = 60;
    const float one_degree_in_minutes = 60;

    cout << "위도를 도, 분, 초 단위로 입력하시오 :\n";
    cout << "먼저, 도각을 입력하시오 : ";
    cin >> let_degree;
    cout << "다음에, 분각을 입력하시오 : ";
    cin >> let_minute;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> let_second;

    float result = let_degree + ((float)let_minute / one_minute_in_seconds)
                 + ((float)let_second / one_degree_in_minutes / one_minute_in_seconds);

    cout << let_degree << "도, " << let_minute << "분, " << let_second << "초 = " << result << "도" << endl;

    return 0;
}