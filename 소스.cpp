#include <stdio.h> //스탠다드 인풋 아웃풋
#include <conio.h> //키와 관련된 인클루드

void main() {
	/*char c;
	c = _getch();
	printf("키 : %d", c);*/

	//while (1) {
	//	//키보드의 눌림을 감지하여 눌렀을때 0이외의 값을 준다.
	//	if (_kbhit()) {
	//		printf("키보드 입력 감지");
	//		break;
	//	}
	//	printf("입력 대기중\n");
	//}

	while (1) {
		char pressKey;
		//키가 입력되면 잡아준다.
		if (_kbhit()) {
			pressKey = _getch();

			switch (pressKey) 
			{
			case 72:
				printf("화살표 위쪽 키 \n");
				break;
			case 75:
				printf("화살표 왼쪽 키 \n");
				break;
			case 77:
				printf("화살표 오른쪽 키 \n");
				break;
			case 80:
				printf("화살표 아래쪽 키 \n");
				break;
			}
		}
	}

}
