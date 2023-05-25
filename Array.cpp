# include<iostream>
using namespace std;

int main(){
    //int arr[5]={1,2,3,4,5};
    //cout<<arr[3];
    int marks[5];
    for(int i=0; i<5; i++){
        cout<<"enter marks of"<<endl;
        cin>>marks[i];
    }
    cout<<"marks are"<<endl;
    for(int i=0; i<5; i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}