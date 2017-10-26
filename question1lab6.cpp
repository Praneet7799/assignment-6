#include <iostream>
using namespace std;

int main() {
	int a;
	char b;
	float c;
	bool d;
	long e;
	double f;
	int *g=&a;
	char *h=&b;
	float *i=&c;
	bool *j=&d;
	long *k=&e;
	double *l=&f;
	cout<<"The size of integer variable is "<<sizeof(a)<<"\n";
	cout<<"The size of char variable is "<<sizeof(b)<<"\n";
	cout<<"The size of float variable is "<<sizeof(c)<<"\n";
	cout<<"The size of bool variable is "<<sizeof(d)<<"\n";
	cout<<"The size of long variable is "<<sizeof(e)<<"\n";
	cout<<"The size of double variable is "<<sizeof(f)<<"\n";
	cout<<"The size of pointer to the integer variable is "<<sizeof(g)<<"\n";
	cout<<"The size of pointer to the char variable is "<<sizeof(h)<<"\n";
	cout<<"The size of pointer to the float variable is "<<sizeof(i)<<"\n";
	cout<<"The size of pointer to the bool variable is "<<sizeof(j)<<"\n";
	cout<<"The size of pointer to the long variable is "<<sizeof(k)<<"\n";
	cout<<"The size of pointer to the double variable is "<<sizeof(l)<<"\n";
	return 0;
}
