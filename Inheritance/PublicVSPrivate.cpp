// Inheritance is cherecteristices of Anynothing

#include <bits/stdc++.h>
using namespace std;
// This is the perents class
class human
{
public:
    int age;
};
// Inherit from prerents class in child class
// class _name: mode _perents class
class male : private human // protected hoy thake proteteced as private
{
public:
    string name;
    void sleep()
    {
        cout << "male is sleeping" << endl;
    }

public:
    int getage()
    {
        return age;
    }
    void setage(int age)
    {
        this->age = age;
    }
};
int main()
{
    male ob;
    ob.name = "MD Rifat Hossen";
    ob.setage(45);
    cout << "Male name :" << ob.name << endl;
    cout << "Male age is :" << ob.getage() << endl;
    ob.sleep();

    return 0;
}