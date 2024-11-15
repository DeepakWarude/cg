#include<iostream>
using namespace std;

class Employee{
    public : 
        int salary;
        int hours;
        int newSalary;

    void getInfo(){
        cout<< "enter the salary ";
        cin >> salary;
        cout <<"enter hours work : ";
        cin >>hours;
    }

    void AddSal(){
        if(salary < 10000){
            newSalary = salary + 50000;
        }
    }

    void AddWork(){
        if(hours > 6){
            newSalary += 1000;
        }
    }

    void display(){
        cout << "your new salary is : " << newSalary <<endl;
    }

};

int main(){

    Employee e;
    e.getInfo();
    e.AddSal();
    e.AddWork();
    e.display();
    
    return 0;
}