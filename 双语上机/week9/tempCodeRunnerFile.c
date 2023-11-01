#include <stdio.h>
int isPerfectnum(int a){
    int num = 0;
    for ( int i = 1; i <=a/2 ; i++)
    {
      if (a%i==0)
      {
          num = num + i;
      }
    }
    if (num==a)
    {
      return 1;
    }
    else{
      return 0;
    }
}
int main(){
    for (int i = 1; i <1001 ; i++)
    {
      if (isPerfectnum(i))
      {
          printf("%d ", i);
      }
    }
    
    return 0;
}