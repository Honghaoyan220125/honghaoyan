#include <stdio.h>
short bitoperate(short a, short b, char c) 
{
    switch(c)
  {
        case '&': return (a & b);
        case '|': return (a | b);
        case '^': return (a ^ b);
        case '<': return (a << b);
        case '>': return (a >> b);
        default: return 0;
    }
}
void printbinary(short n) 
{
    int i;
    for(i=15; i>=0; i--) printf("%d", (n>>i)&1);
}

void printformulas(short a, short b, char c)
 {
    printf("\n");
    printbinary(a);
    printf(" %c \n ", c);
    printbinary(b);
    printf(" = \n");
    printbinary(bitoperate(a, b, c));
}
int main()
 {
    short x = 6289, y = 169;
    printformulas(x, y, '&');
    printformulas(x, y, '|');
    printformulas(x, y, '^');

    x = 100, y = 3;
    printformulas(x, y, '<');
    printformulas(x, y, '>');

    system("pause");
    return 0;
}
