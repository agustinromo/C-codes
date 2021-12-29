//Calculadora básica
#include<stdio.h> 
#include<stdlib.h>
float n1,n2,n3,a=0;
char symbol;
void human();
void suma();
void resta();
void mult();
void div(); 
void clean();
void op(); //operación 
int main()
{
	while(true){
   {
	human();
    }
}
	//getch();  
}
void op()
{
	switch(symbol){
		case '+': suma(); 
		break; 
		case '-': resta();
		break;
		case'*': mult();
		break; 
		case'/': div();
		break; 
		case'c': clean();
		break;
		default: printf("syntax err");
	  } 
}
void suma()
{
	n3 = n1+n2; 
	printf("%f",n3); 
}
void resta()
{
	n3 = n1-n2;
	printf("%f",n3);
}
void mult()
{
	n3=n1*n2;
	printf("%f",n3);
}
void div()
{
	n3=n1/n2; 
	if(n2 == 0)
	{
		printf("Error en la matrix");
	}
	else
	{
		printf("%f",n3);
	}
}
void clean()
{
	system ("cls");
}
void human()
{
	if(a){
			n3=a;
			scanf("%f%c%f",&a,&symbol,&n2); //esto está mal, corrígelo por favor 
			op();
		}
		else{
			scanf("%f%c%f",&n1,&symbol,&n2);//si hago una operación sin la función ans de la calcu
			op();
		} 
}

