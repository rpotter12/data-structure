#include<iostream>
using namespace std;
int main()
{
    int a,s;
    char abc;
    cout<<"enter the size of an array: ";
    cin>>s;
    int arr[s+2];

    do
    {
        cout<<"1. create an array"<<endl;
        cout<<"2. dispaly the value"<<endl;
        cout<<"3. enter value in an array"<<endl;
        cout<<"4. enter a value to a specific position"<<endl;
        cout<<"5. delete a value from an position"<<endl;
        cin>>a;
        switch(a)
        {
            case 1: cout<<"enter the values of array";
                    for(int i=0;i<s;i++)
                    {
                        cin>>arr[i];
                    }
                    break;
            case 2: cout<<"displaying ";
                    for(int i=0;i<s;i++)
                    {
                        cout<<arr[i]<<endl;
                    }
                    break;
            case 3: cout<<"enter the value: ";
                    cin>>arr[s];
                    for(int i=0;i<=s;i++)
                    {
                        cout<<arr[i]<<endl;
                    }
                    break;
            case 4: cout<<"enter the position to enter the value: ";
                    int pos;
                    cin>>pos;
                    for(int i=s;i>=pos;i--)
                    {
                        arr[i]=arr[i-1];
                    }
                    cout<<"value to be entered: ";
                    int val;
                    cin>>val;
                    arr[pos-1]=val;
                    break;
            case 5: cout<<"enter the position value to be deleted:";
                    int newpos;
                    cin>>newpos;
                    for(int i=(newpos-1);i<s;i++)
                    {
                        arr[i]=arr[i+1];
                    }
                    break;
        }

        cout<<"do you want to continue: ";
        cin>>abc;
    }while(abc=='y');
}
