#include <iostream>
using namespace std;

int main()
{
	int k = 10;
	int* ptr;
	ptr = &k;

	cout << "변수 k의 주소는: " << ptr << endl;
	cout << "k의 값은: " << *ptr;
}