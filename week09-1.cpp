///week09-1.cpp
///selectaion sort
#include<stdio.h>
int main()
{
    int a[10]={9,8,6,5,4,2,3,1,0,7};

    for(int i=1;i<10;i++) printf("%d",a[i]);
    printf("\n");

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d",a[i]);
    }
}
