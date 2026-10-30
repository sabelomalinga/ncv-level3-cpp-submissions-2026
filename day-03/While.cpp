#include <iostream>
#include <string>


using namespace std;




int main(){

    int number = 0;
    int sum;


    while (number <= 5)
        {
            cout <<"Please Enter the Number between the 1 and 150"<<endl;
            cin>> sum;

            if (sum >= 1 && sum <=150){



                number++;



            } else {

            cout <<"Invalid Number"<<endl;
            }


        };





 return 0;
}
