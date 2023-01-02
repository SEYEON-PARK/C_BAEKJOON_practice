/*
올 골드 럭비 클럽의 회원들은 성인부 또는 청소년부로 분류된다.
나이가 17세보다 많거나, 몸무게가 80kg 이상이면 성인부이다. 그 밖에는 모두 청소년부이다. 클럽 회원들을 올바르게 분류하라.

각 줄은 이름과 두 자연수로 이루어진다. 두 자연수는 순서대로 나이와 몸무게를 나타낸다. 입력의 마지막 줄은 # 0 0 이다. 이 입력은 처리하지 않는다.
이름은 알파벳 대/소문자로만 이루어져 있고, 길이는 10을 넘지 않는다.

입력 받은 각 회원에 대해 이름과 분류를 출력한다. 성인부 회원이면 'Senior', 청소년부 회원이면 'Junior'를 출력한다.
*/

#include <stdio.h>

int main(void)
{  
    while(1) // 무한 반복
    {
        char name[11]; // 배열 선언
        int age; // 변수 age 선언
        double weight; // 변수 weight 선언
        
        scanf("%s %d %lf", name, &age, &weight); // 사용자로부터 문자열, 정수, 실수 입력받아 저장하기
        
        if(name[0]=='#' && age==0 && weight==0) // 만약, name[0]이 '#'과 같고 age가 0이며 weight가 0이라면
            break; // 반복문을 빠져 나가기
        if(age>17 || weight>=80) // 만약, age가 17보다 크거나 weight가 80보다 크거나 같다면
            printf("%s Senior\n", name); // 문자열 name 뒤에 "Senior"을 함께 출력하기
        else // age가 17보다 작거나 같고 weight가 80보다 작다면
            printf("%s Junior\n", name); // 문자열 name 뒤에 "Junior"을 함께 출력하기
    }
    
    return 0;
}
