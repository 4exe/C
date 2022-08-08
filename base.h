#include <stdio.h> // Standard Input Output Library
#include <stdlib.h>
#include <ctype.h>
#define sq(x) (x*x)

extern int externvar;

void farenheitToCelsius(int upper) {
    printf("Farenheit\tCelsius\n");
    for (int i=0; i<upper; i+=5) { // 1.3 For Statement
        printf("%d\t\t%d\n", i, (i-32)*5/9);
    }
    printf("\n");
}

void readfromFile(char * fileName) { // 1.5.1 File Copying
    char op;
    FILE * fop = fopen(fileName, "r");
    while(!feof(fop)) {
        // op = getc(fop);
        fscanf(fop, "%c", &op);
        // putc(op, stdout);
        printf("%c", op);
    }
    printf("\n");
    fclose(fop);
}

void countblankstabsandnewlines(char * fileName) { // 1.7 Functions
    char c;
    int num = 0, alp = 0, op = 0, undscore = 0, special = 0, bracket = 0, blank = 0, tab = 0, newline = 0;
    FILE * fop = fopen(fileName, "r");
    while(!feof(fop)) {
        c = getc(fop);
        if(c == ' ') blank++;
        else if(c == '\t') tab ++;
        else if(c == '\n') newline++;
        else if(c >= '0' && c<= '9') num++;
        else if(c >= 'a' && c<= 'z' || c >= 'A' && c<= 'Z') alp++;
        else switch(c) {
            case '_': undscore++; break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '=':
            case '%': op++; break;
            case '!':
            case '@':
            case '#':
            case '$':
            case '^':
            case '&':
            case '~': special++; break;
            case '(':
            case ')': bracket++; break;
        }
    }
    if(blank) printf("Blank Spaces : %d\n", blank);
    if(num) printf("Numbers : %d\n", num);
    if(alp) printf("Alphabets : %d\n", alp);
    if(undscore) printf("Underscore : %d\n", undscore);
    if(op) printf("Operators : %d\n", op);
    if(special) printf("Special Characters : %d\n", special);
    if(bracket) printf("Brackets : %d\n", bracket);
    if(tab) printf("Tabs : %d\n", tab);
    if(newline) printf("Newlines : %d\n", newline);
    fclose(fop);
}