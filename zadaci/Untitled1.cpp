#include <iostream>
using namespace std;

void mnozenje (int a, int b){
	if (b<0){
		cout<<a<<"*("<<b<<") ="<<a*b<<endl;
	}else {
				cout<<a<<"*"<<b<<" ="<<a*b<<endl;

	}
}

int main(){
	
	
	int a,b;
	cout<<"Unesite dva broja: "<<endl;
	cin>>a>>b;
	mnozenje(a,b);
	
	
	
	
	
	
	return 0;
}
