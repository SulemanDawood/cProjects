#include <stdio.h>
#include <stdbool.h>
//Function Declaration
int intfunc();
bool boolfunc();
char charfunc();
void typesfunc();
void voidfunc();
void voidfunc1();
void voidfunc2();
void masterfunc();
float floatfunc();


void main()
{

 masterfunc();
    
 
}


/* New function void
*/

void masterfunc()
{
typesfunc();
voidfunc();
    
}





void voidfunc()
{
printf("Hello! This is Suleman\n");
voidfunc1();
voidfunc2();
}

void voidfunc1()
{
printf("Dawood\n");

}

void voidfunc2()
{
printf("Whatever i want\n");

}

void typesfunc()
{
  int a;
  bool b;
  char c;
  float f;
  
   a = intfunc();
   b = boolfunc();
   c = charfunc();
   f = floatfunc();
  
   printf("%d\n", a);
   printf("%c\n", c);
   printf("%d\n", b);   
   printf("%.2f\n", f);
    
    
}


int intfunc()
{
    return 0;
    
    
}

bool boolfunc()
{
   bool x = true;
    //char test = 's';
    return x;
    
    
}

char charfunc()
{
    char x = 's';
    return x;
    
    
}


float floatfunc()
{
float var1 = 3.14;
return var1;
    
}



