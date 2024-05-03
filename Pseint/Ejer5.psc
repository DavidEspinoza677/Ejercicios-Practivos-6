Algoritmo Ejer5
    Definir nota, sumaNotas, aprobados, reprobados Como Entero
    Definir contador Como Entero
    Definir promedio Como Real
	
    sumaNotas <- 0
    aprobados <- 0
    reprobados <- 0
	
    Para contador <- 1 Hasta 8 Hacer
        Escribir "Ingrese la nota del estudiante ", contador, ":"
        Leer nota
        sumaNotas <- sumaNotas + nota
		
        Si nota >= 60 Entonces
            aprobados <- aprobados + 1
        Sino
            reprobados <- reprobados + 1
        Fin Si
    Fin Para
	
    promedio <- sumaNotas / 8
	
    Escribir "Estudiantes aprobados:", aprobados
    Escribir "Estudiantes reprobados:", reprobados
    Escribir "Promedio general de la clase:", promedio
	
FinAlgoritmo
