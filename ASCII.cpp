//(CCPROG1) 
//SW5 : Programming (I/O and expressions)
// Naman Chandra Srivastava
// Section 19A
#include <stdio.h>

int main() 
{  
    char c;
    int nVal;//Eventually displays ASCII Value
	int nVal1;// The Ten's Digit of the ASCII Value
	int nVal2;// The New Character  
   
    printf("\nEnter a character: ");
    scanf("%c", &c);  
    nVal = c;//character c is stored in the variable nVal   
    
	nVal1 = nVal % 100/10;
	
	//The value of the one's digit is taken from the ASCII Value and then that value is used in the respective formula to display the new character
	nVal2 = 33 + 2 * (nVal % 10);
	
		
    printf ("\nASCII value: %d", nVal);// The ASCII vaVue is printed via nVal
	printf ("\nDigit @tens: %d", nVal1);//The ten's digit of the ASCII value is printed
	printf ("\nNew character: %c", nVal2);//The new character is Printed 

    return 0;
}

