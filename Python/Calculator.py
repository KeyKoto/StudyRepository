def calculator(a, b, operation):
    res = 0
    if operation == 1:
            res = a + b
    elif operation == 2:
            res = a - b
    elif operation == 3:
            res = a * b
    elif operation == 4:
            res = a / b
    return res

dejstvie = int(input("Выберите операцию: 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление: "))
num1 = float(input("Введите первое число: "))
num2 = float(input("Введите второе число: "))

print(calculator(a=num1, b=num2, operation=dejstvie))

