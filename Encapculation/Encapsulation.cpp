// wrapping up data mumber and function
// DM->properstics;F->mathode
// ->capsol of the  calss
// all->DM->private
// same class we accesse
// information Hiding called

#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int age;
    int height;

public:
    int getage()
    {
        return age;
    }
    int getheight()
    {
        return height;
    }
    string getname()
    {
        return name;
    }
    void setage(int age)
    {
        this->age = age;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setheigh(int height)
    {
        this->height = height;
    }
};
int main()
{
    student s1;
    s1.setage(18);
    s1.setheigh(5.6);
    s1.setname("Md RIfat Hossen");
    cout << "Student name :" << s1.getname() << endl;
    cout << "Student Age :" << s1.getage() << endl;
    cout << "Student height  :" << s1.getheight() << endl;

    return 0;
}
