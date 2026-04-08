N, M = map(int, input("Кількість рядків N і стовпців M: ").split())

arr = []
for i in range(N):
    print("Введіть", M, "чисел для рядка", i + 1, "(через пробіл):")
    arr.append(list(map(int, input().split())))

sums = []
for i in range(N):
    current_sum = 0
    for number in arr[i]:
        current_sum += number
    sums.append(current_sum)

indices = list(range(N))

for i in range(N):
    swapped = False
    for j in range(N - i - 1):
        if sums[indices[j]] > sums[indices[j + 1]]:

            indices[j], indices[j + 1] = indices[j + 1], indices[j]
            swapped = True
    if not swapped:
        break

print("Матриця, відсортована за сумою рядків:")
for idx in indices:
    print(arr[idx],"(Оригінальний індекс:", idx, ", Сума:", sums[idx],")")