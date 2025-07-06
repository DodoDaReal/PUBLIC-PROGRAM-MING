// #include <stdio.h>

// int main(){
//     int a = 1; int b = 0;
//     printf("OR FUNCTION RESULT: %d\n", a||b);
//     return 0;
//     }

#include <stdio.h>

int main(){
    int a;
    printf("How many booms?");
    scanf("%d", &a);
    switch(a){
        case 5:
        printf("You get 5 Big Booms\nBoom!\n");
        case 4:
        printf("Boom!\n");
        case 3:
        printf("Boom!\n");
        case 2:
        printf("Boom!\n");
        case 1:
        printf("Boom!\n");
        break;
    default:
    printf("You asked for too many booms");
    }
    return 0;
}




