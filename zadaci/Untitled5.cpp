#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

bool prost (int a){
	for (int i=2; i<a/2; i++){
		if (a%i==0){
			return false;
		}
	}
	return true;
}


void nisu (int niz[]){
	for (int i=0; i<10; i++){
		if (prost(niz[i])){
			cout<<niz[i]<<" ";
		}
	}
}

int main(){

srand(time(NULL));
rand();
int niz[20];
cout<<"Generisani niz: ";
for (int i=0; i<20; i++){
	niz[i]=rand()%41+10;
	cout<<niz[i]<<" ";
}
cout<<"\nNovi niz: ";
nisu(niz);





	return 0;
}
