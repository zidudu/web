
#include <iostream>
using namespace std;
int main()
{
	char board[3][3]; //문자열 저장
	int x, y, k, i;
	//보드 초기화
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) 
			board[x][y] = ' '; //각 배열의 좌표마다 띄어쓰기를 가짐
	


	//사용자로부터 위치 받아 보드 표시
	for (k = 0; k < 9; k++) {
		cout << "(x, y)좌표: ";
		cin >> x >> y; 


		//채워져있는 값에 넣을때
		if (board[x][y] != ' ') { //만약 xy좌표에 있는 값이 ' '가 아니라면 
			cout << "다시 입력하세요" << endl; //다시 입력하라는 문구 출력
			k--; //k-1해서 다시 컨티뉴할때 다시 입력할 수 있께
			continue;
		}

		board[x][y] = (k % 2 == 0) ? 'x' : 'o'; //k가0이면 x값 k가 1이면 o값 가짐


		//보드 화면에 그리기
		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
		}
		cout << "---|---|---" << endl;


		int sum=0;
		//1.가로 계산
		for (x = 0; x < 3; x++) {
				int y = 0;
				if (board[x][y]=='x' && board[x][y + 1] =='x' && board[x][y + 2] == 'x') {
					cout << "x가 이겼습니다";
					sum += 1;
					break;
				}
				else if (board[x][y] =='o' && board[x][y + 1]=='o' && board[x][y + 2] == 'o') {
					cout << "o가 이겼습니다";
					sum += 1;
					break;

				}
		}
		
		//세로 계산
		for (y = 0; y < 3; y++) {
			int x = 0;
			if (board[x][y]=='x' && board[x + 1][y] =='x' && board[x + 2][y] == 'x') {
				cout << "x가 이겼습니다";
				sum += 1;
				break;
			}
			else if (board[x][y]=='o' && board[x + 1][y]=='o' && board[x + 2][y] == 'o') {
				cout << "o가 이겼습니다";
				sum += 1;
				break;

			}

		}

		//대각선 계산
		if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') {
			cout << "x가 이겼습니다";
			break;

		}
		else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') {
			cout << "o가 이겼습니다";
			break;

		}
		else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {
			cout << "x가 이겼습니다";
			break;

		}
		else if (board[2][0]=='o' && board[1][1] =='o' && board[0][2] == 'o') {
			cout << "o가 이겼습니다";
			break;

		}







	}

}