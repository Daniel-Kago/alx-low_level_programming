#include <stdio.h>                                                                                                             
                                                                                                                              
/**                                                                                                                            
*main - Entry point                                                                                                            
*                                                                                                                              
*Return: Always 0  (Success)                                                                                                   
*/                                                                                                                             
int main(void)                                                                                                                 
{                                                                                                                              
int a;                                                                                                                         
long int b;                                                                                                                    
long long int c;                                                                                                               
char d;                                                                                                                        
float f;                                                                                                                       
                                                                                                                               
printf("Size of the char: %lu byte(s)\n",(unsigned long)sizeof(d));                                                            
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(a));                                                              
printf("size of long int: %lu byte(s)\n",(unsigned long)sizeof(b));                                                            
printf("size of long long int: %lu byte(s)\n",(unsignedlong)sizeof(c)); 
}
