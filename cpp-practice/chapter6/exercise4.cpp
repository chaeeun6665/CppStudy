//
// Created by Jayce Lee on 25. 7. 17.
//

//회원 명부를 실명으로, 직함으로, BOP 아이디로, 또는 가입 회원이 지정한 방식에 따라 열람하는 프로그램을 작성하라.
//구조체 형식은 정해져있음.

#include <iostream>
using namespace std;

const int strsize = 100;

struct bop {
    char fullname[strsize]; //실명
    char title[strsize]; //직함
    char bopname[strsize]; //bop 아이디
    int preference; // 0 = fullname, 1 = title, 2 = preference;
};

int main() {
    const int arr_size = 5;
    bop members[arr_size];

    for (int i = 0; i < arr_size; i++) {
        cout << "멤버 다섯명의 정보를 입력하세요.\n";
        cout << "실명 : ";
        cin.getline(members[i].fullname, strsize);

        cout << "직함 : ";
        cin.getline(members[i].title, strsize);

        cout << "bop 아이디 : ";
        cin.getline(members[i].bopname, strsize);

        cout << "선호 번호 (0,1,2) : ";
        cin >> members[i].preference;
        while (!(cin >> members[i].preference) || members[i].preference < 0 || members[i].preference > 2) {
            cout << "잘못된 입력입니다. 0~2 사이의 숫자를 입력하세요: ";
            cin.clear();                  // failbit 해제
            cin.ignore(100, '\n');        // 버퍼 비우기
        }
        cin.ignore(100, '\n');
    }

    //cin : 한 단어만 읽고, 나머지는 버퍼에 남김
    //cin.getline : 한 줄을 끝까지 읽고, \n도 제거함

    //혼용해서 많이 쓰는지...

    // 확인용 출력
    cout << "\n입력된 정보:\n";
    for (int i = 0; i < arr_size; i++) {
        cout << "[" << i + 1 << "] "
             << "fullname: " << members[i].fullname << ", "
             << "title: " << members[i].title << ", "
             << "bopname: " << members[i].bopname << ", "
             << "preference: " << members[i].preference << endl;
    }

    cout << "Benevolent Order of Programmers\n";
    cout << "a. 실명으로 열람 \t b. 직함으로 열람\n";
    cout << "c. BOP 아이디로 열람 \t d. 회원이 지정한 것으로 열람\n";
    cout << "q. 종료 \n";



    // char answer;
    // while (true) {
    //     cout << "원하는 것을 선택하십시오 : ";
    //     cin >> answer;
    //
    //     if (answer == 'q') {
    //         cout << "프로그램을 종료합니다.";
    //         break;
    //     }
    //
    //     switch (answer) {
    //         case 'a' : {
    //             for (int i = 0; i < arr_size; i++) {
    //                 cout << members[i].fullname;
    //             }
    //         }
    //             break;
    //         case 'b' : {
    //             for (int i = 0; i < arr_size; i++) {
    //                 cout << members[i].title;
    //             }
    //         }
    //             break;
    //         case 'c' : {
    //             for (int i = 0; i < arr_size; i++) {
    //                 cout << members[i].bopname;
    //             }
    //         }
    //             break;
    //         case 'd' : {
    //             for (int i = 0; i < arr_size; i++) {
    //                 int type = members[i].preference;
    //                 switch (type) {
    //                     case 0:
    //                         cout << members[i].fullname;
    //                         break;
    //                     case 1:
    //                         cout << members[i].title;
    //                         break;
    //                     case 2:
    //                         cout << members[i].bopname;
    //                         break;
    //                 }
    //             }
    //         }
    //         default:
    //             break;
    //     }
    // }
}