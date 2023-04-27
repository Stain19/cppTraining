#include <iostream>
using namespace std;

int main(){
    const int myNum = 10;
    /*myNum = 11;
    Happens that myNum is variable that cannot have changes, const definers that
    if it was not commented, the program would launch an error msg.
    */
    /*
    When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only).
    */
    cout <<  myNum<<endl;
    return 0;
}