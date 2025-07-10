//
// Created by Jayce Lee on 25. 7. 11.
//

//chapter 6 - exercise 1
//@기호가 나타날 때 까지 키보드 입력을 읽어들여 대문자는 소문자로, 소문자는 대문자로 변환하여 에코하는 프로그램을 작성하라.
//숫자는 에코에서 제외한다.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    while (true) {
        cout << "문자를 입력하세요 : " << flush;
        cin >> ch;

        if (ch == '@') {
            break;
        }

        if (islower(ch)) {
            ch = toupper(ch);
        }

        cout << "변환된 문자 : " << ch << "\n";
    }

    return 0;
}
