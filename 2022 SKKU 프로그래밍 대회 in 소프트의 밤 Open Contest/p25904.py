#https://www.acmicpc.net/problem/25904
a = list()
b = list()

input1 = input().split()
for i in input1:
    a.append(int(i))
input2 = input().split()
for i in input2:
    b.append(int(i))

curr_cnt = a[1]
i = 1
while (True):
    if (curr_cnt > b[i - 1]):
        print(i)
        break
    else:
        i += 1
        curr_cnt += 1
        if (i > a[0]):
            i = 1