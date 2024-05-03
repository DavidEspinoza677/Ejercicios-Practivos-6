Algoritmo Ejer1
	Definir n, suma , contador Como Real;
	Escribir "Dame un numero natural:";
	Leer n
	Suma <-0
	contador <-1
	
	Mientras contador <= n Hacer
		suma <- suma + contador
		contador <- contador +1
	Fin Mientras
	
	Escribir "La suma de los numeros naturales de 1 hasta " , n," es " , suma
FinAlgoritmo
