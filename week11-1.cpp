///week11-1.cpp
///(SOIT107_ADVANCE_009
#include<stdio.h>
int main()
{
    printf("請輸入 1422: ");
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n>0){
        printf("現在剝出來的皮:%d\n",n%10);
        if(n%10>ans)ans=n%10;
        n=n/10;
    }
    printf("最大為:%d\n",ans);
}
