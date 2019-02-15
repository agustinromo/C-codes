#include <stdio.h> 
#include <stdlib.h> 
int a,b,c;
int main() 
{ 
    printf("Escribe el numero de la funcion pa rifarmela mi chingon:\n 1._ y=3x+5\n 2._ 4x2+2x\n 3._ y=2x\n");  
    scanf("%d",&c); 
    printf("Escribe el numero limite:  ");
    scanf("%d",&b); 
    printf("  x           y        \n"); 
    switch(c) 
        { 
        case 1: 
            while(a != b) 
            { 
                printf("%d               %d\n",a, 3*a + 5); 
                a++; 
            } 
            break; 
        case 2: 
            while(a != b) 
			{ 
			    printf("%d               %d\n",a, 4*a*a + 2*a); 
		        a++;
			}   
			break; 
		case 3: 
		    while(a != b) 
		    { 
		        printf("%d               %d\n",a, 2*a); 
		        a++;
		    } 
		    break; 
		    default: printf("No seas idiota\n"); 
		    break; 
		    
       }
        system("pause"); 
        return 0;
}
