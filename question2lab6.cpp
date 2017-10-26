#include <iostream>
using namespace std;

int main() {
	int a,b;
	int *p;
	cout<<"Enter the values of a and b ";
	cin>>a>>b;
	p=&a;
	b=*p;
	cout<<"\n a="<<a<<" b="<<b<<" &*p="<<*p;//part A
	a=2;b=3;
	cout<<"\n a="<<a<<" b="<<b<<" &*p="<<*p;//part B
	p=&b;
	cout<<"\n a="<<a<<" b="<<b<<" &*p="<<*p;//part C
	return 0;
}
