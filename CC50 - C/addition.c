#include <cs50.h>
#include <stdio.h>

int main(void){
    int x = get_long("X: ");

    int y = get_long("Y: ");

    printf("%li\n", x+y);
}