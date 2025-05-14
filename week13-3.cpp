///week13-3.cpp
#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)return b;
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    printf("輸入兩數:  ");
    int a,b;
    scanf("%d%d",&a ,&b);
    int ans =gcd(a,b);
    printf("公因數:%d\n",ans);

}
