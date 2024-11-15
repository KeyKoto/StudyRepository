#Нахождение минимального числа в рандомном массиве чисел.
import random

array_size = random.randint(5,10)
print(array_size)

random_array = [random.randint(1, 100) for i in range(array_size)]
print(random_array)

min = random_array[0]
array_size -= 1

for i in range(array_size):
    if random_array[i] > random_array[i+1]:
        min = random_array[i+1]
    else:
        continue

print(min)
