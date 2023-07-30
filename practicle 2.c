#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int age;
    printf("Hi,HOW OLD ARE YOU?\n");
    scanf("%d",&age);

    printf("\n\nWELCOME %d \nLET'S BE FRIENDS!\n",age);
    return 0;*/




     /*printf("%5d%5d\n",1,2);  //Right Align
     printf("%5d%5d\n",10,20); //Right Align
     printf("\n\n\n");
     printf("%-5d%-5d\n",1,2); //Left Align
     printf("%-5d%-5d\n",10,20);  //Left Align

     return 0;*/


    /*float dist,time;
     float avg;
     //inputs
     printf("Enter Distance travelled(m):\n");
     scanf("%f",&dist);
     printf("Enter Time Taken(s):\n");
     scanf("%f",&time);
     //process
     avg=dist/time;
     //output
     printf("average=%f\n",avg);*/



float Celsius,Farenheit;

    //int Celsius
    //int Fahrenheit

    //get user inputs
    printf ("Enter temperature in Fahrenheit:");

    scanf("%f",&Fahrenheit);

    //calculating the average
    celsius=(Fahrenheit-32)*5/9;
    printf("temperature in Celsius:%.f",Celsius);

    return 0;


}
