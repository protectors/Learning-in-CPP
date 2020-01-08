#include <iostream>
int main(){
    using std::cin;
    using std::cout;
    char ch;

    cout<<"Type, and I shall repeat.\n";
    cin.get(ch);
    while(ch!='.'){
        if(ch=='\n')
            cout<<ch;
        else
            cout<<ch+1;
        cin.get(ch);
    }
    cout<<"\nPlease excuse the slight confusion.\n";
    return 0;
}