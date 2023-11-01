//计算C(n,m)
#include <stdio.h>
int calculate(int n,int m);
int main(){
    int n, m;
    printf("Please type two numbers:n m,This program will calculate the C(n,m)\n");
    scanf("%d %d",&n, &m);
    printf("C(n,m)=%d",calculate(n, m));
    return 0;
}
int factorial(int a){
    if (a==1||a==0)
    {
        return 1;
    }
    else{
      return a*factorial(a-1);
    }
}
int calculate(int n,int m){
    return factorial(n) / (factorial(m) * factorial(n - m));
}