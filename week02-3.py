class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={}#紀錄數字
        #湊出target的加總


        for i,num in enumerate(nums):
            other=target-num#另一個數
            if target-num in box:#查紀錄
                return [box[other],i]#找答案
            else:#沒適合的數
                box[num]=i#就先記錄
