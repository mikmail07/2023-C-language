#include<stdio.h>
int main()
{
    int n,i,cnt;
    scanf("%d",&n);
    while(n>0){
        i=1;
        cnt=0;
       
         while(i<=n){
             if(n%i==0)cnt++;
        i++;
      }
      printf("%d\n",cnt);
      scanf("%d",&n);
    }
    

}


 