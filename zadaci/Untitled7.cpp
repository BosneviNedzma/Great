#include <iostream>
#include <vector>
using namespace std;

void hej (int& a){
	if (a%2==1){
		a++;
	}
}

int main(){
	
	int a;
	cout<<"Unesite broj clanova niza: ";
	cin>>a;
	vector<int>A;
	A.resize(a);
	cout<<"\nUnesite clanove niza: ";
	for (int i=0; i<A.size(); i++){
		cout<<i+1<<". clan: ";
		cin>>A[i];
	}
	
	cout<<"\nClanovi niza su: ";
	for (int i=0; i<A.size(); i++){
		cout<<A[i]<<" ";
	}
	
	
	
		cout<<"\nClanovi novog niza su: ";
	for (int i=0; i<A.size(); i++){
		hej(A[i]);
	}
	for (int i=0; i<A.size(); i++){
		cout<<A[i]<<" ";
	}
	
	
	
	
	
	return 0;
}
