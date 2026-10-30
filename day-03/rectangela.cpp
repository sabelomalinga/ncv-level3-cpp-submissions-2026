#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


using namespace std;

int main(){


    //Variable Declaration for the area calculation
    float width , lengthAre;
    float area;
    double  radius;




    //promting the user to Enter Width
    cout << "Please enter the Width of the rectangel " << endl;
    cin >> width;

    //promting the user to Enter Length
    cout << "Please enter the Lenght of the rectangel " << endl;
    cin >> lengthAre;

    area = ( width * lengthAre) * 2;

    cout << "The are of the Rectacular is as follows in Squared  " << area << endl;



      radius = sqrt(area / M_PI);

    cout <<"This is the radius of the circle " << fixed << setprecision(2)<< radius << "\n" ;


 return 0;
}
