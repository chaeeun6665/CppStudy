//
// Created by Jayce Lee on 25. 7. 9.
//

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) \n";

    char * ch = new char[10];
    int word_count = 0;

    while (true) {
        cin >> ch;
        if (strcmp(ch, "done") == 0) break;

        word_count += 1;
    }

    cout << "총 " << word_count << " 단어가 입력되었습니다.";

    delete[] ch;
    return 0;
}