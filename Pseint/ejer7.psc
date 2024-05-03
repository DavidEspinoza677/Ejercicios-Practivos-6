Algoritmo Ejer7	
	Definir long Como Entero;
	
	Definir array1, array2, array3, i Como Entero;
    Dimension array1[100], array2[100], array3[100];
    
    Escribir "Ingresa 2 vectores para calcular su suma...";
    Escribir "Dime la longitud del vector: ";
    Leer long;
	
    Para i<-0 Hasta long-1 Con Paso 1 Hacer
        Escribir "Arreglo 1";
        Escribir "Dime un numero: ";
        Leer array1[i];
    FinPara
	
    Para i<-0 Hasta long-1 Con Paso 1 Hacer
        Escribir "Arreglo 2";
        Escribir "Dime un numero: ";
        Leer array2[i];
    FinPara
	
    Escribir "";
    Para i<-0 Hasta long-1 Con Paso 1 Hacer
        Si i = long-1 Entonces
            array3[i] <- array1[i] + array2[i];
            Escribir array3[i], Sin Saltar;
        Sino
            array3[i] <- array1[i] + array2[i];
            Escribir array3[i], ", ", Sin Saltar;
        FinSi
    FinPara
FinProceso