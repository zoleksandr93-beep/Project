N, M = map(int,input("Кількість рядків n і стовпців m:").split())

arr=[]

top = 0
down = N - 1
left = 0
right = M - 1

for i in range(N):
    row = []

    for j in range(M):
        row.append(0)

    arr.append(row)

counter = 0

while left <= right and top <= down:

    for j in range(left, right + 1):
        arr[top][j] = counter
        counter += 1
    top += 1


    for i in range(top, down + 1):
        arr[i][right] = counter
        counter += 1
    right -= 1


    if top <= down:

        for j in range(right, left - 1, -1):
            arr[down][j] = counter
            counter += 1
        down -= 1

    if left <= right:

        for i in range(down, top - 1, -1):
            arr[i][left] = counter
            counter += 1
        left += 1

for row in arr:
    print(row)