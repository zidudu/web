#include "calculator.h"


Calculator::Calculator(double mx = 0, char moper = ' ', double my = 0) {
	x = mx;
	oper = moper;
	y = my;

}


//��� ���
void Calculator::gumsa() {
	switch (oper)
	{
	case '+':
		sum = x + y;
		break;
	case '-':
		sum = x - y;

		break;
	case '/':
		sum = x / y;

		break;
	case '*':
		sum = x * y;
		break;

	default:
		"�ٽ� �Է��ϼ���";
		break;
	}
	x = sum;


}

void Calculator::print() {
	cout <<"�����: " << sum<<" ";

}
void Calculator::put(char moper = ' ', double my = 0) {
	oper = moper;
	y = my;
}
	void Calculator::chogihwa() {
	x = 0;
	y = 0;
	sum = 0;
	oper = ' ';
	
}


