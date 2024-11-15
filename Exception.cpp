#include<iostream>
using namespace std;

class Exception{
    public :
        int age;
        double income;
        string city;
        bool vehicle;

    void getData(){
        cout <<"Enter age : ";
        cin >> age;
        cout <<"enter income : ";
        cin >> income;
        cout << "enter city : ";
        cin >> city;
        cout<<"enter vehicle (1 for 4 wheeler else 0)";
        cin >> vehicle;
    }

    void checkAge(){
        if(age < 18 || age > 55){
            throw(age);
        }
    }

    void checkIncome(){
        if(income < 5000 || income > 100000){
            throw(income);
        }
    }

    void checkCity(){
        if(city != "Pune" && city != "Mumbai" && city != "Banglore" && city != "Chennai"){
            throw(city);
        }
    }

    void checkVehicle(){
        if(vehicle != 1){
            throw(vehicle);
        }
    }
};

int main(){

    Exception e;

    e.getData();

    try{
        e.checkAge();
    } catch (int a){
        cout <<"Your age " << a << " dont meet the criteria "<< endl;
    }

    try{
        e.checkIncome();
    } catch (double b){
            cout<<"your income " << b << " dont meet the criteria " << endl;
    }
    

    try{
        e.checkCity();
    } catch (string c){
        cout<<"your city " << c<<" dont meet the criteria "<<endl;
    }

    try{
        e.checkVehicle();
    } catch (bool d){
        cout <<"your vehicle " << d <<" dont meet the criteria " << endl;
    }

    return 0;
}