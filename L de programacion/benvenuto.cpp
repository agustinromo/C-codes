#include <stdio.h> 
#include <conio.h> 
void bienvenido(char nomb[]); 
char nombre[30]; 
main() 
{ 
     printf("Buonasera, Come ti chiami?\n"); 
     scanf("%S", &nombre); 
     bienvenido(nombre); 
} 
void bienvenido(char nomb[]) 
{ 
     printf("Ciao %S Benvenuto al linguaggio C e C++ :3\n", nombre); 
     getch();  
}
