#include "calculator.h"


Calculator::Calculator(double mx = 0, char moper = ' ', double my = 0) {
	x = mx;
	oper = moper;
	y = my;

}


//결과 계산
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
		"다시 입력하세요";
		break;
	}
	x = sum;


}

void Calculator::print() {
	cout <<"결과값: " << sum<<" ";

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


