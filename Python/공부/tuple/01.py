pos = (56, 74)
print(pos)
print(pos[0])
print(pos[1])

pos_x, pos_y = pos
print(pos_x, pos_y)

x = 3
y = 6
(x, y) = (y, x) # 튜플 값을 변경하는 것이 아닌 언팩해서 대입하는 것
print(x, y)