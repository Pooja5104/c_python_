#include<stdio.h>
int main()
{
    int w;
    printf("enter weight");
    scanf("%d",&w);
    if((w=1)&&(w<=2000))
    {
     printf("time estimated:25 minutes");
    }
    if((w=2001)&&(w<=4000))
        {
    printf("time estimated:35 minutes");
        }
        if((w=4000)&&(w<=6999))
        {
    printf("time estimated:35 minutes");
        }
     else if(w=0)
     {
      printf("time estimated:0 minutes");
     }
     else
     {
      printf("invalid input");
     }
return 0;
    }