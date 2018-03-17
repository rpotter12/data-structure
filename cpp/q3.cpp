/*consider a publishing company that markets both book and audio cassette version to its works.create a class Publications
that stores the title and price of a publication.Derive the following two classes from above Publication class Book which
adds a page count and Tape which adds a playing time in minutes. each class should have getdata() function to get its data
from the user at the keyboard.write the main() function to test the Book and Tape classesby creating instances of them
asking the user to fill in data with get_data() and then displaying it using put_data()*/


#include<istream>
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
