#include <stdio.h>
#define N 100

int Array_Sum(int a[]){
        int sum_result = 0;
        for (int i =0; i<N; i++){
            sum_result += a[i];
        }
        return sum_result;
    }

int main (void){
    //int gread0,gread1, ... 이렇게 선언을 하고 추가할떄마다 새로 선언을 하면힘듬

    int gread[3]; // 3개의 원소를 개수를 가진 배열 변수 선언

   // 배열 크기를 기호 상수로 정의를 하는 것이 좋은 방법이다.
   int a [N];
    int sum = Array_Sum(a);

    printf("result: %d", sum);
    return 0;
}