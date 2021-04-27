#include <iostream>
using namespace std;

int main() 
{
	int answer, i, j, row, col;
	int seat[3][10] = { 0 }; 
	while (1) 
	{ 
		cout << "좌석을 예약하시겠습니까? (1 또는 0) ";
		cin >> answer; 

		if (answer == 1) 
		{ 
			cout << endl << "현재의 좌석은 다음과 같습니다." << endl;
			cout << "-----------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-----------------------------------" << endl;
			for (i = 0; i < 3; i++) 
			{ 
				for (j = 0; j < 10; j++) 
				{ 
					cout << seat[i][j] << " ";
				}
				cout << endl;
			}

			while (1) 
			{
				cout << endl << "몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
				cin >> row >> col;
				cout << endl;

				if (seat[row - 1][col - 1] == 1) 
				{ 
					cout << "이미 예약된 자리입니다." << endl << endl;
				}

				else if (seat[row - 1][col - 1] == 0)
				{ 
					seat[row - 1][col - 1] = 1;
					cout << "예약되었습니다." << endl;
					cout << "-----------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------" << endl;
					for (i = 0; i < 3; i++) 
					{
						for (j = 0; j < 10; j++) 
						{
							cout << seat[i][j] << " ";
						}
						cout << endl;
					}
					cout << endl;
					break;
				}
			}
		}
		else if (answer == 0) 
		{
			cout << endl << "좌석 예약 종료";
			break;
		}
		else 
		{
			cout << endl << "1번 또는 0번만 입력하세요." << endl << endl;
		}
	}
}
