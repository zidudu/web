#include <iostream>
using namespace std;
class Calculator {
private:
	//��� ���� �ʱ�ȭ
	double x = 0, y = 0, sum = 0;
	char oper = ' ';

public:
	//������ ����
	Calculator(double , char oper, double y);

	void put(char moper, double my);

	//�ʱ�ȭ �Լ�
	void chogihwa();

	//�˻��ؼ� ����ϴ� �Լ�
	void gumsa();

	//����� ����ϴ� �Լ�
	void print();


	

	// Ŭ������ ���� ��� ����� 
	//oper�� +-/*�� ���� ����
	//�׷��� swich�� ���� �����ؼ� �����,����Լ��� ����� ��
	//sum�� �Ƹ� ������� �Ŵ�. ����� ȭ�鿡 ����ϸ� ��
	//������ �� ���� ���� ������ �ؾߵ� sum�� +0�ϴ� ������ ���
	//c��ư�� ������ �ʱ�ȭ, q�� �Է��ϸ� ���ᰡ ��
	//��� �Է°��� Ű����� �Է��Ѵ�




};
