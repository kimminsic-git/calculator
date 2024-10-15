#include <stdio.h>

int main()
{
    int level;
    int a;
    int b;

    printf("사용할 연산자를 선택하세요\n");
    printf("(1은 더하기,2는 빼기,3은 곱하기,4는 나누기): ");
    scanf("%d",&level);
    
    printf("사용할 숫자를 두개 입력해주세요: ");
    scanf("%d %d",&a,&b);
    
    switch (level-1)
    {
        case 0:

            printf("%d와 %d의 합은 %d입니다.",a,b,a+b);

            break;

        case 1:

            printf("%d와 %d의 차는 %d입니다.",a,b,a-b);

            break;

        case 2:

            printf("%d와 %d의 곱은 %d입니다.",a,b,a*b);

            break;

        case 3:

            printf("%d에서 %d를 나누면 %d입니다.",a,b,a/b);

            break;

        default:

            printf("올바르지않은 연산자입니다");

            break;
    }

    return 0;
}