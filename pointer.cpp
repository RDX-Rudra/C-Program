# include<iostream>
using namespace std;

int main(){
    int a =102;
    int* ptr;
    ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}