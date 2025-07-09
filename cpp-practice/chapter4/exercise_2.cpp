//
// Created by Jayce Lee on 25. 7. 4.
//

//챕터4
//프로그래밍 연습 2

#include <iostream>

int main() {
    using namespace std;
    const int ArSize = 20;
    std::string name;
    std::string dessert;
    // char name[ArSize];
    // char dessert[ArSize];

    cout << "이름을 입력하십시오:\n";
    getline(cin, name);
    cout << "좋아하는 디저트를 입력하십시오:\n";
    getline(cin, dessert);
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다." << name << " 님!\n";

    return 0;

}
