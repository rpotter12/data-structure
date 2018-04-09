/*Write a C++ program that will display the calculator menu.
The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer vales for the calculation. See the sample below.
MENU
          1. Add
          2. Subtract
          3. Multiply
          4. Divide
          5. Modulus
Enter your choice: 1
Enter your two numbers: 12 15
Result: 27
Continue? y
*/
#include<iostream>
using namespace std;
int main()
{
    char pq;
    do
    {
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for division"<<endl;
    cout<<"enter 5 for modulo"<<endl;
    char ch;
    cin>>ch;
    int a,b;
    cin>>a>>b;
    switch(ch)
    {
        case '1': cout<<a+b<<endl;
                    break;
        case '2': cout<<a-b<<endl;
                    break;
        case '3': cout<<a*b<<endl;
                    break;
        case '4': cout<<a/b<<endl;
                    break;
        case '5': cout<<a%b<<endl;
                    break;
        default: cout<<"error"<<endl;
                    break;

    }
    cout<<"do you want to continue: ";
    cin>>pq;
    }
    while(pq=='Y' || pq=='y');
}
