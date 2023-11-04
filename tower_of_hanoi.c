#include<stdio.h>

int find(int n,char a,char b, char c){
    if (n==1)
    {
        printf("move from %c to %c \n",a,c);
        return 1;
    }
    find(n-1,a,c,b);
    printf("move from %c to %c \n",a,c);
    find(n-1,b,a,c);
}
int main()
{
    char a,b,c;
    a='A',b='B',c='C';
    int n=3;
    find(n,a,b,c);
    return 0;
}
