#include<stdio.h>
int main()
{
   int n,tmp=0;
   scanf("%d",&n);
   while(n>0){
    
      tmp+=n%10;
      n/=10;
      tmp*=10;
        
   
   }
   while(tmp>0){
      printf("%d\n",tmp%10);
      tmp/=10;

   }
}
