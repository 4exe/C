#include "base.h" // header file
# define PI 3.14159265 // 1.4 Symbolic Constants

int globalvar = 10;


int main(void) {
    system("cls");
    // printf("Hello World\n"); // 1.1 Getting Started
    // // \n is escape sequence for new line

    // farenheitToCelsius(100); // 1.2 Variables and Arithematic Expressions

    // printf("%d\n", 5);
    // printf("%3d\n", 5);

    // char c = getchar(); // 1.5 Character Input and Output
    // putchar(c);

    // readfromFile("test.txt");

    // printf("%d", EOF); 

    // countblankstabsandnewlines("test_for_count.txt");

    // Parameter vs. Arguments 
    // The values that are declared within a function when the function is called are known as an argument. The variables that are defined when the function is declared are known as parameters. These are used in function call statements to send value from the calling function to the receiving function.
    // printf(arguments);
    // void add( parameters) {}

    // char s[] = "Hello";
    // printf("%d %d", sizeof(s), strlen(s));

    // printf("%d", externvar);
    // externvar = 10;
    // printf("%d", externvar);

    // printf("%d", globalvar);

    // printf("%d", isdigit('2'));

    // for(int i=0; i<10; i++) { // 3.5 while for
    //     if(i==1) continue;
    //     else if(i==6) break; // 3.7 break and continue
    //     else printf("%d", i);
    // }
    
    // if(5==5) goto five;
    // else goto none;

    // five: printf("Five");
    // none: printf("not Five");

    printf("%d", sq(5));

    return 0;
}