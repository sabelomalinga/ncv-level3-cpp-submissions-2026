#include <iostream>
#include <string>


using namespace std;




int main(){

int num1,num2;
char gender;
cout << "Please enter the first number" <<endl;
cin >> num1;

cout << "Please enter the second number" <<endl;
cin >> num2;

cout << "Please enter the M or F for your gaender " <<endl;
cin >> gender;

if (num1 % 2 == 0){

    cout << "Ke Malinga"<< endl;


}else if (num2 % 2 == 0){

    cout << "Ke Chabeli"<< endl;


}
if (gender == 'M'){

    cout << "Ke Monna"<< endl;
}

if (gender == 'F'){

    cout << "Ke Mosadi"<< endl;
}

                    for(int i=1;i<=5;i++){

                    cout <<"This is the number"  << i << "\n";


                    }



return 0;
}
