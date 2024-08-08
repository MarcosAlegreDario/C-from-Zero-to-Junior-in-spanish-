/*Ejemplo 3, funciones que devuelven un valor real*/
#include <stdio.h>  
  
double raiz(float a, float b);       /*declaro la function raiz*/
double valor_absoluto(float a, float b); /*declaro la function valor_absoluto*/
int main()  
   {  
       
       float a, b;  
       printf("\n\n\t\tBIENVENIDO\n\n");  
       printf("Ingrese el valor de A, por favor:\n");  
       scanf("%f", &a);  
       printf("Ahora el valor de B:\n");  
       scanf("%f", &b);  
       printf("\n\nEl resultado de la raiz cuadrada de: %.2f + %.2f es: %.2f\n\n", a,b,raiz(a,b));  
       printf("\n\nEl valor absoluto entre |%.2f‐%.2f| es igual a: %.2f\n\n" ,     
       a,b,valor_absoluto(a,b)); 
       return 0;  
   }  
double raiz(float a, float b)      /*definicion de la funcion que devuelve un valor real*/
   {  
    float x;  
    double y;  
    x=a+b;  
    y=sqrt(x);         /* sqrt pertenece a la librería math*/
    return (y);         /*valor real devuelto*/
   }  
   double valor_absoluto(float a, float b)  /*definicion de la funcion que devuelve un valor real*/
   {  
     float x;  
     double y;  
     x=a‐b;  
     y=fabs(x);         /* fabs pertenece a la librería math*/
     return (y);        /*valor real devuelto*/
   }
