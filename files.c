// set  -1 ...
// 3.	Write a C program to display the contents of a file to standard output device.
#include<stdio.h> 
int main() 
{ 
FILE * pFile; 
char mystring [100]; 
pFile = fopen ("myfile.txt" , "r"); 
if (pFile == NULL) 
perror ("Error opening file"); 
else { 
if ( fgets (mystring , 100 , pFile) != NULL ) 
puts (mystring); 
fclose (pFile); 
} 
return 0; 
}
//Output:
//INPUT: 
//Source File:		File1.txt
			// Hai ACE Engineering College Students.
//OUTPUT:	

