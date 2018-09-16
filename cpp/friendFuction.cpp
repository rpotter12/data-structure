/*create a class Distance with feet and inch and with a print function to print function to print the distance.
write a non-member function max which returns the larger of two distance objects, which are
arguments. write a main program that accepts two distance objects from the user,compare them and display the larger*/


#include<iostream>
using namespace std;
class Distance
{
    public:
    int inch,feet;
    void print()
    {
        cout<<feet<<"."<<inch;
    }
    friend void Max(Distance a,Distance b);
};
void Max(Distance a,Distance b)
{
    Distance c;
    if(a.feet>b.feet)
    {
        c.feet=a.feet;
    }
    else if(a.feet<b.feet)
    {
        c.feet=b.feet;
    }
    else if(a.feet==b.feet)
    {
        if(a.inch>b.inch)
        {
            c.inch=a.inch;
        }
        else if(a.inch<b.inch)
        {
            c.inch=a.inch;
        }
    }
    c.print();
}
int main()
{
    Distance a,b;
    cin>>a.feet>>a.inch;
    cin>>b.feet>>b.inch;
    Max(a,b);
    return 0;
}
