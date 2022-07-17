#include <stdio.h>
#include <cs50.h>

int main(void){

int i = get_int("How many scores to be used ? :");
float scores[i];
int sum = 0;

while (i != 0){
    scores[i] = get_float("Score %i : " , i);
    sum = sum + scores[i];
    i--;

}




float average = sum / 3.0;

printf("Average : %f\n" , average);
