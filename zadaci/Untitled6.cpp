#include <iostream>
#include <stdlib.h>
#include <ctime>
#include<vector>
using namespace std;

void manji(vector<int>A, vector<int>&B){
	for (int i=0; i<15; i++){
		if (A[i]<A[14]){
			B.push_back(A[i]);
		}
	}
}

int main(){
	
	srand(time(NULL));
	rand();
	vector<int>A,B;
	cout<<"Generisani niz: ";
	for (int i=0; i<15; i++){
		int temp = rand()%66+27;
		A.push_back(temp);
		cout<<A[i]<<" ";
	}
	
	manji(A,B);
	
	
	if (B.size() == 0){
		cout<<"\nPrazan niz.";
	}else {
		cout<<"\nNovodobijeni niz: ";
	for (int i=0; i<B.size(); i++){
		cout<<B[i]<<" ";
	}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
