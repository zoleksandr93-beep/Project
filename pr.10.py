n, m = map(int,input("Кількість рядків n і стовпців m:").split())

arr=[]
for i in range(n):
    print("Введіть", m, "чисел для рядка", i + 1, "(через пробіл):")
    arr.append(list(map(int, input().split())))

min_sum = float('inf')
min_idx = -1

for j in range(m):
    col_sum = 0
    for i in range(n):
        col_sum += arr[i][j]

    if col_sum < min_sum:
        min_sum = col_sum
        min_idx= j

print("Індекс стовпця:", min_idx)
print("Елементи стовпця:")
for i in range(n):
    print(arr[i][min_idx])