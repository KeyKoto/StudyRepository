# Сортировка выбором.
import random

len = random.randint(5, 10)
array = [random.randint(-10, 10) for i in range(len)]
print(len)
print(array)

intForChanging = 0

len = len - 1
i = len
counter = 0

while len > 0:
    max = array[0]
    id_max = 0
    while i > 0:
        if max < array[i]:
            max = array[i]
            id_max = i
        i -= 1
    intForChanging = array[len]
    array[len] = max
    array[id_max] = intForChanging
    len -= 1
    i = len
print(array)
