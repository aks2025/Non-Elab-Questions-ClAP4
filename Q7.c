#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int  i=2,j=0 ,flag;
    int n;
    printf("enter a number");
    scanf("%d",&n);
while(i!=n)
    {
        flag = checkPrimeNumber(i);
        if(flag == 1)
        {
            j++;
            printf("%d ",i);
  }
  i++;  
    }
    return 0;
}
int checkPrimeNumber(int n)
{
    int j, flag = 1;
    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
  
