#include <stdio.h> 
#include <conio.h> 

int total, j = 0, arreglo[30], sumatotal, sumapar, sumaimpar; 
int main() 
{ 

    printf("Ingresa la cantidad de arreglo de 30 numeros\n"); 
	scanf("%d", &total); 
	printf("Dame los numeros\n"); 
	for(j = 0; j<total; j++) 
	{ 
	   scanf("%d", &arreglo[j]); 
	   
	}  
	for(j = 0; j<total;j++){ 
	    sumatotal=sumatotal + arreglo[j]; 
	}
    printf("La suma de todo es %d\n", sumatotal); 
    for(j = 0; j<total;j++){ 
        if(arreglo[j]%2==0)
        sumapar=sumapar + arreglo[j]; 
        else 
        sumaimpar = sumaimpar + arreglo[j]; 
    }  
    printf("La suma de los numeros impares es %d\n", sumaimpar); 
    printf("La suma de los numeros pares es %d\n", sumapar); 
} 
 
