///week11-1.cpp
///(SOIT107_ADVANCE_009
#include<stdio.h>
int main()
{
    printf("�п�J 1422: ");
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n>0){
        printf("�{�b��X�Ӫ���:%d\n",n%10);
        if(n%10>ans)ans=n%10;
        n=n/10;
    }
    printf("�̤j��:%d\n",ans);
}
