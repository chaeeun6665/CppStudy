//
// Created by Jayce Lee on 25. 7. 4.
//

//퍼스트 네임과 라스트 네임을 사용자에게 입력하도록 요청하고
//라스트 네임, 콤마, 빈칸, 퍼스트 네임으로 이루어지는 제 3의 문자열을 구성하고, 저장하고 출력하는 프로그램을 작성하라.
//string 객체와 string 헤더 파일이 제공하는 함수를 사용하라.

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    string first_name;
    string last_name;
    cout << "퍼스트 네임 (이름) 을 입력하십시오: ";
    getline(cin, first_name);
    cout << "라스트 네임 (성) 을 입력하십시오: ";
    getline(cin, last_name);

    const string full_name = first_name + ", " + last_name;
    cout << "하나의 문자열로 만들면 : " << full_name << endl;

}
