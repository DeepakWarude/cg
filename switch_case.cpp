#include<iostream>
#include<math.h>
using namespace std;

class Calculator{
	public : 
	int square, cube, fact = 1, sum, prod, a, b;

	void square1(){
		cout<< "enter the number : ";
		cin >> a;
		square = a * a;
		cout << "the square is : " << square << endl;
	}

	void cube1(){
		cout<< "enter the number : ";
		cin >> a;
		cube = a * a * a;
		cout << "the cube is : " << cube << endl;
	}

	void squareroot1(){
		cout<<"enter a number : ";
		cin >> a;
		cout << "the square root is : " << sqrt(a) << endl;
	}

	void fact1(){
		cout <<"enter a number : ";
		cin >> a;
		for(int i = 1; i <= a; i++){
			fact = fact*i;
		}
		cout <<"factorial is : "<<fact <<endl;
	}

	void sum1(){
		cout <<"enter a first number : ";
		cin >> a;
		cout <<"enter second number : ";
		cin >> b;
		sum = a + b;
		cout <<"the sum is : "<< sum <<endl;
	}

	void prod1(){
		cout <<"enter a first number : ";
		cin >> a;
		cout <<"enter second number : ";
		cin >> b;
		prod = a * b;
		cout <<"the product is : "<< prod <<endl;
	}
};
int main(){

	Calculator c;
	int choice;

	do{
		cout << " Enter your choice " << endl;
		cout << " 1. square " << endl;
		cout<< " 2. cube " << endl;
		cout << "3. square root " << endl;
		cout << "4. factorial " << endl;
		cout << "5. sum " << endl;
		cout << " 6. product " << endl;
		
		cin >> choice;

		switch(choice){
			case 1 :
				c.square1();
				break;

			case 2 :
				c.cube1();
				break;

			case 3 :
				c.squareroot1();
				break;

			case 4 :
				c.fact1();
				break;

			case 5 :
				c.sum1();
				break;
			
			case 6 :
				c.prod1();
				break;

			default : 
				cout << "invalid choice ";
		}

	}while(choice != 7);
	return 0;
}