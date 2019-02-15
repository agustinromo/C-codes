
#include <stdio.h>
int hora;
int minutos;
void minutillo(int min);
void horilla(int hor); 
int main()
{
	printf ("Dame el numero de hora en formato de 24hrs\n");
	scanf ("%d",&hora);
	horilla(hora);
	printf ("Ahora dame los minutos :3\n");
	scanf ("%d", &minutos);
	minutillo(minutos);
	if (hora>12 && hora<25)
	{
		hora = hora-12;
		printf ("Distinguido caballero su hora es %d : %d pm\n", hora, minutos);
	}
	else if (hora <= 12)
	{
		printf ("Amable caballero su hora es %d : %d am\n", hora, minutos);
	}

	return 0;
}

void minutillo(int min)

{
	if (min > 59)
	{
		printf ("no mame mi .|.\n");
		printf ("Ahora dame los minutos bien :3\n");
		scanf ("%d",&minutos);
		minutillo(minutos);
	}
}


void horilla(int hor)
{
	if (hor >= 25)
	{
		printf ("no mame mi .|.\n");
		printf ("Ahora dame las horas bien :3\n");
		scanf ("%d",&hora);
		horilla(hora);
	}
 
 }

