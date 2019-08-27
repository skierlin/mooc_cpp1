#include<iostream>
using namespace std;
int main()
{
    int h,r,n;
    scanf("%d%d",&h,&r);
    n=20/(3.14159*r*r*h/1000)+1;
    printf("%d",n);
    return 0;
}
