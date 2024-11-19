# Сортировка пузырьком от меньшего к большему.
import random

array_size = random.randint(5, 10)
print("Длина массива: ", array_size)

array = [random.randint(-10, 10) for i in range(array_size)]
print("Массив: ", array)

intForChanging = 0
i = 1
len = 0
for len in range(1, array_size):
    for i in range(1, array_size):
        if array[i - 1] > array[i]:
            intForChanging = array[i - 1]
            array[i - 1] = array[i]
            array[i] = intForChanging
            i += 1
    len = i
print("Отсортированный массив от меньшего к большему:", array)