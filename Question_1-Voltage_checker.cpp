#include <iostream>
using namespace std;
int main(){
	double Voltage;
	
//Accept voltage input from user
    cout<<"============================================="<<endl;
	cout<<"         Voltage Level Classifier            "<<endl;
	cout<<"============================================="<<endl;
	cout<<"Enter Voltage reading (V): ";
	cin>> Voltage;
	
//Classify using if......else if......else
	cout<<"\nVoltage: "<<Voltage<<"V"<<endl;
	cout<<"Classification: ";
	
	if (Voltage<0){
		cout<<"Invalid Voltage Reading"<<endl;
		
	}
	else if(Voltage >=0 && Voltage <=50){
		cout<<"Low Voltage"<<endl;
		
	}
	else if(Voltage >=51 && Voltage <=240){
		cout<<"Normal Voltage"<<endl;
		
	}
	else if(Voltage >=240 && Voltage <= 415){
		cout<<"High Voltage"<<endl;
	}
	else{
		cout<<"Dangerous Voltage"<<endl;
	}
	cout<<"=============================================";
	return 0;
	            
}
