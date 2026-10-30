#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

int AddVAt(int a, int b)
{
    int t = a;
    a=b;
    b=t;
    return b;
}


int main(){

cout << AddVAt(5,9) <<"\n";

}
