# Entrada de datos

Ya aprendimos todo lo relacionado a salida de datos con printf, con todo lo que eso conlleva (sintaxis, especificadores de formato, etc).

Ahora toca integrar esos conceptos con lo que llamamos "Entrada de datos".

## ¿Qué es eso?

La entrada de datos vendrá de la mano de muchas funciones, tales como  *scanf* o *getchar*, dichas funciones tomará datos vía teclado y guardarán el dato en una dirección de memoria determinada y en un formato determinado.


## getchar ()

En C la función getchar es una función de la biblioteca estándar  stdio.h (vieja amiga) que toma un único caracter de tipo unsigned char  de la entrada estándar, puede ser vía teclado o vía lectura de otro archivo y devuelve un integer.

### ¿Cómo lo usamos?

``` c

int main()
{

    int character;

    character = getchar(); //cargamos el caracter vía teclado
 

    printf("The entered character is : %c", character); //mostramos el caracter ingresado

    return 0;
}

```

También si queremos podemos usar la función putchar () para mostrar ese caracter que hemos ingresado.
Un ejemplo de uso de esta función.

``` c

int main()
{

    int character;

    printf("Enter any character between a-z please");

    character = getchar();
 

    printf("The entered character is : ");

    putchar(character);

    return 0;
}

```

Una forma típica y sana para hacer que un usuario ingrese por teclado varios caracteres es usar un loop en donde se le pida al usuario ingresar varios caracteres y una vez que este toque el "Enter" se corte dicho loop, recordar que el usuario toca esa tecla pero que para C lo que guardamos es el '\n'

Ejemplo:

``` c

int c;
while((c = getchar()) != '\n' && c != EOF)
{
    printf("%c", c);
}

```

Cuando agregamos que c NO pueda ser EOF estamos diciendo que se termine el ingreso de datos (cuando se termina de ingresar los datos la función getchar nos tira un EOF.

En C, EOF es una constante de tipo entero (normalmente -1) y es el retorno que envían distintas funciones de extracción de información desde archivos al llegar a un final de archivo y no existir más datos.

## scanf()

Similar a getchar pero NO se limita solo a caracteres.

` scanf("%X", &variable); `

Donde %X es el especificador de formato en C. Es una forma de decirle al compilador qué tipo de datos hay en una variable y & es el operador de dirección en C, que le dice al compilador que cambie el valor real de *variable*, almacenado en este dirección en la memoria.


Nosotros somos los que definimos el formato y en nombre de esa dirección.

Por ejemplo se puede definir como int

``` 
scanf("%d", &Variable);
printf("%d", Variable);

```

Y a partir de esto luego podemos hacer programas más complejos


```c

// C program to show input and output
#include <stdio.h>
int main()
{
    // Declare the variables
    int num;
    char ch;
    float f;
    // --- Integer ---
    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);
    // Output the integer
    printf("\nEntered integer is: %d", num);
    // --- Float ---
     //For input Clearing buffer
      while((getchar()) != '\n');
    // Input the float
    printf("\n\nEnter the float: ");
    scanf("%f", &f);
    // Output the float
    printf("\nEntered float is: %f", f);
    // --- Character ---
    // Input the Character
    printf("\n\nEnter the Character: ");
    scanf("%c", &ch);
    // Output the Character
    printf("\nEntered character is: %c", ch);
    return 0;
}


```
