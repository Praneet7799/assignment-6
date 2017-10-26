#include <iostream>
#include <string.h>
using namespace std;

int main() {int i,j,n;
   char  str[20], *p;
   cout << "Input about 10 characters of string\n";
   cin >> str;
   
   // Pointer variable refers to address of string 
   char *ptr=str;	
   n=strlen(str);
 
   // Show string by shifting top character of string to right
   char *ptrx;
   for(i=0;i<n;i++)
   {ptrx=ptr;
   cout<<"\n";
    for(j=0;j<n-i;j++)
    {cout<<*ptrx;
     ptrx++;}
   ptr++;
   }
    
    return (0);
}

