#include <iostream>
using namespace std;

int main()
{
    int val1 = 10;
    int val2 = 20;
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    bool b_val1 = true;
    bool b_val2 = false;

    cout<<"b_val1: "<<b_val1<<endl;
    cout<<"b_val2: "<<b_val2<<endl;

    //Arithmetic Operators
    cout<<endl<<"Arithmetic Operators: "<<endl;
    cout<<"val1 + 1: "<<val1 + 1<<endl;
    cout<<"val1 - 2: "<<val1 - 2<<endl;
    cout<<"val1 * 4: "<<val1 * 4<<endl;
    cout<<"val1 / 5: "<<val1 / 5<<endl;
    cout<<"val1 % 4: "<<val1 % 4<<endl;

    //Comparison operators
    cout<<endl<<"Comparison Operators: "<<endl;
 
    cout<<"Equal to (val1 == val2): "<<(val1 == val2)<<endl;
    cout<<"Not equal to (val1 != val2): "<<(val1 != val2)<<endl;
    cout<<"Less than (val1 < val2): "<<(val1 < val2)<<endl;
    cout<<"Greater than (val1 > val2): "<<(val1 > val2)<<endl;
    cout<<"Less than or equal to (val1 <= val2) : "<<(val1 <= val2)<<endl;
    cout<<"Greater than or equal to (val1 >= val2) : "<<(val1 >= val2)<<endl;

    
    
    //Logical Operators
    cout<<endl<<"Logical Operators: "<<endl;
    cout<<"OR (b_val1 || b_val2) : "<<(b_val1 || b_val2)<<endl;
    cout<<"AND (b_val1 && b_val2): "<<(b_val1 && b_val2)<<endl;
    cout<<"NOT !(b_val1) : "<<!(b_val1)<<endl;

}