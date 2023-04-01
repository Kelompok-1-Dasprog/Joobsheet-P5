#include <stdio.h> 

int main (){
int var, var1, var2;
int* varPtr = &var;
int* varPtr1 = &var1;
int* varPtr2 = &var2;
printf("\nalamat dari var:%p", &var);
printf("\nNilai dari varPtr :%d", *varPtr);
printf("\nalamat dari var1 :%p", &var1);
printf("\nNilai dari varPtr1 :%d", *varPtr1);
printf("\nalamat dari var2:%p", &var2);
printf("\nNilai dari varPtr2 :%d", *varPtr2);
}


