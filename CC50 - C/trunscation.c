#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_long("X: ");

    int y = get_long("Y: ");

    float z = (float)x / (float)y

    printf("%f\n", z);
}