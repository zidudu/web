#include <iostream>
using namespace std;
#include <string>

class tic{
public:
	char board[3][3]; //���� ĭ�� ���ڿ��� ������
	int x=0, y=0; //���� ĭ ��ǥ
	int k, i; //for �̳� if���� ����

	//���� �׸��� ����
	string width_board = "---";
	string height_board = "|";

	void board_value();

	//��ǥ �Է� �Լ�
	int input_x();
	int input_y();

	//�ٽ� �Է��϶�� �Լ�
	int same_value();

	//���� ���ϴ� �Լ�
	void turn();

	//���� ǥ���Լ�
	void draw();

	//���� ��� �Լ�
	int board_calaurate();

	//void board_char_value();

};