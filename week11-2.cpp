///week11-2.cpp
///�禡�ŧi�A�禡�w�q�A�禡�I�s�A(��ƨ禡)
#include<stdio.h>
int addnum(int a,int b)///�ŧi2�ӰѼƪ��Ϊ��W�r
{///�e�������/�禡���w�q
    printf("�{�b�i�J addnum() �禡��,a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("��Ƭۥ[��A�o��ƭ�%d�Nreturn�^��\n",x);
    return x;///�^�ǵ����s�Ϊ��a��
}

int main()
{
    int ans=addnum(10,30);
    printf("%d",ans);
}
