#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int z;
    double y;
    char x[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &z);
    scanf("%lf", &y);
    getchar();  //Clearing input buffer
    scanf("%[^\n]s", x);
    // Print the sum of both integer variables on a new line.
    // Print the sum of the double variables on a new line.
    
    printf("%d\n%.1f\n", i+z, d+y);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    
    printf("%s", s);
    puts(x);
    
    return 0;
