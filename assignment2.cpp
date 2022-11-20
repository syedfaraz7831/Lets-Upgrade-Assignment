#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int counter = 0;
    int i = 2;
    cout<<"Printing first 10 prime numbers using while loop: "<<endl;
    while(counter < 10)
    {
        int value = i;
        int j = 2;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j > i/2)
        {
            cout<<i<<endl;
            counter++;
        }
        i++;
    }
    
    i = 2;
    counter = 0;
    

    cout<<endl<<"Printing first 10 prime numbers using for loop: "<<endl;
    for(counter = 0; counter < n; i++)  
    {
        int j = 2;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(j > i/2)
        {
            cout<<i<<endl;
            counter++;
        }
    }
    
    return 0;
}