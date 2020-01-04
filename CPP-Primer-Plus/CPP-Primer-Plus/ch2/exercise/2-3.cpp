//使用3个用户定义的函数，并生成下面的输出
// Three blind mice
// Three blind mice
// See how they run
// See how they run
#include <iostream>
using namespace std;
void mice();
void run();

int main(){
	mice();
	mice();
	run();
	run();
	return 0;
}

void mice(){
	cout<<"Three blind mice"<<endl;
}

void run(){
	cout<<"See how they run"<<endl;
}