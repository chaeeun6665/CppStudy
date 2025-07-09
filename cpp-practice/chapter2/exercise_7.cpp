//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연슴 07.
//시간 값과 분 값의 입력을 사용자에게 요청하는 프로그램을 작성하라.
//main()함수는 이 두 값을 void형 함수에 전달한다.

#include <iostream>
using namespace std;

void make_time(const int hour, const int minute) {
    cout << "시각: " << hour << ":" << minute << endl;
}

int main(int argc, char const *argv[]) {
    int hour, minute;
    cout << "시간 값을 입력하시오: ";
    cin >> hour;
    cout << "분 값을 입력하시오: ";
    cin >> minute;

    make_time(hour, minute);
}