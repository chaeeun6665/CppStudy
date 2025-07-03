//
// Created by Jayce Lee on 25. 7. 4.
//

//chapter 4 - exercise 3
//퍼스트 네임과 라스트 네임을 사용자에게 입력하도록 요청하고,
//라스트 네임, 콤마, 빈칸, 퍼스트 네임으로 이루어지는 제 3의 문자열을 구성하고, 저장하고, 출력하는 프로그램을 작성하라.
//char 형 배열과 cstring 헤더 파일이 제공하는 함수들을 사용하라.

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    char first_name[100];
    char last_name[100];

    cout << "퍼스트 네임(이름)을 입력하시오 : ";
    cin.getline(first_name, 100);
    cout << "라스트 네임 (성)을 입력하시오 : ";
    cin.getline(last_name, 100);

    //배열은 대입할 수 없는 타입

    char full_name[100];
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);

    cout << "하나의 문자열로 만들면 : "  << full_name << endl;
    return 0;


}
