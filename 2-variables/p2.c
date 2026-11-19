#include <stdio.h>
#include <stdbool.h> // for booleans

int main(){
    /*
    This program deals with variables

    int = whole numbers (4 bytes)
    float = single-precision decimal numbers (4 bytes)
    double = double-precision decimal numbers (8 bytes)
    char = single character (1 byte)
    char[] = array of cahracters (depends on size)
    bool = true or false (1 byte)
    */

    int age = 24;
    int fingers = 10;

    printf("I am %d years old \n", age);
    printf("I have %d fingers on my hands \n", fingers);

    float mark = 0.5;
    float height = 1.64;

    printf("Your exam mark is %.1f \n", mark);
    printf("I am %.2f cm height \n", height);

    double pi = 3.14159265;
    double e = 2.718;

    printf("The value of pi is %.15lf \n", pi);
    printf("The value of e is %.10lf \n", e);

    char letter = 'a';
    char symbol = '?';
    char currency = '$';

    printf("%c is the first letter of the alphabet \n", letter);
    printf("%c is a quetion mark \n", symbol);
    printf("I do not pay in %c \n", currency);

    char name[] = "Maider";
    char food[] = "soupe";
    char email[] = "maiderthebest2@gmail.com";

    printf("My name is %s \n", name);
    printf("my favourite food is %s \n", food);
    printf("My email is: %s \n", email);

    bool isOnline = false;

    if(isOnline){
        printf("You are ONLINE");
    }
    else{
        printf("You are NOT ONLINE");
    }


    return 0;
}