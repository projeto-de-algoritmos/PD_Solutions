def is_sum_of_two_squares(n):
    for i in range(0, int(n**0.5)+1):
        for j in range(0, int(n**0.5)+1):
            if i*i + j*j > n:
                break

            dp[i*i + j*j] = True


n = []
# for i in range(10000):
#     n.append(int(i))

try:
    while True:
        n.append(int(input()))
except EOFError:
    pass

max_ = max(n)
dp = [False] * (max_ + 1)
dp[0] = True

is_sum_of_two_squares(max_)


for i in n:
    # print(i)
    if dp[i] == False or i < 0:
        print("NO")
        
    else:
        print("YES")