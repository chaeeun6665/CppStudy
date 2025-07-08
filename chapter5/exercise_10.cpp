//
// Created by Jayce Lee on 25. 7. 9.
//

#include <iostream>
using namespace std;

int main() {
    int line_count;
    cout << "출력할 행 수를 입력하십시오 : ";
    cin >> line_count;

    for (int i = 1; i <= line_count; i++) {
        for (int j = 1; j <= line_count - i; j++) {
            cout << ".";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}