#include "TICTECTEOCLASS.h"

void tic::board_value() {
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	}
}

int tic::input_x() {
	cout << "(x)��ǥ�� �Է��ϼ���: ";
	cin >> x;
	return x;

	

}
int tic::input_y() {
	cout << "(y)��ǥ�� �Է��ϼ���: ";
	cin >> y;
	return y;

}
void tic::turn() {

	// x�� o ���� ���ϱ�
	if (k % 2 == 0) //k�� ¦���̸� x�� k�� Ȧ���̸� o�� ����
		board[y][x] = 'x';
	else
		board[y][x] = 'o';


}
int tic::same_value(){
	if (board[y][x] != ' ') {
		cout << "�ٽ� �Է��ϼ���" << endl;
		k = k - 1;
		return true;
	}
	return false;

}
void tic::draw() {

	for (int i = 0; i < 3; i++) {
		//ȭ�鿡 ������ �׷���
		cout << width_board << height_board << width_board << height_board << width_board << endl;
		cout << board[i][0] << "  " << height_board << " " << board[i][1] << " " << height_board << " " << board[i][2] << endl;

	}
	cout << width_board << height_board << width_board << height_board << width_board << endl;

}

int tic::board_calaurate() {
		//���� ���(1.����, 2.����, 3.�밢��)

		//1.���� ���
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') { // x�� ���κ��� ���
				cout << "x�� �̰���ϴ�";  // �¸��ߴٴ� ���� ����ϰ� ����
				return 0;
			}
			else if (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') { //o�� ���κ��� ���
				cout << "o�� �̰���ϴ�";
				return 0;

			}
			//2.���ΰ��
			else if (board[0][i] == 'x' && board[1][i] == 'x' && board[2][i] == 'x') { //x�� ���κ��� ���
				cout << "x�� �̰���ϴ�";
				return 0;
			}
			else if (board[0][i] == 'o' && board[1][i] == 'o' && board[2][i] == 'o') { //o�� ���κ��� ���
				cout << "o�� �̰���ϴ�";
				return 0;

			}

		}

		//3.�밢�� ���
		if (board[0][0] == 'x' && board[1][1] == 'x' && board[2][2] == 'x') { //x�� �밢��(������->�����ʾƷ�)���� ���
			cout << "x�� �̰���ϴ�";
			return 0;

		}
		else if (board[0][0] == 'o' && board[1][1] == 'o' && board[2][2] == 'o') { //o�� �밢��(������->�����ʾƷ�)���� ���
			cout << "o�� �̰���ϴ�";
			return 0;

		}
		else if (board[2][0] == 'x' && board[1][1] == 'x' && board[0][2] == 'x') {//x�� �밢��(��������->���ʾƷ�)���� ���
			cout << "x�� �̰���ϴ�";
			return 0;

		}
		else if (board[2][0] == 'o' && board[1][1] == 'o' && board[0][2] == 'o') {//o�� �밢��(��������->���ʾƷ�)���� ���
			cout << "o�� �̰���ϴ�";
			return 0;

		}
	}

