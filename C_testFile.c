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
    return x*y;
}
float temp(int reading){
    float scale = .9;
    float temp  = reading*scale;
    return temp;
}

char* hello(){
    char* str = malloc(sizeof("hello"));
    str = "hello";
    return str;
}
