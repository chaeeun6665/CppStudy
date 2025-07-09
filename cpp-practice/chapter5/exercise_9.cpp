//
// Created by Jayce Lee on 25. 7. 9.
//
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) \n";

    string word;
    int word_count = 0;

    while (true) {
        cin >> word;
        if ("done" == word) break;

        word_count += 1;
    }

    cout << "총 " << word_count << " 단어가 입력되었습니다.";
    return 0;
}