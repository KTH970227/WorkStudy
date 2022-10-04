#include <stdio.h>
//C언어 switch ~ case 조건식은 실수값, 한글 안된다.

int main(){
    //안되는 상황 예시
    int a_ii = 1;
	switch (a_ii)
	{
		case 1 :
			printf("case 1 : 1입니다.\n");
			break;
		case 2:
			printf("case 2 : 2입니다.\n");
			break;
        case 3:
			printf("case 3 : 3입니다.\n");
			break;
		default:
			break;
	}
    //안되는 상황 예시 1
    // float a_ff = 1.12f;
	// switch (a_ff)
	// {
	// 	case 1.0f :
	// 		printf("1.0f입니다.\n");
	// 		break;
	// 	case 1.2f:
	// 		printf("1.2f입니다.\n");
	// 		break;
	// 	default:
	// 		break;
	// }

    //안되는 상황 예시 2
    // char a_Han = '글';
	// switch (a_Han)
	// {
	// case '가': 
	// 	printf("case 1 : 가입니다.\n");
	// 	break;
	// case '글':
	// 	printf("case 2 : 글입니다.\n");
	// 	break;
	// case '나':
	// 	printf("case 3 : 나입니다.\n");
	// 	break;
	// default:
	// 	break;
	// }  
}