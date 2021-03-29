#include<iostream>
#include<string>
using namespace std; //std 생략 

int main()
{
	int mon1, mon2, mon3; // 과일 가격 선언
	int num1, num2, num3; // 과일 갯수 선언
	int sum; // 총 합 선언

	cout << "이름을 입력하세요: ";
	string name; // 크기 제약을 없애기 위해
	getline(std::cin, name); // 공백을 포함한 문자열을 입력 받기 위해
	cout << "반갑습니다. " << name << "님\n"; // \n: 줄바꿈  

	cout << "apple의 가격은 얼마입니까?";
	cin >> mon1;

	cout << "banana의 가격은 얼마입니까?";
	cin >> mon2;

	cout << "orange의 가격은 얼마입니까?";
	cin >> mon3;

	cout << "apple은 몇 개 있습니까?";
	cin >> num1;

	cout << "banana는 몇 개 있습니까?";
	cin >> num2;

	cout << "orange는 몇 개 있습니까?";
	cin >> num3;

	sum = (mon1 * num1) + (mon2 * num2) + (mon3 * num3) - 500; //총 합 계산
	cout << "총 " << sum << "입니다"; 
}