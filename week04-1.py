# week04-1
# leetcode2579. Count Total of Colored Cells
class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0#迴圈前面ans先清空
        for i in range(1,n*2,2):#python的迴圈
            ans+=i#把這些數，加入ans
        for i in range(1,n*2-1,2):
            ans+=i#把這些數，加入ans
        return ans
