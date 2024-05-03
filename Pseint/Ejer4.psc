Algoritmo Ejer4
    Definir nota, sumaNotas, promedio Como Real
    Definir contador Como Entero
	
    sumaNotas <- 0
	
    Para contador <- 1 Hasta 10 Hacer
        Escribir "Nota del estudiante ", contador, ":"
        Leer nota
        sumaNotas <- sumaNotas + nota
    Fin Para
	
    promedio <- sumaNotas / 10
	
    Escribir "El promedio general de la clase es:", promedio
	
FinAlgoritmo
