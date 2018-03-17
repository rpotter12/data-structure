/*Student and Professor are two subclasses in which Student subclass display the name and cgpa and Professor subclass
displays the name and number of publications.write a main program using polymorphism to display the data of one student
and one professor*/


#include<iostream>
using namespace std;
class Student;
class Professor;
class parent
{
    void getdata()
    {
    }
    void showdata()
    {
    }
};
class Student:public parent
{
    String name;
    float cgpa;
    void getdata()
    {
        cin>>name;
        cin>>cgpa;
    }
    void showdata()
    {
        cout<<name<<endl;
        cout<<cgpa<<endl;
    }
};
class Professor:public parent
{
    String name;
    int publications;
    void getdata()
    {
        cin>>name;
        cin>>publications;
    }
    void showdata()
    {
        cout<<name<<endl;
        cout<<publications<<endl;
    }
};
int main()
{
    Student a;
    Professor b;
    a.getdata();
    b.getdata();
    a.showdata();
    b.showdata();
    return 0;
}
