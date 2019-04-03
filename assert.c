#include <stdio.h>
#include <assert.h>
#include "calculator.c"

int main()
{
    assert(calc('+',15,10)==25);
    printf("passed");
    assert(calc('+',15,110)==125);
    printf("\npassed");
    assert(calc('+',-5,-10)==-15);
    printf("\npassed");
    assert(calc('-',5,10)==-5);
    printf("\npassed");
    assert(calc('-',15,-10)==25);
    printf("\npassed");
    assert(calc('-',-5,-20)==15);
    printf("\npassed");
        assert(calc('*',15,10)==150);
    printf("\npassed");
    assert(calc('*',5,-10)==-50);
    printf("\npassed");
    assert(calc('*',-5,-10)==50);
    printf("\npassed");
        assert(calc('/',5,10)==0.5);
    printf("\npassed");
    assert(calc('/',5,-10)==-0.5);
    printf("\npassed");
    assert(calc('/',-5,-10)==0.5);
    printf("\npassed");
    return 0;
    
}
