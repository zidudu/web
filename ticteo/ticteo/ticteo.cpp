
#include <iostream>
using namespace std;
int main()
{
	char board[3][3]; //보드 칸에 문자열을 저장함
	int x, y; //보드 칸 좌표
	int k, i; //for 이나 if구문 변수

	//보드의 배열 만들기
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++)
			board[x][y] = ' '; //각 배열의 좌표마다 빈칸을 가짐


		//보드의 x와 y좌표 받기
		for (k = 0; k < 9; k++) { //9번 반복
			cout << "(x, y)좌표를 입력하세요: ";
			cin >> y >> x; 


			//칸이 채워져있는 곳에 넣을때 다시 입력하라는 메세지 출력
			if (board[x][y] != ' ') {  
				cout << "다시 입력하세요" << endl; 
				k--; 
				continue;
			}

			// x와 o 순서 정하기
			if (k % 2 == 0) //k가 짝수이면 x값 k가 홀수이면 o값 가짐
				board[x][y] = 'x';
			else
				board[x][y] = 'o';

			//보드 화면 그리기
			for (i = 0; i < 3; i++) {
				cout << "---|---|---" << endl;
				cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
			}
			cout << "---|---|---" << endl;

	
			//빙고 계산(1.가로, 2.세로, 3.대각선)
			
			//1.가로 계산
			for (int i = 0; i < 3; i++) {
				if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') { // x의 가로빙고 계산
					cout << "x가 이겼습니다";  // 승리했다는 문구 출력하고 종료
					return 0;
				}
				else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') { //o의 가로빙고 계산
					cout << "o가 이겼습니다";
					return 0; 

				}
				//2.세로계산
				else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') { //x의 세로빙고 계산
					cout << "x가 이겼습니다";
					return 0;
				}
				else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') { //o의 세로빙고 계산
					cout << "o가 이겼습니다";
					return 0;

				}

			}

			//3.대각선 계산
			if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') { //x의 대각선(왼쪽위->오른쪽아래)빙고 계산
				cout << "x가 이겼습니다";
				return 0;

			}
			else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') { //o의 대각선(왼쪽위->오른쪽아래)빙고 계산
				cout << "o가 이겼습니다";
				return 0;

			}
			else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {//x의 대각선(오른쪽위->왼쪽아래)빙고 계산
				cout << "x가 이겼습니다";
				return 0;

			}
			else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {//o의 대각선(오른쪽위->왼쪽아래)빙고 계산
				cout << "o가 이겼습니다";
				return 0;

			}
		}

		//모든 칸이 채워졌을때 비겼다는 문구 출력
		cout << "비겼습니다" << endl;
		return 0;



}

