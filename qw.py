import sys

n = list(map(int, sys.stdin.readline().split())) 
print(n)

# 1 2 3 4 5
# [1, 2, 3, 4, 5]

#주피터에서는 stin이 제대로 구성되어 잇지 않기 때문에 이를 실행하면 입력을 받지 
#못하고 항상 빈 문자열을 반환함