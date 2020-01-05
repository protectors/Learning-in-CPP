#include <iostream>
void show(int h,int m);
using namespace std;
int main(){
	int h,m;
	cout<<"Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	show(h,m);
	return 0;
}
void show(int h,int m){
	cout<<"Time: "<<h<<":"<<m<<endl;
}