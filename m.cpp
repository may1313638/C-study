#include<iostream>
using namespace std;

int main() 
{
	int movie, book;
	int a, b, c, d, e, f;
	int seatab[3][10] = { 0 };
	int seatcd[3][10] = { 0 };
	int seatef[3][10] = { 0 };

	do
	{
		cout << "********************SWING CINEMA ������ ��ȭ********************" << endl;
		cout << "1. �ٵ�" << endl;
		cout << "2. �����ε�" << endl;
		cout << "3. ������!" << endl;
		cout << "4. ��ȭ ���� ����" << endl;
		cout << "��ȭ�� �����ϼ���.(1, 2, 3) ";
		cin >> movie;
		if (movie == 1)
		do
		{
			cout << "���� �� �������ּ���.\n";
			cout << "1. �¼� ����" << endl;
			cout << "2. ���� ���" << endl;
			cout << "3. ���� ����" << endl;
			cin >> book;
			if (book == 1)
			{
				cout << "������ �¼��� ������ �����ϴ�." << endl;
				cout << "---------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "---------------------------------------" << endl;
				if (movie == 1)
				{
					for (int a = 0; a < 3; a++)
					{
						for (int b = 0; b < 10; b++)
						{
							cout << seatab[a][b] << " ";
						}
						cout << endl;
					}
				}
				while (1)
				{
					cout << "\n�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
					cin >> a >> b;
					if (seatab[a - 1][b - 1] == 0)
					{
						cout << "\n����Ǿ����ϴ�." << endl;
						cout << "---------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "---------------------------------------" << endl;
						seatab[a - 1][b - 1] = { 1 };
						for (int a = 0; a < 3; a++)
						{
							for (int b = 0; b < 10; b++)
							{
								cout << seatab[a][b] << " ";
							}
							cout << endl;
						}
						break;
					}
					else if (seatab[a - 1][b - 1] == 1)
					{
						cout << "\n�̹� ����� �ڸ��Դϴ�." << endl;
					}
				}
			}
			else if (book == 2)
			{
				cout << "���� ����� �¼� ��Ȳ" << endl;
				cout << "---------------------------------------" << endl;
				cout << "1 2 3 4 5 6 7 8 9 10" << endl;
				cout << "---------------------------------------" << endl;
				for (int a = 0; a < 3; a++)
				{
					for (int b = 0; b < 10; b++)
					{
						cout << seatab[a][b] << " ";
					}
					cout << endl;
				}
				while (1)
				{
					cout << "\n�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
					cin >> a >> b;
					if (seatab[a - 1][b - 1] == 1)
					{
						cout << "\n���� ��� �Ǿ����ϴ�." << endl;
						cout << "---------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "---------------------------------------" << endl;
						seatab[a - 1][b - 1] = { 0 };
						for (int a = 0; a < 3; a++)
						{
							for (int b = 0; b < 10; b++)
							{
								cout << seatab[a][b] << " ";
							}
							cout << endl;
						}
						break;
					}
					else if (seatab[a - 1][b - 1] == 0)
					{
						cout << "\n������� ���� �ڸ��Դϴ�." << endl;
					}
				}
			}
			else if (book == 3)
				cout << "\n[�ٵ�]�¼� ���� ����" << endl;
		} while (book != 3);

		if (movie == 2)
			do
			{
				cout << "���� �� �������ּ���.\n";
				cout << "1. �¼� ����" << endl;
				cout << "2. ���� ���" << endl;
				cout << "3. ���� ����" << endl;
				cin >> book;
				if (book == 1)
				{
					cout << "������ �¼��� ������ �����ϴ�." << endl;
					cout << "---------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "---------------------------------------" << endl;
					if (movie == 2)
					{
						for (int c = 0; c < 3; c++)
						{
							for (int d = 0; d < 10; d++)
							{
								cout << seatcd[c][d] << " ";
							}
							cout << endl;
						}
					}
					while (1)
					{
						cout << "\n�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
						cin >> c >> d;
						if (seatcd[c - 1][d - 1] == 0)
						{
							cout << "\n����Ǿ����ϴ�." << endl;
							cout << "---------------------------------------" << endl;
							cout << "1 2 3 4 5 6 7 8 9 10" << endl;
							cout << "---------------------------------------" << endl;
							seatcd[c - 1][d - 1] = { 1 };
							for (int c = 0; c < 3; c++)
							{
								for (int d = 0; d < 10; d++)
								{
									cout << seatcd[c][d] << " ";
								}
								cout << endl;
							}
							break;
						}
						else if (seatcd[c - 1][d - 1] == 1)
						{
							cout << "\n�̹� ����� �ڸ��Դϴ�." << endl;
						}
					}
				}
				else if (book == 2)
				{
					cout << "���� ����� �¼� ��Ȳ" << endl;
					cout << "---------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "---------------------------------------" << endl;
					for (int c = 0; c < 3; c++)
					{
						for (int d = 0; d < 10; d++)
						{
							cout << seatcd[c][d] << " ";
						}
						cout << endl;
					}
					while (1)
					{
						cout << "\n�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
						cin >> c >> d;
						if (seatcd[c - 1][d - 1] == 1)
						{
							cout << "\n���� ��� �Ǿ����ϴ�." << endl;
							cout << "---------------------------------------" << endl;
							cout << "1 2 3 4 5 6 7 8 9 10" << endl;
							cout << "---------------------------------------" << endl;
							seatcd[c - 1][d - 1] = { 0 };
							for (int c = 0; c < 3; c++)
							{
								for (int d = 0; d < 10; d++)
								{
									cout << seatcd[c][d] << " ";
								}
								cout << endl;
							}
							break;
						}
						else if (seatcd[c - 1][d - 1] == 0)
						{
							cout << "\n������� ���� �ڸ��Դϴ�." << endl;
						}
					}
				}
				else if (book == 3)
					cout << "\n[�����ε�]�¼� ���� ����" << endl;
			} while (book != 3);

			if (movie == 3)
				do
				{
					cout << "���� �� �������ּ���.\n";
					cout << "1. �¼� ����" << endl;
					cout << "2. ���� ���" << endl;
					cout << "3. ���� ����" << endl;
					cin >> book;
					if (book == 1)
					{
						cout << "������ �¼��� ������ �����ϴ�." << endl;
						cout << "---------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "---------------------------------------" << endl;
						if (movie == 3)
						{
							for (int e = 0; e < 3; e++)
							{
								for (int f = 0; f < 10; f++)
								{
									cout << seatef[e][f] << " ";
								}
								cout << endl;
							}
						}
						while (1)
						{
							cout << "\n�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? ";
							cin >> e >> f;
							if (seatef[e - 1][f - 1] == 0)
							{
								cout << "\n����Ǿ����ϴ�." << endl;
								cout << "---------------------------------------" << endl;
								cout << "1 2 3 4 5 6 7 8 9 10" << endl;
								cout << "---------------------------------------" << endl;
								seatef[e - 1][f - 1] = { 1 };
								for (int e = 0; e < 3; e++)
								{
									for (int f = 0; f < 10; f++)
									{
										cout << seatef[e][f] << " ";
									}
									cout << endl;
								}
								break;
							}
							else if (seatef[e - 1][f - 1] == 1)
							{
								cout << "\n�̹� ����� �ڸ��Դϴ�." << endl;
							}
						}
					}
					else if (book == 2)
					{
						cout << "���� ����� �¼� ��Ȳ" << endl;
						cout << "---------------------------------------" << endl;
						cout << "1 2 3 4 5 6 7 8 9 10" << endl;
						cout << "---------------------------------------" << endl;
						for (int e = 0; e < 3; e++)
						{
							for (int f = 0; f < 10; f++)
							{
								cout << seatef[e][f] << " ";
							}
							cout << endl;
						}
						while (1)
						{
							cout << "\n�� ��, �� ��° �¼��� ���� ��� �Ͻðڽ��ϱ�? ";
							cin >> e >> f;
							if (seatef[e - 1][f - 1] == 1)
							{
								cout << "\n���� ��� �Ǿ����ϴ�." << endl;
								cout << "---------------------------------------" << endl;
								cout << "1 2 3 4 5 6 7 8 9 10" << endl;
								cout << "---------------------------------------" << endl;
								seatef[e - 1][f - 1] = { 0 };
								for (int e = 0; e < 3; e++)
								{
									for (int f = 0; f < 10; f++)
									{
										cout << seatef[e][f] << " ";
									}
									cout << endl;
								}
								break;
							}
							else if (seatef[e - 1][f - 1] == 0)
							{
								cout << "\n������� ���� �ڸ��Դϴ�." << endl;
							}
						}
					}
					else if (book == 3)
						cout << "\n[������!]�¼� ���� ����" << endl;
				} while (book != 3);

				if (movie == 4)
				{
					cout << "********************SWING CINEMA ����� �¼� ��ü ��Ȳ********************" << endl;
					cout << "---------------�ٵ�---------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------" << endl;
					for (int a = 0; a < 3; a++)
					{
						for (int b = 0; b < 10; b++)
						{
							cout << seatab[a][b] << " ";
						}
						cout << endl;
					}
					cout << "---------------�����ε�---------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------" << endl;
					for (int c = 0; c < 3; c++)
					{
						for (int d = 0; d < 10; d++)
						{
							cout << seatcd[c][d] << " ";
						}
						cout << endl;
					}
					cout << "---------------������!---------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------" << endl;
					for (int e = 0; e < 3; e++)
					{
						for (int f = 0; f < 10; f++)
						{
							cout << seatef[e][f] << " ";
						}
						cout << endl;
					}
				}
	} while (movie != 4);
}