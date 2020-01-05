# 1 C++程序的模块叫什么
```
函数
```
# 2 #include<iostream> 的预处理器编译指令是做什么用的？
```
这将导致在最终在编译前，使用iostream文件的内容替换该编译指令
```
# 3 using namespace std; 是做什么用的？
```
使程序可以使用std名称空间中的定义
```
# 4 什么语句可以用来打印“Hello，World”，然后开始新的一行
```
<<endl;
```
# 5 什么语句可以用来创建名为cheeses的整数变量
```
int cheeses;
```
# 6 什么语句可以用来将值32赋给cheeses
```
cheeses=32;
```
# 7 什么语句可以用来将从键盘输入的值读入变量cheeses中
```
cin>>cheeses;
```
# 8 什么语句可以用来打印“We have X varieties of cheese,",其中X为cheeses的当前值
```
cout<<"We have "<<X<<" varieties of cheese\n";
```
# 9 下面的函数原型指出了关于函数的哪些信息
## int froop(double t);
```
调用froop的使用，应提供一个double类型的参数，而函数将返回一个int值
```
## void rattle(int n);
```
调用rattle()时接受一个int类型的参数且没有返回值
```
## int prune(void);
```
调用prune不接受任何参数且返回一个int值
```
# 10 定义函数时，在什么情况下不必使用关键字return?
```
当函数返回类型为void的时候，如果不提供返回值，则可以使用：
return;
```
# 11 假设你编写代码”cout<<"Please enter your PIN: "; “，而编译器指出cout是一个未知标识符。导致这个问题的原因很可能是什么？指出3种修复这种问题的方法。
```
未使用命名空间std

1. 在main函数外使用：using namespace std;
2. 在main函数内使用：using std::cout;
3. 在使用cout的时候在前面加std::，即：std::cout<<"Please enter your PIN: ";
```