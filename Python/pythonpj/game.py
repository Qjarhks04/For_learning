import random #random을 불러온다

def gamble(): #함수선언
    print("game.py - coin") # 터미널 창에 프린트한다
    coin_face = random.randrange(0,2) #변수에 0이상 2미만의 난수를 생성하여 넣어준다

    if coin_face == 0: #변수의 값이 0과 같은 경우
        print("성공") #성공이라고 터미널에 출력
        return True # True(1) 값을 리턴합니다
    else: # 변수의 값이 0이 아닐경우
        print("실패") #실패를 터미널에 출력
        return False #False(0) 값을 리턴