#include<iostream>
using namespace std;
class Publication
{
    public:
    string title;
    float price;
};
class Book:public Publication
{
    public:
    int pagecount;
    void getdata()
    {
        cin>>title;
        cin>>price;
        cin>>pagecount;
    }
    void putdata()
    {
        cout<<title<<endl;
        cout<<price<<endl;
        cout<<pagecount<<endl;
    }
}
class Cassette:public Publication
{
    public:
    float minute;
    void getdata()
    {
        cin>>title;
        cin>>price;
        cin>>minute;
    }
    void putdata()
    {
        cout<<title<<endl;
        cout<<price<<endl;
        cout<<minute<<endl;
    }
}
int main()
{
    Book a;
    Cassette b;
    a.getdata();
    b.getdata();
    a.putdata();
    b.putdata();
    return 0;
}
