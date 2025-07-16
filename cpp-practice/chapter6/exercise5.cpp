//
// Created by Jayce Lee on 25. 7. 17.
//

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char input[100];

    while (true) {
        cout << "소득을 입력하세요 :";
        cin >> input; // 10000

        // 음수 기호(-) 허용을 위해 첫 글자부터 검사
        int start = 0;
        if (input[0] == '-') {
            start = 1;
        }

        bool is_number = true;
        long income = 0;
        for (int i = start; input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                is_number = false;
                break;
            }
            income = income * 10 + (input[i] - '0');
        }

        bool is_negative = false;
        if (input[0] == '-') {
            is_negative = true;
        }

        if (income < 0 || is_number == false || is_negative == true) {
            cout << "음수 또는 잘못된 문자를 입력하셨습니다. \n";
            break;
        }

        unsigned int prices[] = {5000, 10000, 20000, 35000};
        unsigned int percentage[] = {0, 10, 15, 20};

        const int array_length = sizeof(prices) / sizeof(prices[0]);

        double tax = 0;

        for (int i = 0; i < array_length; i++) {
            if (income >= prices[i]) {
                tax += double(prices[i] * percentage[i]) / 100;
                income -= prices[i];
            }
            else {
                tax += double(income * percentage[i]) / 100;
            }
        }

        cout << "총 내야하는 세금 :  " << tax << endl;
    }
}