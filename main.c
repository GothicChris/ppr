/* 
 * File:   main.c
 * Author: Christopher
 *
 * Created on 18. Oktober 2011, 10:52
 */

#include <stdio.h>
#include <stdlib.h>

#define FAHRENHEIT 'f' /* Celsius nach Fahreheit */
#define CELSIUS 'c' /* Fahreheit nach Celsius */
#define LOWER 0 /* kleinster Wert */
#define UPPER 300 /* größter Wert */
#define STEP 20 /* Schrittweite */


/*
 * 
 */

void calc_fahr_to_cel();
void calc_cel_to_fahr();


int main(int argc, char** argv) {
 
    char direction;
    
    printf("Bitte geben sie 'c' (Fahrenheit-> Celsius) oder "
           "'f' (Celsius -> Fahrnheit) ein.\n");
    
    direction = getchar();
    
    while((direction != CELSIUS && direction != FAHRENHEIT)) 
    {
        if(direction != '\n')
        {
            printf("Bitte geben Sie ein gültiges Zeichen ein: 'c' für "
                   "Fahrenheit nach Celsius oder 'f' für Celsius nach "
                   "Fahrenheit.\n");
        }
        direction = getchar();
    }
    
    if(direction == FAHRENHEIT) 
    {
        calc_cel_to_fahr();
    }
    else
    {
        calc_fahr_to_cel(); 
    }
    
    
    
    
    
    
    return (0);
}

/* Kalkulation von Fahrenheit zu Celsius in 20er Schritten und Ausgabe 
 * in Form einer Tabelle.
 */
void calc_fahr_to_cel() 
{
    int fahr = LOWER;
    
    /* Überschrift ausgeben */
    printf("Fahrenheit\tCelsius\n");
    
    /* Fahrenheit mit STEP hochzählen, bis UPPER (größter Wert) erreicht wurde
     */
    while(fahr <= UPPER)
    {
        /* Ausgabe von Fahrenheit und Celsius formatiert untereinander.
         Celsius = 5/9 (Fahrenheit - 32)*/
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
        fahr = fahr + STEP;
    }
}

/* Kalkulation von Celsius zu Fahrenheit in 20er Schritten und Ausgabe 
 * in Form einer Tabelle.
 */
void calc_cel_to_fahr()
{
    int cel = LOWER;
    
    /* Überschrift */
    printf("Celsius\t\tFahrenheit\n");
    
    /* Celsius mit STEP hochzählen, bis UPPER (größter Wert) erreicht wurde
     */
    while(cel <= UPPER) {
        
        printf("%3d\t\t%6.1f\n", cel, (9.0/5.0) * cel + 32);
        cel = cel + STEP;
        
    }
}


