//
// Created by Jayce Lee on 25. 7. 17.
//

//메뉴 방식으로 운영되는 샘플 프로그램을 작성하라.
//프로그램은 하나의 문자를 각각의 레이블로 사용하는 4개의 선택 사항을 제시하는 메뉴를 출력한다.
//사용자가 4가지 선택 사항에 해당하지 않는 다른 문자를 입력할 경우, 맞게 입력할 때 까지 재입력을 요구한다.
//switch 구문을 사용하여 사용자의 선택에 해당하는 간단한 행동을 처리한다.

#include <iostream>
using namespace std;

int main() {
    char answer;
    cout << "다음 선택 사항 중에서 하나를 선택하십시오.  (끝내려면 q)\n";
    cout << "c) camera\tp) pianist \nt) tree\tg) game\n";

    while (true) {
        cin >> answer;
        if (answer == 'q') break;

        switch (answer) {
            case 'c' :
                cout << "카메라로 사진을 찍습니다. \n";
                break;
            case 'p' :
                cout << "피아니스트 조성진은 유명합니다. \n";
                break;
            case 't' :
                cout << "단풍나무는 잎이 별처럼 생겼습니다. \n";
                break;
            case 'g' :
                cout << "나는 게임 개발자입니다. \n";
                break;
            default :
                cout << "잘못 입력하셨습니다. 다시 입력하십시오 : \n";
                break;
        }
    }
}