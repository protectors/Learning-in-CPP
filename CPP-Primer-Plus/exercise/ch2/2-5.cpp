#include <iostream>
double func(int c);
using namespace std;
int main(){
	cout<<"Please enter a Celsius value: ";
	int c;
	double f;
	cin>>c;
	f=func(c);
	cout<<c<<" degrees Celsius is "<<f<<" degrees Fahrenheit."<<endl;
	return 0;
}

double func(int c){
	return 1.8*c+32;
}
