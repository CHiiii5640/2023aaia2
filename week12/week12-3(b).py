table= [True]*240000
ans=0 #質數
for i in range(2,240000): #質數不會被整除
  if table[i] == True: #他是質數，沒被殺
    ans += 1
    for k in range(i*i,240000,i):
      table[k] = False
print("找到",ans,"個質數")