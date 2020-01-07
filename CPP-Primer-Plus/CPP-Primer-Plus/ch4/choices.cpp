#include <iostream>
#include <vector>
#include <array>
#include <cstdio>
int main(){
	using namespace std;
	double a1[4]={1.2, 2.4, 3.6, 4.8};

	vector<double> a2(4);
	a2[0]=1.0/3.0;
	a2[1]=1.0/5.0;
	a2[2]=1.0/7.0;
	a2[3]=1.0/9.0;

	array<double, 4> a3={3.14, 2.72, 1.62, 1.41};
	array<double, 4> a4;
	a4=a3;

	cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
	cout<<"a2[2]: "<<a2[2]<<" at "<<&a2[2]<<endl;
	cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
	cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;

	// a1[-8]=20.2;
	// mac上需要-8
	// cout<<"a1[-8]: "<<a1[-8]<<" at "<<&a1[-8]<<endl;
	a1[-2]=20.2;
	cout<<"a1[-2]: "<<a1[-2]<<" at "<<&a1[-2]<<endl;
	cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
	cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;

	cout<<"a1[0]: "<<a1[0]<<" at "<<&a1[0]<<endl;
	cout<<"a1[1]: "<<a1[1]<<" at "<<&a1[1]<<endl;
	cout<<"a1[2]: "<<a1[2]<<" at "<<&a1[2]<<endl;
	cout<<"a1[3]: "<<a1[3]<<" at "<<&a1[3]<<endl;

	cout<<"a3[3]: "<<a3[3]<<" at "<<&a3[3]<<endl;
	cout<<"a3[2]: "<<a3[2]<<" at "<<&a3[2]<<endl;
	cout<<"a3[1]: "<<a3[1]<<" at "<<&a3[1]<<endl;
	cout<<"a3[0]: "<<a3[0]<<" at "<<&a3[0]<<endl;

	cout<<"a4[3]: "<<a4[3]<<" at "<<&a4[3]<<endl;
	cout<<"a4[2]: "<<a4[2]<<" at "<<&a4[2]<<endl;
	cout<<"a4[1]: "<<a4[1]<<" at "<<&a4[1]<<endl;
	cout<<"a4[0]: "<<a4[0]<<" at "<<&a4[0]<<endl;

	cout<<"a1[-1]: "<<a1[-1]<<" at "<<&a1[-1]<<endl;
	cout<<"a1[-2]: "<<a1[-2]<<" at "<<&a1[-2]<<endl;
	cout<<"a1[-3]: "<<a1[-3]<<" at "<<&a1[-3]<<endl;
	cout<<"a1[-4]: "<<a1[-4]<<" at "<<&a1[-4]<<endl;
	cout<<"a1[-5]: "<<a1[-5]<<" at "<<&a1[-5]<<endl;
	cout<<"a1[-6]: "<<a1[-6]<<" at "<<&a1[-6]<<endl;
	cout<<"a1[-7]: "<<a1[-7]<<" at "<<&a1[-7]<<endl;
	return 0;
}