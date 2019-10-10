#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of stack: ";
    cin>>n;
    int a[n];
    cout<<"1. insertion"<<endl;
    cout<<"2. deletion"<<endl;
    cout<<"3. display"<<endl;
    cout<<"4. exit"<<endl;
    int choose,top=-1,num;
    while(1)
    {
        cout<<"enter option: ";
        cin>>choose;

        if(choose==1)
        {
            if(top==n-1)
            {
                cout<<"overflow"<<endl;
            }
            else
            {
                cout<<"enter number: ";
                cin>>num;
                top++;
                a[top]=num;
            }
            continue;
        }
        else if(choose==2)
        {
            if(top==-1)
            {
                cout<<"underflow"<<endl;
            }
            else
            {
                top--;
            }
            continue;
        }
        else if(choose==3)
        {
            for(int i=0;i<=top;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            continue;
        }
        else
        {
            break;
        }
    }
}
