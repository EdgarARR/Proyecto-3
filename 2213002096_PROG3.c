#include <math.h>
#include <stdio.h>
int main()
{
double PI = M_PI;
float ladocuadrado, perimetrocuadrado, areacuadrado, perimetrocirculo, radiocirculo, areacirculo, ladorectangulo, ladorectangulo2, arearectangulo, perimetrorectangulo;

printf("Introduzca el lado del cuadrado:");
scanf("%f", &ladocuadrado);

perimetrocuadrado= ladocuadrado*4;
printf("\nEl perimetro del cuadrado es de: ");
printf("%.2f", perimetrocuadrado);

areacuadrado= ladocuadrado*ladocuadrado;
printf("\nEl area del cuadrado es de: ");
printf("%.2f", areacuadrado);	


printf("\n\nIntroduzca el radio del circulo:");
scanf("%f", &radiocirculo);

perimetrocirculo=2*PI*radiocirculo;
printf("\nEl perimetro del circulo es de: ");
printf("%.2f", perimetrocirculo);

areacirculo= PI*(radiocirculo*radiocirculo);
printf("\nEl area del circulo esde; ");
printf("%.2f", areacirculo);


printf("\n\nIntroduzca el valor de la base del rectangulo:");
scanf("%f", &ladorectangulo);
printf("\nIntroduzca el valor de la altura del rectangulo:");
scanf("%f", &ladorectangulo2);

perimetrorectangulo=ladorectangulo*2+ladorectangulo2*2;
arearectangulo=ladorectangulo*ladorectangulo2;

printf("\nEl perimetro del rectangulo es de: ");
printf("%.2f", perimetrorectangulo);

printf("\nEl area del rectangulo es de: ");
printf("%.2f", arearectangulo);
return 0;

}
