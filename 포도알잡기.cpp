#include <iostream>
using namespace std;

int main() 
{
	int answer, i, j, row, col;
	int seat[3][10] = { 0 }; 
	while (1)
	{ 
		cout << "�¼��� �����Ͻðڽ��ϱ�? (1 �Ǵ� 0) ";
		cin >> answer; 

		if (answer == 1) 
		{ 
			cout << endl << "������ �¼��� ������ �����ϴ�." << endl;
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
				cout << endl << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
				cin >> row >> col;
				cout << endl;

				if (seat[row - 1][col - 1] == 1) 
				{ 
					cout << "�̹� ����� �ڸ��Դϴ�." << endl << endl;
				}

				else if (seat[row - 1][col - 1] == 0)
				{ 
					seat[row - 1][col - 1] = 1;
					cout << "����Ǿ����ϴ�." << endl;
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
			cout << endl << "�¼� ���� ����";
			break;
		}
		else 
		{
			cout << endl << "1�� �Ǵ� 0���� �Է��ϼ���." << endl << endl;
		}
	}
}