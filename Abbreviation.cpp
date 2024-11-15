#include<iostream>
using namespace std;

class Abbreviation{
    public : 
        string str1;
        string str2;
        string str3;
        char sname;
        char mname;

    void show(){
        cout <<"enter your full name : ";
        cin >> str1 >> str2 >> str3;
        sname = str1[0];
        mname = str2[0];
        cout << sname <<" . " << mname <<" . "<< str3;
    }
};

int main(){

    Abbreviation a;
    a.show();

    return 0;
}