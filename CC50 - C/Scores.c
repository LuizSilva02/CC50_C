#include <stdio.h>
#include <cs50.h>


const int total = 4;

int main(void)
{
    //int total = get_int("Total number of scores: ");

    int scores[total];
    for(int i = 0; i < total; i ++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(total, scores));
}


float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) length;
}