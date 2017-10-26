#include <iostream>
using namespace std;

int main() {
	int arr[10],i;
	cout<<"\nEnter the array elements ";
	for(i=0;i<10;i++)
	{cin>>arr[i];}
	cout<<"\nThe array,using normal index is ";
	for(i=0;i<10;i++)
	{cout<<" "<<arr[i];}
	int *ptr=arr;
	cout<<"\nThe array using pointer method is ";
	for(i=0;i<10;i++)
	{cout<<" "<<*ptr;
	ptr++;}
	return 0;
}
