#include <stdio.h>

int func1 (int x);
int func2 (int y);



void main()
{
    int a, b,c;
    a = func1(10);
    b = func2(20);
    c = a + b;
    
    printf("%d\n",c);
    
    
}




int func1 (int x)
{
    return x;
    
}

int func2 (int y)
{
    return y;
    
}