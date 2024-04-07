#include "TICTECTEOCLASS.h"
int main()
{
	tic play;
	//play.x=0, play.y=0; //보드 칸 좌표
	play.k=0, play.i=0; //for 이나 if구문 변수
	//보드의 배열 만들기
	play.board_value();

	//보드의 x와 y좌표 받기
	for (play.k = 0; play.k < 9; play.k++) { //9번 반복

		//값 x,y좌표 집어넣기
		play.x=play.input_x();
		play.y = play.input_y();


		//칸이 채워져있는 곳에 넣을때 다시 입력하라는 메세지 출력
		int same=play.same_value();
		if(same==true)
			continue;
		// x와 o 순서 정하기
		play.turn();

		////보드 화면 그리기
		play.draw();
		
		//보드판 빙고 계산하기
		int calaurate = play.board_calaurate();
		//클래스 안에서 리턴 쓰니 종료 안되서 리턴 값을 0을 받고 if문으로 0받았으면 여기서 리턴0해서 종료시킴
		if (calaurate == 0)
			return 0;
	}
	//모든 칸이 채워졌을때 비겼다는 문구 출력
	std:: cout << "비겼습니다" << endl;
	return 0;



}