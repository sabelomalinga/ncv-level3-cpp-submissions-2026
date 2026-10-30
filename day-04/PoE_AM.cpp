#include <iostream>
using namespace std;

int CalSum(int &Val1, int &Val2)
{

    return Val1 + Val2;
}



int CalDiff(int &Val1, int &Val2)
{

    return Val1 -Val2;
}



int CalQuot(int &Val1, int &Val2)
{

    return Val1 / Val2;
}




int main(){

    int v1 ,v2 ;
    cout << "Please Enter Val1 to the Sum" << endl;
    cin >> v1;

    cout << "Please Enter Val2 to the Sum" << endl;
    cin >> v2;

   //Sum of two number
    cout <<"The Sum of two is:   " <<CalSum(v1,v2) <<"\n";


    //Dispalying the difference

    cout << "The Differnce of two number is:"<<CalDiff(v1,v2) <<"\n";

    cout << "The Quotient of two number is:"<<CalQuot(v1,v2) <<"\n";




return 0;
}
