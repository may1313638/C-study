#include <iostream>
using namespace std;

int main()
{
	int k = 10;
	int* ptr;
	ptr = &k;

	cout << "���� k�� �ּҴ�: " << ptr << endl;
	cout << "k�� ����: " << *ptr;
}