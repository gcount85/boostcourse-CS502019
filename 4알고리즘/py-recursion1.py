# 중첩 반복문을 재귀 함수를 이용하여 바꿀 수 있다! 

height = int(input("Height: "))

def draw(h):
    if h == 0:
        return
    draw(h-1) 
    print("*"*h)

draw(height)

