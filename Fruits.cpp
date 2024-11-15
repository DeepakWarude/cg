#include<iostream>
using namespace std;

class Mango{
    public :
        int mango;
    
    void MangoCount(){
        cout <<"Enter mangoes : ";
        cin >> mango;
    }
};

class Apple{
    public :
        int apple;

    void AppleCount(){
        cout <<"enter apples : ";
        cin >> apple;
    }
};

class Fruits: public Mango, public Apple {
    public :
        int total(){
            return mango + apple;
        }
};

int main(){

    Fruits f;
    f.MangoCount();
    f.AppleCount();

    int totall = f.total();
    cout <<"total number of fruits in the basket is : " << totall << endl;

    return 0;
}