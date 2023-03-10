''' "Laboratorio 4"
Author: Rosa Esmeralda Flores Harrison
date: 10-03-2023
Description: Descripción de los tipos de datos en python
Param: [nombre] [tipo]
version: 2.00
name:resultado
return: valor entero

Name: Suma
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description: Imprima la suma de dos valores solo si son pares, de lo conrario imprimirá que no son pares
Param:def

Name: Resta 
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la resta  de dos numeros dados solo si son multiplos de 5, de lo contrario imprimira en pantalla que no son impares"
Param:def

Name: Division
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la division  de dos numeros dados solo si su division no tiene residuo, de lo contrario imprimira en pantalla que no es una division exacta"
Param:def

Name: Multiplicacion
Author: Rosa Esmeralda Flores Harrison
Date: 10-03-2023
Description:Imprima la multiplicacion  de dos numeros dados solo si son mayores a 10, de lo contrario imprimira en pantalla que los valores dados no son mayores a 10"
Param:def
'''

def suma ():

    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))

    if num1%2==0 and num2%2==0:
        adicion=num1 + num2
        print(f"\nLa suma de {num1} + {num2} 1es: {adicion}\n")

    else:
        print("\nLos valores dados no son pares\n")
    
def resta():

    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))


    if num1%5==0 and num2%5==0:
        diferencia= int (num1 - num2)
        print("\nLa diferencia de {} - {} es: {}\n".format(num1,num2,diferencia))

    else:
        print("\nLos valores dados no son impares\n")

def division():

    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))

    if num1%num2==0:
        cociente= num1 / num2
        print(f"\nLa division de  {num1} /  {num2}  es: {cociente}\n")

    else:
        print("\nLa division no es exacta\n")

def multiplicacion():

    num1=int(input("\nDigite un valor:"))
    num2=int(input("\nDigite  otro valor:"))
        
    if num1 > 10 and num2 > 10:
        producto= num1 * num2
        print(f"\nLa multiplicacion de  {num1} *  {num2}  es: {producto}\n")
        
    else:
        print("\nAmbos valores dados deben ser pares\n")

print("Bienvenido al menú seleccione una opción \n")
print("\n1)Suma\n")
print("\n2)Resta\n")
print("\n3)Division\n")
print("\n4)Multiplicacion\n")

opcion=int(input(":")) #Entrada que se le solicita al usuario
#simulacion de un switch case
if opcion==1:
     suma()

elif opcion==2:
     resta()

elif opcion==3:
     division()

else:
     multiplicacion()
     
#---------------------INSTRUCCIONES-----------------------
'''
explique: 
    1. ¿Qué es lo que hace el código en un comentario antes de modificarlo?
       R= El código contiene un comentario que describe la función "printMenu" y proporciona información 
       sobre los parámetros de entrada y la descripción de la función en sí. También indica la fecha y el 
       nombre del autor.
    
    2. ¿Cuál es la sintaxis de un while?
       R= while (condición):
       #código a ejecutar mientras la condición sea verdadera
       La condición es una expresión booleana que se evalúa en cada iteración del ciclo. Si la condición 
       es verdadera, se ejecuta el código dentro del while; de lo contrario, el ciclo se detiene y el 
       programa continúa.
    
    3. ¿Exite switch en python?
       R= En Python no existe un switch como en otros lenguajes de programación. En su lugar, se utiliza 
       una de declaraciones if-elif-else para manejar múltiples opciones en una estructura de control.      
    
    4. ¿Qué es un elif?
       R= Elif es una abreviatura de "else if" y se utiliza en una estructura de control if-elif-else para 
       agregar más condiciones después de una declaración if. Si la condición en la declaración if es falsa, 
       se evalúa la condición en la primera declaración elif. Si esa condición es verdadera, se ejecuta el 
       código dentro de esa declaración elif; de lo contrario, se pasa a la siguiente declaración elif, y así 
       sucesivamente
    
    5. ¿Qué función de se ejecuta al correr el script?
       R= La función que se ejecuta al correr el script es "main". Esto se debe a la línea "if name == "main":", 
       que verifica si el script se está ejecutando directamente y no se está importando como módulo. Si es así, 
       llama a la función "main".

Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
Guarde y suba su código a un repositorio.
'''
