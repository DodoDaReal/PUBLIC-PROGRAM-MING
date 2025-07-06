#include <stdio.h>
//IT WORKSSSSSSS NESTED TERNARY STATEMENTS
int main(){
    int a = 400;
    a%400==0?printf("It is a leap year"):a%100==0?printf("It is not a leap year"):a%4==0?printf("It is a leap year"):printf("It is not a leap year");
    return 0;
    }

// #include<stdio.h>

// int main(){
//     int a = 123;
//     if(a%400==0){
//         printf("It is a leap year");
//     }
//     else if(a%100==0){printf("It is not a leap year");}
//     else if(a%4==0){
//         printf("It is a leap year");
//     }
//     else{printf("It is not a leap year");}
//     return 0;
// }




// #include <stdio.h>
// int main()
// {
// int a = 'fortnite';

//     char b = 'a';
//     printf("%c", &b);
//     return 0;
// }