#include <stdio.h> 
#include <stdlib.h> 
int dia;   
int main()   
{ 
    while(true) 
    {
    printf("Escribe el dia en numero mi chingon, Escribe el dia en numero\n"); 
    scanf("%d", &dia); 
    switch (dia)
    {
    case 1: printf("El dia es Lunes\n"); 
	        break; 
	case 2: printf("El dia es Martes\n");
	        break; 
	case 3: printf("El dia es Miercles\n"); 
	        break; 
	case 4: printf("El dia es Jueves\n"); 
	        break; 
	case 5: printf("El dia es Viernes\n"); 
	        break; 
	case 6: printf("El dia es Sabadaba\n"); 
	        break; 
	case 7: printf("El dia es Dominguini\n"); 
	        break; 
	default: printf("No mame culo ese dia no existe\n"); 
    return 0; 

 } 
} 
    
    system ("pause"); 
} 
     

  
