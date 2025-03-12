//week04-2
//leetcode 2529. maximum count of positive integer and negative integer
int maximumCount(int* nums, int numsSize) {

    int pos=0 ,neg=0;
    for (int i=0;i<numsSize;i++){
        if(nums[i]>0)pos++;
        if(nums[i]<0)neg++;
    }

    if(pos>neg) return pos;
    else return neg;
}
