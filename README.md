# 2023-C-language


# include<stdio.h>
int main()
{ 
     int cel;
     float far;
     scanf("%d", &cel);
     far=(cel*((float)9/5)+32);
     printf("%.2f/n", far);
    


}



int main()
{ 
     int N,M;
     scanf("%d",&N);
     M=0;
     M+=(N%10)*10;
     M*=10;
     M+=(N/100%10);
     M*=10;
     M+=(N%1000/100);
     M*= 10;
     M+=N/1000;
     printf("%d/n", M);

    


}
