class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#�����Ʀr
        #��Xtarget���[�`


        for i,num in enumerate(nums):
            other=target-num#�t�@�Ӽ�
            if target-num in box:#�d����
                return [box[other],i]#�䵪��
            else:#�S�A�X����
                box[num]=i#�N���O��
