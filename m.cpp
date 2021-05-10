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
		cout << "********************SWING CINEMA 오늘의 영화********************" << endl;
		cout << "1. 다들" << endl;
		cout << "2. 앞으로도" << endl;
		cout << "3. 파이팅!" << endl;
		cout << "4. 영화 선택 종료" << endl;
		cout << "영화를 선택하세요.(1, 2, 3) ";
		cin >> movie;
		if (movie == 1)
		do
		{
			cout << "다음 중 선택해주세요.\n";
			cout << "1. 좌석 예약" << endl;
			cout << "2. 예약 취소" << endl;
			cout << "3. 예약 종료" << endl;
			cin >> book;
			if (book == 1)
			{
				cout << "현재의 좌석은 다음과 같습니다." << endl;
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
					cout << "\n몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
					cin >> a >> b;
					if (seatab[a - 1][b - 1] == 0)
					{
						cout << "\n예약되었습니다." << endl;
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
						cout << "\n이미 예약된 자리입니다." << endl;
					}
				}
			}
			else if (book == 2)
			{
				cout << "현재 예약된 좌석 현황" << endl;
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
					cout << "\n몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
					cin >> a >> b;
					if (seatab[a - 1][b - 1] == 1)
					{
						cout << "\n예약 취소 되었습니다." << endl;
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
						cout << "\n예약되지 않은 자리입니다." << endl;
					}
				}
			}
			else if (book == 3)
				cout << "\n[다들]좌석 예약 종료" << endl;
		} while (book != 3);

		if (movie == 2)
			do
			{
				cout << "다음 중 선택해주세요.\n";
				cout << "1. 좌석 예약" << endl;
				cout << "2. 예약 취소" << endl;
				cout << "3. 예약 종료" << endl;
				cin >> book;
				if (book == 1)
				{
					cout << "현재의 좌석은 다음과 같습니다." << endl;
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
						cout << "\n몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
						cin >> c >> d;
						if (seatcd[c - 1][d - 1] == 0)
						{
							cout << "\n예약되었습니다." << endl;
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
							cout << "\n이미 예약된 자리입니다." << endl;
						}
					}
				}
				else if (book == 2)
				{
					cout << "현재 예약된 좌석 현황" << endl;
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
						cout << "\n몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
						cin >> c >> d;
						if (seatcd[c - 1][d - 1] == 1)
						{
							cout << "\n예약 취소 되었습니다." << endl;
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
							cout << "\n예약되지 않은 자리입니다." << endl;
						}
					}
				}
				else if (book == 3)
					cout << "\n[앞으로도]좌석 예약 종료" << endl;
			} while (book != 3);

			if (movie == 3)
				do
				{
					cout << "다음 중 선택해주세요.\n";
					cout << "1. 좌석 예약" << endl;
					cout << "2. 예약 취소" << endl;
					cout << "3. 예약 종료" << endl;
					cin >> book;
					if (book == 1)
					{
						cout << "현재의 좌석은 다음과 같습니다." << endl;
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
							cout << "\n몇 열, 몇 번째 좌석을 예약하시겠습니까? ";
							cin >> e >> f;
							if (seatef[e - 1][f - 1] == 0)
							{
								cout << "\n예약되었습니다." << endl;
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
								cout << "\n이미 예약된 자리입니다." << endl;
							}
						}
					}
					else if (book == 2)
					{
						cout << "현재 예약된 좌석 현황" << endl;
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
							cout << "\n몇 열, 몇 번째 좌석을 예약 취소 하시겠습니까? ";
							cin >> e >> f;
							if (seatef[e - 1][f - 1] == 1)
							{
								cout << "\n예약 취소 되었습니다." << endl;
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
								cout << "\n예약되지 않은 자리입니다." << endl;
							}
						}
					}
					else if (book == 3)
						cout << "\n[파이팅!]좌석 예약 종료" << endl;
				} while (book != 3);

				if (movie == 4)
				{
					cout << "********************SWING CINEMA 예약된 좌석 전체 현황********************" << endl;
					cout << "---------------다들---------------" << endl;
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
					cout << "---------------앞으로도---------------" << endl;
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
					cout << "---------------파이팅!---------------" << endl;
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