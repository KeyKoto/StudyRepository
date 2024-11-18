#Нахождение минимального числа в рандомном массиве чисел.
import random

array_size = random.randint(5,10)
print("Длина массива: ", array_size)

random_array = [random.randint(-100, 100) for i in range(array_size)]
print("Массив: ", random_array)

min = random_array[0]

for i in random_array:
    if min > i:
        min = i
    else:
        continue

print("Минимальное число массива: ", min)
