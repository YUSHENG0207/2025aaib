//week04-1.c
//leetcode 2579.count total numder of colored cells
long long coloredCells(int n) {
    long long ans = 0;//�ܪ������
    for(long long i=1;i<n*2;i+=2){
        ans+=i;
    }
    for(long long i=1;i<n*2-1;i+=2){
        ans+=i;
    }
    return ans;
}
