/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 16 de agosto de 2018, 11:16 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main() {
    float a,b,c;
    printf("introduce los varlores de ax^2 + bx + c");
    scanf("%f%f%f",&a,&b,&c);
    float raiz=sqrt(pow(b,2)-4*a*c);
    float x1=(-1*b+raiz)/(2*a);
    float x2=(-1*b-raiz)/(2*a);
    printf("x1=%f",x1);
    printf("x2=%f",x2);
    

    return (EXIT_SUCCESS);
}

