n= int(input("輸入一個整數:"))
def isPrine(n):
  for i in range(2,n):
    if n%i == 0:
      return False
  return True
if isPrine(n):
  print(n,"是質數")
else:
    print(n,"不是質數")