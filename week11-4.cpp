///week11-4 1295. Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int now = nums[i];///�{�b�n�B�znums[i]
            int digits=0;
            while(now>0){///�P�_���
                digits++;///�O��
                now=now/10;
            }
            if(digits%2==0)ans++;//�j����A�O�참�Ʀ�Aans++
            ///�j����A���ƪ���Ʈ�ans++
        }
        return ans;///�j��᭱ans���ӥ�
    }
};
