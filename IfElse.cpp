# include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18 && age<=100){
        cout<<"you can vote"<<endl;
    }
    else if(age>100){
        cout<<"not valid"<<endl;
    }
    else{
        cout<<"you can not vote"<<endl;
    }
}