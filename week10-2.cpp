///week10-2.cpp
#include<stdio.h>
int main()
{
    printf("�п�J�@�ӼƦr: ");
    int n;
    scanf("%d",&n);
    printf("��J: %d\n",n);
    ///printf("�Ӧ�O:%d\n",n%10);
    ///printf("�ʦ�O:%d\n",n/10%10);
    ///printf("�Ӧ�O:%d\n",n/10/10%10);
    while(n>10){
        printf("%d���%d\n",n,n%10);
        n=n=n/10;
    }
}
