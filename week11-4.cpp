///week11-4 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int now = nums[i];///瞷璶矪瞶nums[i]
            int digits=0;
            while(now>0){///耞计
                digits++;///癘计
                now=now/10;
            }
            if(digits%2==0)ans++;//癹伴癘案计ans++
            ///癹伴案计计ans++
        }
        return ans;///癹伴ansㄓノ
    }
};
