#include <iostream>
#include <cmath>
using namespace std;

int udaljenost (int a){
	int h,s,d,j;
	h=a/1000;
	s=a/100%10;
	d=a/10%10;
	j=a%10;
	cout<<endl;
	cout<<"h = "<<h<<" s = "<<s<<" d = "<<d<<" j = "<<j<<endl;
	
	int sumaP = 0, sumaN = 0;
	if (h%2==0){
		sumaP += h;
	}else {
		sumaN += h;
	}
	
	if (s%2==0){
		sumaP += s;
	}else {
		sumaN += s;
	}
	
	if (d%2==0){
		sumaP += d;
	}else {
		sumaN += d;
	}
	
	if (j%2==0){
		sumaP += j;
	}else {
		sumaN += j;
	}
	
	return abs(sumaP-sumaN);
}

int main(){
	
int a;
do{
	cout<<"\nUnesite cetverocifreni broj: ";
	cin>>a;
	if (a>10000 || a<1000){
		cout<<"\nUneseni broj nije cetverocifren. Pokusajte ponovo!";
	}
	
}while (a>10000 || a<1000);

cout<<"\nUdaljenost izmedju sume parnih i sume neparnih cifara cetverocifrenog broja iznosi: "<<udaljenost(a)<<endl;

	return 0;
}
