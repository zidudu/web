#include "calculator.h"
int main() {
	double mx, my;
	char moper;
	int start = true;
	//처음 입력 값
	cout << "계산 입력 : ";
	cin >> mx >> moper >> my;
	Calculator calculator(mx, moper, my);

	do {
		//입력한 계산값
		

		

		//값이 + - / * 인지 검사한 후 계산
		calculator.gumsa();


		//계산한 sum값을 화면에 출력
		calculator.print();
		

		//출력한 값을 연산에 다시 사용
		cin >> moper >> my;
		calculator.put( moper,my); //입력한 값 클래스 변수에 넣음

		start = false;

		//C입력하면  값 모두 초기화, Q는 break
		if (moper == 'C')
		{
			calculator.chogihwa(); //멤버변수 값 초기화
			cout << endl;
			
		}
		//Q입력하면 종료
		else if (moper == 'Q') {
			return 0;
		}
	} while (true);

}