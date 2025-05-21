///week13-2.cpp
#include<stdio.h>
int main()
{
  int a=51,b=68;
  int ans=i;
  for(int i=1;i<=a;i++){
    if(a%i==0 && b%i==0) ans=i;
  }
  printf("%d%d的最大公因數:%d\n,a,b,ans);
  printf("%d%d約分後，變%d/%d\n",a,b,a/ans,b/ans);
}
