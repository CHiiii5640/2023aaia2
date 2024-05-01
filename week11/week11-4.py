class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)):
            if word[i]==ch: #找到字母
                return word[i::-1]  + word[i+1:] #把word[0]...word[i]反過來(特殊寫法)
        return word