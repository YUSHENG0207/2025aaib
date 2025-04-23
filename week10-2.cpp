///week10-2.cpp
#include<stdio.h>
int main()
{
    printf("請輸入一個數字: ");
    int n;
    scanf("%d",&n);
    printf("輸入: %d\n",n);
    ///printf("個位是:%d\n",n%10);
    ///printf("百位是:%d\n",n/10%10);
    ///printf("個位是:%d\n",n/10/10%10);
    while(n>10){
        printf("%d剝皮%d\n",n,n%10);
        n=n=n/10;
    }
}
