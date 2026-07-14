#람다함수 
add = lambda a, b: a + b
result = add(3, 4)
print(result)

#일반함수
def add(a, b):
    '''
    받은 값을 더해서 리턴하는 함수입니다.
    '''
    return a + b
print(add(3, 4))

#함수 설명을 보여주는 기능
print(add.__doc__)