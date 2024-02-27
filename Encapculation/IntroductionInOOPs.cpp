// Ojbect is entity ->stat->behaviou
// Accesse Modifier 1:public 2.private 3.protect
// By defult class is private
// private propertices accesse only in class
// In class properties in private we can use gatter and setter for the public
// setter can input value
// gatter means return value
// Dynamic allocation memmroy
// Constructor -> same name of object,No return type,No i/p Perametter, If you create a constructor it also crete the constructor
// perameterize constructor
// Destroctor same as constroctor
// ~
#include <bits/stdc++.h>
using namespace std;
class hero
{
    // propertices
private:
    int age;

public:
    char level;
    hero()
    {
        cout << "This is the constructor" << endl;
    }

    hero(int age)
    {
        this->age = age;
    }

    int getage()
    {
        return age;
    }
    char getlevel()
    {
        return level;
    }
    void setage(int a)
    {
        // you can use a condition for change the value
        age = a;
    }
    void setlevel(char c)
    {
        level = c;
    }
};
int main()
{

    hero rifat;

    rifat.setage(45);
    rifat.level = 'A';
    cout << rifat.getage() << endl;
    cout << rifat.level << endl;
    cout << sizeof(rifat) << endl;

    // Dynamically call
    hero *a = new hero(10);
    cout << a->getage() << endl;
    return 0;
}