// 3번 문제: A/B

#include <stdio.h>

int main() {
	// 정수를 담을 변수 두 개를 선언
	int a, b;
	
	// scanf를 사용하여 문제에서 제시하는 입력값을 받아 저장
	scanf("%d %d", &a, &b);

	// 1. int끼리 나누기는 정수 / 정수이므로 결과가 정수이다. 
	// 2. 따라서 각 int를 double로 형 변환을 통해 계산한다.
	// 3. 계산 후 출력은 "%d"가 아니라 double의 형식 지정자 "%lf"를 사용하여 출력한다.
	// 4. printf의 기본 출력은 소수점 아래 6자리까지만 출력한다.
	// 5. 따라서 문제에서 제시한 10^-9보다 많이 출력한다. 
	printf("%.15lf", (double)a / (double)b);
	
	return 0;
}