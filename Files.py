class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    def set_age(self, age):
        if 0 < age < 100:
            self.__age = age
        else:
            print("Недопустимый возраст.")
    def display_info(self):
        print(f"Name: {self.__name}. Age: {self.__age}.")

bob = Person("Bob", 89 )
tom = Person("Tom", 12)

tom.display_info()
bob.display_info()