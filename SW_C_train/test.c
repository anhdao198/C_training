#include <stdio.h> 
int main() { 
    char ch; 
    char str [100]; 
    printf ("Enter any charater: "); 
    scanf ("%c", &ch); 
    //fflush (stdin); 
    printf ("Enter any string: "); 
    gets (str); 
    printf ("%c\n%s", ch, str); 
    return 0; 
}
