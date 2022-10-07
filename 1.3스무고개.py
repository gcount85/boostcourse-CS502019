# 스무고개 슈도코드
# get the guess
# set the count
# if the guess is the number
#     quit
# elif the guess is smaller than the number
#     print smaller
# elif the guess is bigger than the number    
#     print bigger
# add 1 to the count
# if count is 20
#     quit
# else if count is not 20
#     go back to step 1

number = 40
count = 0

for i in range(20):
    guess = int(input())
    if guess == number:
        print("정답!")
        break
    elif guess < number:
        print("smaller")
    elif guess > number:
        print("bigger")
    count += 1
    if count == 20:
        break

