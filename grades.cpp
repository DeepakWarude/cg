#include <iostream>
using namespace std;

void grades(){

    int a; 
    cout <<"enter your marks : ";
    cin >> a;

    if(a > 100 || a < 0){
        cout <<"invalid marks ";
        return;
    }

    if(a >= 91 && a <= 100){
        cout <<"O";
    }else if (a >= 81 && a <= 90){
        cout<<"A";
    }else if(a >= 71 && a <= 80){
        cout <<"B";
    }else if(a >= 61 && a <= 70){
        cout <<"C";
    }else if(a >= 51 && a <= 60){
        cout <<"D";
    }else if(a >= 41 && a <= 50){
        cout <<"Pass";
    }else{
        cout << "fail";
    }
}

int main(){

    grades();
    return 0;
}