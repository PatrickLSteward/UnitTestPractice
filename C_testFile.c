#include <stdio.h>
#include <stdlib.h>


int add(double x, double y){
    return x + y;
}
int subtract(double x, double y){
    return x - y;
}
int divide(double x, double y){
    return x/y;
}
int multiply(double x, double y){
    return x/y;
}

char* hello()
{
    char* str = malloc(sizeof("hello"));
    return str;
}
