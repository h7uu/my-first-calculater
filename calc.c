#include <stdio.h>
#include <cs50.h>

int main(void){
    int start = get_int("Hey welcome to the Calculator :\n 1 : Sum\n 2 : Subtract\n 3 : Multiply\n 4 : Divide\n");

    if(start == 1){
        int num1 = get_int("First Number :");
        int num2 = get_int("Second Number :");

        printf("The result is : %i\n", num1 + num2);
    }

    if(start == 2){
        int num1 = get_int("First Number :");
        int num2 = get_int("Second Number :");

        printf("The result is : %i\n", num1 - num2);
    }

        if(start == 3){
        int num1 = get_int("First Number :");
        int num2 = get_int("Second Number :");

        printf("The result is : %i\n", num1 * num2);
    }

            if(start == 4){
        int num1 = get_int("First Number :");
        int num2 = get_int("Second Number :");

        printf("The result is : %i\n", num1 / num2);


    }
    
}

