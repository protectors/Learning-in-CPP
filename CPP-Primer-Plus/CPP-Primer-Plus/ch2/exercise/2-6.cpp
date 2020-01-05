#include <iostream>
double func(double ly);
using namespace std;

int main(){
	cout<<"Enter the number of light years: ";
	double ly,units;
	cin>>ly;
	units=func(ly);
	cout<<ly<<"light years = "<<units<<" astronomical units"<<endl;
	return 0;
}

double func(double ly){
	return 63240*ly;
}