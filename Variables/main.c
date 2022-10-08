#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Integer (int): stores whole numbers
    int a = 20;
    a = 19;
    // Float (float): stores decimal values
    float b = 20.03f;
    b = 19.28;
    // Character (char): stores characters
    char c = 'A';
    //c = 'D';
    char d = 'D';

    // To output variable we use
    // for int
    printf("%d\n", a);
    // for float and double
    printf("%f\n", b);
    //for char (%s, for strings)
    printf("%c\n", c);


    int age = 19;
    printf("I am %d years old\n", age);

    printf("The first and fourth letter of my name is %c and %c", c, d);


   // int	    2 or 4 bytes	Stores whole numbers, without decimals
   // float     4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
   // double	8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
  //  char	    1 byte	        Stores a single character/letter/number, or ASCII values

    return 0;
}
