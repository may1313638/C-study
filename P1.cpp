#include<iostream>
#include<string>
using namespace std; //std ���� 

int main()
{
	int mon1, mon2, mon3; // ���� ���� ����
	int num1, num2, num3; // ���� ���� ����
	int sum; // �� �� ����

	cout << "�̸��� �Է��ϼ���: ";
	string name; // ũ�� ������ ���ֱ� ����
	getline(std::cin, name); // ������ ������ ���ڿ��� �Է� �ޱ� ����
	cout << "�ݰ����ϴ�. " << name << "��\n"; // \n: �ٹٲ�  

	cout << "apple�� ������ ���Դϱ�?";
	cin >> mon1;

	cout << "banana�� ������ ���Դϱ�?";
	cin >> mon2;

	cout << "orange�� ������ ���Դϱ�?";
	cin >> mon3;

	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> num1;

	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> num2;

	cout << "orange�� �� �� �ֽ��ϱ�?";
	cin >> num3;

	sum = (mon1 * num1) + (mon2 * num2) + (mon3 * num3) - 500; //�� �� ���
	cout << "�� " << sum << "�Դϴ�"; 
}