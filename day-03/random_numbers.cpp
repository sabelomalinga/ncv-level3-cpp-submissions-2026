#include <iostream>
#include <math.h>


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







int main()
{

int num1 = rand () % 50 +1;
int num2 = rand ()% 50 + 1;

char op;
cout <<"Enter an Operator (+,-,*,/)" <<endl;
cin >>op;
switch(op){


case '+':
    cout<< "Results" << CalSum(num1,num2);
    break;
case '-':
    cout<< "Results" << CalDiff(num1,num2);
    break;
case '/':
    cout<< "Results" << CalQuot(num1,num2);
    break;

default:
    cout <<"Invalid Operation Entered "<<endl;
    break;
}


return 0;
}
