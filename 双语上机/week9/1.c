//验证一个数是否满足哥德巴赫猜想
#include <stdio.h>
#include <math.h>
int isPrime(int a);
int Verification();
int main(){
    int a;
    printf("Please type a number:\n");
    a=Verification();
    for (int  i = 2; i <=a/2 ; i++)
    {
        if (isPrime(i)&&isPrime(a-i))
        {
            printf("%d=%d+%d", a, i, a - i);
            break;
        }
    }
    
    return 0;
}
int Verification(){
    int a;
    scanf("%d", &a);
    if (a>6&&a%2==0)
    {
        return a;
    }
    else{
        printf("You are wrong.\nPlease type again!\n");
        Verification();
    }
}
int isPrime(int a){
    if (a==1)
    {
        return 0;
    }
    for (int i = 2; i <sqrt((double)a) ; i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}