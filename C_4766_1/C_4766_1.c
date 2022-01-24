/*
동혁이는 졸업을 하기 위해 일반 화학 실험을 들어야 한다. 마지막 실험은 어떤 혼합물을 만든 뒤 온도를 1분에 한 번씩 잰 후, 1분동안 변화한 온도를 표로 만들어야 한다.
뛰어난 프로그래머인 동혁이는 혼합물의 온도를 자동으로 측정해주는 프로그램을 만들었다. 하지만, 깜빡하고 변화한 온도를 자동으로 계산해주는 프로그램을 만들지 않았다.
동혁이가 측정한 온도가 주어졌을 때, 변화한 온도를 구하는 프로그램을 작성하시오.

입력은 동혁이가 측정한 혼합물의 온도가 순서대로 주어진다. 
온도는 -10도와 200도 사이이고, 소수점 둘째자리까지 적혀져 있을 수도 있다. 마지막 측정 후에는 999가 주어진다. 동혁이는 온도를 적어도 2번 측정했다.

입력으로 주어진 각 온도와 이전 온도와의 차이를 출력한다. 첫 번째 측정할 온도는 이전 온도가 없으니 출력할 필요가 없다. 차이는 항상 소수점 둘째자리까지 출력한다.
*/

#include <stdio.h>

int main(void)
{
    int i=0; // 변수 선언 및 초기화
    double f[10000]; // 배열 선언 및 초기화
    
    while(1) // 무한 반복
    {
        scanf("%lf", &f[i]); // 사용자로부터 실수 입력받기
        if(f[i]==999) // 만약, f[i]가 999라면
        {
            break; // 가장 가까운 반복문을 빠져 나가기
        }
        i++; // i에 1 더하기
    }
    
    i=0; // i에 0 대입하기
    
    for(int j=0;f[j+1]!=999;j++) // j가 0부터 f[j+1]이 999가 아닐 때까지 1씩 증가하며 반복
    {
        printf("%.2lf\n", f[i+1]-f[i]); // 결괏값을 소수점 둘째 자리까지 출력하기
        i++; // i에 1 더하기
    }
    
    return 0;
}