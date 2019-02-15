#include <stdio.h> 
#include <stdlib.h> 
int a,b,c,d,e; 
int A,B,C,D,E; 
void mayor(int a, int b, int c, int d, int e ); 
void menor(int a, int b, int c, int d, int e ); 
int main() 
{ 
printf("Anota los 5 n\xa3meros para comparar:\n");  
scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);  
mayor(A,B,C,D,E); 
menor(A,B,C,D,E); 
return 0; 
} 
void mayor(int a, int b, int c, int d, int e) 
{ 
     if(a>=b && a>=c && a>=d && a>=e) 
      { 
      printf("el mayor es %d\n",a); 
      } 
else if(b>=a && b>=c && b>=d && b>=e) 
      { 
      printf("El mayor es %d\n",b); 
      } 
else if(c>=a && c>=b && c>=d && c>=e) 
      { 
      printf("El mayor es %d\n", c); 
	  }  
else if(d>=a && d>=b && d>=c && d>=e) 
      { 
      printf("El mayor es %d\n", d); 
      } 
else if(e>=a && e>=c && e>=d && e>=b) 
      { 
      printf("El mayor es %d\n", e);
      } 
} 
void menor(int a, int b, int c, int d, int e) 
{ 
    if(a<=b && a<=c && a<=d && a<=e) 
     { 
     printf("El menor es %d\n", a); 
     }
else if(b<=a && b<=c && b<=d && b<=e) 
     { 
     printf("El menor es %d\n", b); 
     } 
else if(c<=a && c<=b && c<=d && c<=e) 
     { 
     printf("El menor es %d", c); 
     } 
else if(d<=a && d<=b && d<=c && d<=e) 
     { 
     printf("El menor es %d", d);
     } 
else if(e<=a && e<=b && e<=c && e<=d) 
     { 
     printf("El menor es %d\n", e);
     }
 }

