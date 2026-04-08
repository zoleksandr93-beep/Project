n, m = map(int,input("Кількість рядків n і стовпців m:").split())

arr=[]

for i in range(n):
    print("Введіть", m, "чисел для рядка", i + 1, "(через пробіл):")
    arr.append(list(map(int, input().split())))


max_sum=sum(arr[0])
min_sum=sum(arr[0])
max_index=0
min_index=0

for i in range(1, n):
    current_sum = sum(arr[i])

    if current_sum > max_sum:
        max_sum = current_sum
        max_index = i

    if current_sum < min_sum:
        min_sum = current_sum
        min_index = i


print("Індекс рядка з максимальною сумою:", max_index)
print("Максимальна сума:", max_sum)
print("Індекс рядка з мінімальною сумою:", min_index)
print("Мінімальна сума:", min_sum)