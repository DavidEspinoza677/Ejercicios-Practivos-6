Algoritmo Ejer6
    Definir n, sumaPares Como Entero
	
    sumaPares <- 0
	
    Para n <- 100 Hasta 200 Hacer
        Si n MOD 2 = 0 Entonces
            sumaPares <- sumaPares + n
        Fin Si
    Fin Para
	
    Escribir "La suma de los números pares entre 100 y 200 es:", sumaPares
	
FinAlgoritmo
