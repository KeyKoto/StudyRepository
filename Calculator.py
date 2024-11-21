def calculator(operation):
    if operation == 1:
        return lambda a, b: a + b
    elif operation == 2:
        return lambda a, b: a - b
    elif operation == 3:
        return lambda a, b: a * b
    elif operation == 4:
        return lambda a, b: a / b


dejstvie = int(input("Выберите операцию: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление: "))
num1 = float(input("Введите первое число: "))
num2 = float(input("Введите второе число: "))

result = calculator(dejstvie)
result_client = result(num1, num2)
print(result_client)
