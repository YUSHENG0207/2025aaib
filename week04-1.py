# week04-1
# leetcode2579. Count Total of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0#�j��e��ans���M��
        for i in range(1,n*2,2):#python���j��
            ans+=i#��o�ǼơA�[�Jans
        for i in range(1,n*2-1,2):
            ans+=i#��o�ǼơA�[�Jans
        return ans
