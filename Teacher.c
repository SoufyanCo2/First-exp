#include <stdio.h>

    int main (){

        int year;
        scanf("%d",&year);

        if((year%400==0)||(year%100!=0&&year%4==0)){
            printf("%d is a leap year",year);}
        else
            printf("no");



    return 0;
}
