#include <iostream>
using namespace std;
class Calculator {
private:
	//멤버 변수 초기화
	double x = 0, y = 0, sum = 0;
	char oper = ' ';

public:
	//생성자 생성
	Calculator(double , char oper, double y);

	void put(char moper, double my);

	//초기화 함수
	void chogihwa();

	//검사해서 계산하는 함수
	void gumsa();

	//결과값 출력하는 함수
	void print();


	

	// 클래스에 계산기 기능 만들기 
	//oper은 +-/*가 있을 거임
	//그래서 swich로 문자 구별해서 만들기,멤버함수로 만들면 됨
	//sum은 아마 결과값일 거다. 결과를 화면에 출력하면 됨
	//문제는 그 나온 값에 연산을 해야됨 sum에 +0하는 식으로 계산
	//c버튼을 누르면 초기화, q를 입력하면 종료가 됨
	//모든 입력값은 키보드로 입력한다




};
