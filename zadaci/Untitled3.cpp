#include <iostream>
using namespace std;

int ukloni_stotine (int a){
	if (a<100){
		return a;
	}else{
		
	
	int temp = a%100;
	int ostatak=a/1000;
     int broj=ostatak*100+temp;
     return broj;
}
}

int main(){
	int a;
	
	do{
		
		do{
			cout<<"Ulaz: ";
			cin>>a;
			
		}while (a<0);
		cout<<"Izlaz: "<<ukloni_stotine(a)<<endl;
		
	}while (a != 0);
	
	
	
	return 0;
}
