// maxmin.c
#include <stdio.h>

// 함수 선언
float maximum(float x, float y);
float minimum(float x, float y);
void prn_info(void);

int main(void) {
    int i, n;
    float max, min, x;

    prn_info();

    printf("Input the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input count.\n");
        return 1;
    }

    printf("Input %d real numbers:\n", n);

    // 첫 번째 값은 초기화용
    scanf("%f", &x);
    max = min = x;

    for (i = 1; i < n; i++) {
        scanf("%f", &x);
        max = maximum(max, x);
        min = minimum(min, x);
    }

    printf("\nMaximum value is : %11.3f\n", max);
    printf("Minimum value is : %11.3f\n\n", min);

    return 0;
}

// 최대값 비교 함수
float maximum(float x, float y) {
    if (x > y)
        return x;
    else
        return y;
}

// 최소값 비교 함수
float minimum(float x, float y) {
    if (x < y)
        return x;
    else
        return y;
}

// 프로그램 정보 출력
void prn_info(void) {
    printf("=== 최대값/최소값 구하는 프로그램 ===\n\n");
}