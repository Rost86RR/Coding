#include <stdio.h>
#include "cs50.h"

char *GetString(void);
void PrintName(const char *name);

int main(void)
{
    char *name = GetString();  
    PrintName(name); 
    free(name); 
    return 0;
}

void PrintName(const char *name){
    printf("Hello, %s!\n", name);
}