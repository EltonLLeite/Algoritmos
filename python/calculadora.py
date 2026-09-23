# Calculadora em python

import math

a = float(input("Digite o primeiro número: "))
b = float(input("Digite segundo número: "))

print("\n***MENU DE OPERAÇÕES***")
print("1 - Adição")
print("2 - Subtração")
print("3 - Multiplicação")
print("4 - Divisão")
print("0 - Sair")
opcao = int(input("Opção: "))

match opcao:
    case 1:
        resultado = a + b
        print(f"{a} + {b} = {resultado}")
    case 2:
        resultado = a - b
        print(f"{a} - {b} = {resultado}")
    case 3:
        resultado = a * b
        print(f"{a} * {b} = {resultado}")
    case 4:
        resultado = a / b
        print(f"{a} / {b} = {resultado}")
