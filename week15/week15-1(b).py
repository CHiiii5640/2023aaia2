class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N=len(s)
        for i in range(N):
            print(s[i],t[i]) #字串陣列
        return 0