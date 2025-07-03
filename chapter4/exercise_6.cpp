//
// Created by Jayce Lee on 25. 7. 4.
//

//chapter 4 - exercise 6
//CandyBar 구조체를 원소로 가지는 배열을 만들고, 그 배열의 구조체 원소들을 원하는 값으로 초기화 한 다음
//구조체의 내용을 출력하라.

#include <iostream>
#include <string>

using namespace std;

int main() {

    struct CandyBar {
        string brand_name;
        float weight;
        int calories;
    };

    CandyBar array[1];

    array[0].brand_name = "Jack";
    array[0].weight = 2.5;
    array[0].calories = 10;
    cout << array[0].brand_name << endl;
    cout << array[0].weight << endl;
    cout << array[0].calories << endl;

    return 0;
}