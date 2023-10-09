#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}
int main()
{
    Student arry[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, arry[i].name);
        cin >> arry[i].roll >> arry[i].marks;
        cin.ignore();
    }
    // sort function
    sort(arry, arry + 3, cmp);
    for (int i = 0; i < 3; i++)
    {
        cout << arry[i].name << " " << arry[i].roll << " " << arry[i].marks << endl;
    }

    return 0;
}