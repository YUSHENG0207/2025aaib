//week14-1,cpp
//UVA11063¡GB2-Sequence
#include<stdio.h>
int main()
{
	int a[100];
	int N ,t=1;
	while(scanf("%d",&N)==1){//part 1
		for(int i=0;i<N;i++){//part 1:input
			scanf("%d",&a[i]);//part 1:input
		}
		//part 2:output
		printf("Case #%d: It is a B2-Sequence.\n\n",t);
		t++;
	}
}
