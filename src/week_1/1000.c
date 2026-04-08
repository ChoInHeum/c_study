// 1번 문제: A + B

#include <stdio.h>

int main() {
	// 정수를 담을 변수 두 개를 선언
	int a, b;
	
	// scanf를 사용하여 문제에서 제시하는 입력값을 받아 저장
	scanf("%d %d", &a, &b);

	// printf를 사용하여 정답 출력
	printf("%d", a + b);
	
	return 0;
}