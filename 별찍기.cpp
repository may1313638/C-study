#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N == 1)
	{
		cout << "*\n";
	}
	else
	{
		for (int i = 1; i <= N; ++i)
		{
			for (int j = 0; j < N / 2 + N % 2; ++j)
			{
				cout << "* ";
			}
			cout << "\n";
			for (int j = 0; j < N / 2; ++j)
			{
				cout << " *";
			}
			cout << "\n";
		}
	}
}