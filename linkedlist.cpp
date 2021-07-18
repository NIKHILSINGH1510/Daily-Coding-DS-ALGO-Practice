#include<iostream>
using namespace std;

class student{
    int roll,age;
    string name;

    public:
    void setvariable(){
        cin>>roll>>age;
        cin>>name;
    }

    void showvariable();
};
void student::showvariable(){
        cout<<roll<<" "<<age<<name;
    }
int main(){
    student obj1;
    obj1.setvariable();
    obj1.showvariable();

return 0;
}