##4
#1
print("#1")
a=int(input("Введите одну из сторон прямоугольника: "))
b=int(input("Введите другую сторону прямоугольника: "))
print("Его площадь: ", a*b)
print("Его периметр: ", (a+b)*2)
#2
print("#2")
d=int(input("Введите диаметр окружности: "))
print("Длина окружности: ", d*3.14)
#3
print("#3")
a=int(input("Введите первое число: "))
b=int(input("Введите второе число: "))
print("Их среднее арифметическое: ", (a+b)/2)
#4
print("#4")
a=int(input("Введите первое число: "))
b=int(input("Введите второе число: "))
aq=a**2
bq=b**2
print("Сумма их квадратов: ", aq+bq)
print("Разность их квадратов: ", aq-bq)
print("Произведение их квадратов: ", aq*bq)
print("Частное их квадратов: ", aq/bq)
#5
print("#5")
a=int(input("Введите первое число: "))
b=int(input("Введите второе число: "))
ma=a
mb=b
if ma<0:
    ma=ma*(-1)
if mb<0:
    mb=mb*(-1)
print("Сумма их модулей: ", ma+mb)
print("Разность их модулей: ", ma-mb)
print("Произведение их модулей: ", ma*mb)
print("Частное их модулей: ", ma/mb)
