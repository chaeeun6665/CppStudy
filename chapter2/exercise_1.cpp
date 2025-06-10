//
// Created by Jayce Lee on 25. 6. 10.
//

//프로그래밍 연습 01.
//이름과 주소를 출력하는 C++ 프로그램을 작성하시오.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string address;

	cout << "이름과 주소를 입력하세요." << endl;
	cout << "이름 : ";
	// cin >> name;
	getline(cin, name);
	cout << "주소 : ";
	getline(cin, address);
	// cin >> address;

	cout << "입력된 이름은 " << name << ", 주소는 " << address << endl;
}