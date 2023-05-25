# include<iostream>
using namespace std;

class Employee {
        public:
        string name;
        int salary;

        Employee(string name, int salary){
            this->name = name; //constructor
            this->salary = salary;
        }

        void printDetails(){
            cout<<"The name of the employee is "<<this->name<<" and his salary is "<<this->salary<<endl;
        }
    };

int main(){

Employee rd("Rudra", 100000);
//rd.name = "Rudra";
//rd.salary = 100000;
rd.printDetails();
//cout<<"The name of the employee is "<<rd.name<<" and his salary is "<<rd.salary<<endl;

    return 0;
}