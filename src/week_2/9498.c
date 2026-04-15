#include <stdio.h>

// if 사용

int main() {
    int score;

    scanf("%d", &score);

    if (score >= 90) {
        printf("A");
    }
    else if (score >= 80) {
        printf("B");
    }
    else if (score >= 70) {
        printf("C");
    }
    else if (score >= 60) {
        printf("D");
    }
    else {
        printf("F");
    }


    return 0;
}

// switch-case 사용

int main() {
    int score;

    scanf("%d", &score);

    switch (score / 10) {
    case 9:
        printf("A");
        break;
    
    case 8:
        printf("B");
        break;

    case 7:
        printf("C");
        break;

    case 6:
        printf("D");
        break;
    
    default:
        printf("F");
        break;
    }

    return 0;
}