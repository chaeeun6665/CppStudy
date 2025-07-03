//
// Created by Jayce Lee on 25. 7. 4.
//

//Chapter 4 - exercise 5
//CandyBar 구조체는 세 개의 멤버를 가지고 있다.
//첫번째 멤버는 캔디바의 상표명, 두번째는 중량(소수부 있음), 세번째는 캔디바에 함유된 칼로리(정수값)
//snack이라는 구조체 변수를 만들고, 각각 초기화하라.
//초기화는 선언할 때 함께 하라.
//마지막으로 변수의 내용을 출력하라.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    struct CandyBar {
        string brand_name;
        float weight;
        int calories;
    };

    CandyBar snack = {"Mocha Munch",2.3,350};

    //현재 C++14를 사용하고 있는데 리스트 초기화가 안된다.

    cout << "출력 결과 : \n";
    cout << snack.brand_name << "\n";
    cout << snack.weight << "\n";
    cout << snack.calories << "\n";
    return 0;

}