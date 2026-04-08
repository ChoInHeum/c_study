// 4번 문제: 두 수 비교하기

#include <stdio.h>

int main() {
	int a, b;

	// 문제의 a, b 입력받기
	scanf("%d %d", &a, &b);

	// 삼항 연산자를 이용한 출력
	printf("%s", a > b ? ">" : a < b ? "<" : "==");
	return 0;
}