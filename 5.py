##5
#1
print("#1")
x1=float(input("Введите Х координату первой точки: "))
y1=float(input("Введите У координату первой точки: "))
x2=float(input("Введите Х координату второй точки: "))
y2=float(input("Введите У координату второй точки: "))
print("Расстояние между ними: ", ((x2-x1)**2+(y2-y1)**2)**0.5)
#2
print("#2")
a=float(input("Введите координату точки A: "))
b=float(input("Введите координату точки B: "))
c=float(input("Введите координату точки C: "))
ac=abs(c-a) #абс - модуль
bc=abs(b-c)
print("Длина AC: ", ac)
print("Длина BC: ", bc)
print("Сумма AC и BC: ", ac+bc)
#3
print("#3")
a=float(input("Введите координату точки A: "))
b=float(input("Введите координату точки B: "))
c=float(input("Введите координату точки C, расположенной между А и В: "))
ac=abs(c-a)
bc=abs(b-c)
print("Произведение длин отрезков AC и BC: ", ac*bc)
#4
print("#4")
x1=float(input("Введите Х координату первой точки прямоугольника: "))
y1=float(input("Введите У координату первой точки прямоугольника: "))
x2=float(input("Введите Х координату противоположной точки прямоугольника: "))
y2=float(input("Введите У координату противоположной точки прямоугольника: "))
rx=abs(x2-x1)
ry=abs(y2-y1)
print("Периметр прямоугольника: ", (rx+ry)*2)
print("Площадь прямоугольника: ", rx*ry)
#5
print("#5")
x1=float(input("Введите Х координату первой точки треугольника: "))
y1=float(input("Введите У координату первой точки треугольника: "))
x2=float(input("Введите Х координату второй точки треугольника: "))
y2=float(input("Введите У координату второй точки треугольника: "))
x3=float(input("Введите Х координату третей точки треугольника: "))
y3=float(input("Введите У координату третей точки треугольника: "))
ab=((x2-x1)**2+(y2-y1)**2)**0.5
ac=((x3-x1)**2+(y3-y1)**2)**0.5 
bc=((x2-x3)**2+(y2-y3)**2)**0.5
p=(ab+ac+bc)/2 #полупериметр
s=(p*(p-ab)*(p-ac)*(p-bc))**0.5 #формула герона
print("Периметр треугольника: ", p*2) #превратили полупериметр в периметр
print("Площадь треугольника: ", s)
