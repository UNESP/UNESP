#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h> 

//Fun��o que completa o numero binario com 0 a esquerda 
void stringComplete(int tam, char* string, char* result)
{
	int cont=0;
    cont = tam - (strlen(string) - 1);

    char aux[cont];
    strcpy(aux, "");
    
    while(cont > 1) // iniciando a string2 com 0 
    {
        strcat(aux, "0");
        cont--;                  
    }

    strcat(aux, string); 
    strcpy(result, aux);
}

// Fun��o conversora: decimal para bin�rio 
void decimalToBinary(char* number, char* result, int tam)
{  
    int decimal, total, potenc;
    decimal = atoi(number);
    itoa(decimal, result, 2); 
    
    stringComplete(tam, result, result);
}

 // Fun��o conversora: bin�rio para decimal     
void binaryToDecimal(char* number, char* result)
{  
   int aux, i, decimal, aux2; 
   
   aux = strlen(number);
   i = 0;
   decimal = 0;

   while(aux!= 0)
   {  
       if (aux!= 1) 
       {         
          if(number[i] == '1')
            decimal += pow (2,aux-1); 
       }else{   
            if(number[i]== '1') 
               decimal = decimal+1;
            }        
               
        i++;
        aux--; 
   }
      
   itoa(decimal, result, 10);   
}