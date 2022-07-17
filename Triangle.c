#include <stdio.h>
#include <cs50.h>

bool valid_triangle(int side0 ,int side1 ,int side2);
int main(void){
     int side0 = get_int("Side 1 : ");
     int side1 = get_int("Side 2 : ");
     int side2 = get_int("Side 3 : ");
     bool validity = valid_triangle(side0 ,side1 ,side2);
    if (validity == true){
        printf("It's possible to make a triangle with these proportions ! ");
    }
    else {
        printf("It's not possible to make a triangle with these proportions ! ");
    }
}
bool valid_triangle(int side0 ,int side1 ,int side2){
    if (side0 > 0 && side1 > 0 && side2 > 0 )
    {
        int sum = side0 + side1;
        if (sum>side2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
