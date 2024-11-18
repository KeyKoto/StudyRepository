#Сортировка выбором.
import random

array_size = random.randint(5,10)
print("Длина массива: ", array_size)

random_array = [random.randint(-100, 100) for i in range(array_size)]
print("Массив: ", random_array)

min = random_array[0]
counter = 0
index_min = 0
for i in random_array:
    if min > i:
        min = i
        index_min = counter
    else:
        continue
    counter += 1
print(min, index_min)