#include <stdio.h>
#include <conio.h>

int i,sumapar,mayor2,acum,mayor,lel,ingresar;
main()
{
	printf("CUANTOS NUMEROS VAS A INGRESAR?\n");
	scanf("%d",&ingresar);
int lista[100],i;
for (i=0;i<ingresar;i++)
    {
    	printf("DAME EL NUMERO #%d\n",i+1);
        scanf("%d",&lista[i]);
    }
acum=0;
for (i=1;i<ingresar;i+=2)
{
	
	acum=acum+lista[i];
}

printf("LA SUMA DE LOS NUMEROS QUE OCUPAN UNA POSICION PAR ES \xf0\xf0 %d \xf0\xf0\n",acum);
mayor=0;
for(i=0;i<ingresar;i+=2)
{
	if (lista[i]>mayor)
	{
		mayor=lista[i];
	}
		
}
printf("EL NUMERO MAYOR QUE OCUPA POSICION IMPAR ES \xf0\xf0 %d \xf0\xf0\n",mayor);
mayor2=0;
for(i=1;i<ingresar;i+=2)
{
	if (lista[i]>mayor2)
	{
		mayor2=lista[i];
	}
		
}
for(i=1;i<19;i+=2)
{
		if (lista[i]==mayor2)
	{
		lel=i;
	}
		
}
printf ("\nLA POSICION DEL MAYOR NUMERO PAR ES \xf0\xf0 %d \xf0\xf0\n",lel+1);
}
