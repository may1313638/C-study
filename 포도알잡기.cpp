/*#include <iostream>
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
}*/

#include<iostream>
using namespace std;

int main()
{
	int choice; // 좌석 예약 시작에 대한 변수 지정
	int answer, answer1, i, o;//행과 열에 대한 숫자를 받기 위한 변수 지정,for에 사용될 변수 지정
	int seats[3][10] = { 0 };/*3열10행에 0이 들어가야 하기 때문에 [][]에 앞쪽에 열의 값3과 뒤쪽에 행의 값 10을 넣어준다.
						   또한 배열의 값을 모두 0으로 지정해줘야하는데 30개를 하나하나 치는 것은 너무 오래걸리니 {0}으로 모든 값을 0으로 지정한다.*/

	while (1)//'좌석을 예약하시겠습니까'가 0을 제외한 모든 숫자를 입력하였을 때 다시 떠야하므로 whlie(1)로 무한루프로 만들어주었다.
	{
		cout << "좌석을 예약하시겠습니까? (1또는0)" << endl;
		cin >> choice;
		if (choice == 1)//1을 입력하였을 때>예약을 하겠다는 의미 따라서 if문으로 다른 숫자를 입력하였을때와 구별한다.
		{
			cout << "현재의 좌석은 다음과 같습니다.\n" << endl;
			cout << "---------------------------------------------------\n" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10\n" << endl;
			cout << "---------------------------------------------------\n" << endl;
			for (i = 0; i < 3; i++) {/*for 반복문으로 현재 좌석의 예약상태를 표현한다
									i이용하여 for의 조건을 정해주고  seats 배열의 행의 값을 지정해준다. */
				for (o = 0; o < 10; o++) {//o또한 조건을 정해줘야 하고 열의 값을 정해줘야 하기 때문에 for(i)에 속한 for로 작성해준다

					cout << seats[i][o];/*배열을 이용하여 좌석을 나타내줘야하기때문에
										행의 값을 지정한 i을 앞에 열의 값을 지정한 o을 각각[]에 넣어준다*/
				}
				cout << endl;/*endl;이 seats와 붙어있을 경우 endl이 30번 적용이 되어
							 0이 30개로 일자로 나타나기 때문에 for에서 벗어난 후 작성해준다*/
			}
			cout << "\n" << endl;//한줄을 띄운 후 다음 문장이 나오게 만들기 위해서
			cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?" << endl;
			cin >> answer >> answer1;//행과 열 두개의 값을 작성받야아 하기 때문에 이렇게 작성해주었다.
			if (seats[answer - 1][answer1 - 1] == 0) {/*배열의 인덱스는 0부터 시작하기 때문에 시각적으로 보이는 내가 원하는 자리를 선택하기 위해서
													  입력한 값에서 1을 뺀 값이 들어가야한다.
													  또한 값이 0인 의미는 내가 선택한 자리가 예약이 되지 않는 경우를 의미하는 것이다*/
				cout << "예약되었습니다.\n" << endl;
				seats[answer - 1][answer1 - 1] = 1;//내가 선택한 자리의 값을 1로 바꾸게 하기 위함이다.
			}
			else//내가 선택한 자리의 값이 0이 아닐 경우=이미 예약한 자리일 경우
			{
				cout << "이미 예약된 자리입니다." << endl;
			}


		}
		else if (choice == 0)//예약을 종료하겠다는 의미
		{
			cout << "좌석 예약 종료" << endl;
			break;//예약을 종료하면 이 반복문이 끝나야하기 때문에 반복문의 제어를 벗어날 수 있는 break를 사용한다.
		}
		else
			cout << "1번 또는 0번만 입력하세요" << endl;//0과1일이 아닌 다른 숫자를 입력했을 경우
	}
	return 0;
}
