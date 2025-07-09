//
// Created by Jayce Lee on 25. 6. 11.
//

//프로그래밍 연습 03.
//실행 결과가 다음과 같은 프로그램을 작성하시오.
//Three blind mice
//Three blind mice
//See how they run
//See how they run

//main() 함수 포함해서 3개의 사용자 정의 함수 사용해야 할것
//앞의 두 행은 함수 하나를 두 번 호출하여 출력.
//나머지 두 행도 다른 하나의 함수를 두 번 호출하여 출력.

#include <iostream>
using namespace std;

void print_first_sentence() {
    cout << "Three blind mice" << endl;
}

void print_second_sentence() {
    cout << "See how they run" << endl;
}

int main(int argc, char const *argv[]) {
    print_first_sentence();
    print_first_sentence();
    print_second_sentence();
    print_second_sentence();
}