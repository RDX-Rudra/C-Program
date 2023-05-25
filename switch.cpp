# include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 12/* constant-expression */:
        cout<<"you are 12 years old";/* code */
        break;
    case 18:
        cout<<"you are 18 years old";
        break;
    default:
        cout<<"you are neither 12 nor 18 years old";
        break;
    }
    return 0;
}