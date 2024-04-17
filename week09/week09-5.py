# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        table="abcdefghijklmnopqrstuvwxyz"
        def helper(root,nowStr): #nowStr 累積字串
            if root==None: return nowStr #樹下沒有東西，右邊累積的字母就是結果
            nextStr = table[root.val] + nowStr
            if root.left == None and root.right == None: return nextStr #沒有左右
            if root.left == None: return helper(root.right,nextStr) #左邊空的，往右跑
            if root.right == None: return helper(root.left,nextStr) #右邊空的，往左跑
            #下面是正常
            left = helper(root.left,nextStr) #左邊結果
            right = helper(root.right,nextStr) #右邊結果
            return min(left,right) #小的當答案

        return helper(root,"")