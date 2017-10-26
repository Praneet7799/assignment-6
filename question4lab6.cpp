#include <iostream>
using namespace std;

int main() {
	char str[8]="praneet";
	int i;
	cout<<"\nThe string,using normal index is ";
	for(i=0;i<10;i++)
	{cout<<str[i];}
	char *ptr=str;
	cout<<"\nThe string using pointer method is ";
	for(i=0;i<10;i++)
	{cout<<*ptr;
	ptr++;}
	return 0;
}
