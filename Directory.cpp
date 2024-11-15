#include<iostream>
using namespace std;

class Directory{
    public :
        string name;
        string address;
        long long teleno = 0;
        long long phoneno = 0;
        string Headoffamily;

    void create(){
        cout <<"enter the name : ";
        cin >> ws;
        getline(cin, name);

        cout <<"enter your address : ";
        cin >> ws;
        getline(cin, address);

        cout<<"enter your tele no : ";
        cin >> ws;
        cin >> teleno;

        cout <<"enter your phone no : ";
        cin >> ws;
        cin >> phoneno;

        cout<< endl;
        cout<<"Is you are the head of your family ? ";
        cin >> ws;
        getline(cin, Headoffamily);
    }

    void Display(){
        cout<<"*****Directory********";
        cout << "Name : " << name <<endl;
        cout << "address : " << address << endl;
        cout << "telephone no : " << teleno << endl;
        cout << "phone no : "<< phoneno << endl;
        cout << "Head of family : " << Headoffamily << endl;
    }
    
};

int main(){

    int choice;
    Directory d;

    d.create();
    d.Display();

    return 0;
}