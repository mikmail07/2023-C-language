# include<stdio.h>
int main()
{ 
    char c;
    scanf("%c",&c);
    printf("%d", ('A' <= c) && (c <= 'Z') || ('a' <= c)&&( c<='z')?1:0);

}