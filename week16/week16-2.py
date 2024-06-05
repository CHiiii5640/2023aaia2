class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        from collections import Counter
        n=len(words)
        ans=[]
        # counter=Counter(words[0]) & Counter(words[1]) & Counter(words[2])
        counter = Counter(words[0])
        for i in range(1,n):
            counter &= Counter(words[i])
        for c in counter:
            for i in range(counter[c]):
                ans.append(c)
        return ans
