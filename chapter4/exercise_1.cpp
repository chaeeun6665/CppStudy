//
// Created by Jayce Lee on 25. 7. 4.
//

//챕터 4
//프로그래밍 연습 1

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    string name;
    string surname;
    char score;
    int age;

    cout << "영문 퍼스트 네임 (이름) : ";
    getline(cin,name);
    cout << "영문 라스트 네임 (성) : ";
    getline(cin, surname);
    cout << "학생이 원하는 학점 : ";
    cin >> score;
    cout << "나이 : ";
    cin >> age;

    cout << "성명 : " << name << "," << surname << "\n";
    cout << "학점 : " << char(score + 1) << "\n";
    cout << "나이 : " << age << "\n";
    return 0;



}
