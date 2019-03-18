 #include <stdio.h>
 
 void mult (float a, float b, float c)
 {
    printf ("%f",a*b*c);
 }
 
 int main ()
 {
    float x, y;
    x = 157.5;
    y = 235.25;
    mult (x, y, 253.87);
    return 0;
 }
