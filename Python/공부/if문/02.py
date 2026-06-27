#삼항 연산자
a = 3
if a > 0:
    x = 10
else:
    x = 20

#삼항 연산자로 바꾸면
x = 10 if a > 0 else 20

print(x)
x = (a > 0) and 10 or 20
print(x)
