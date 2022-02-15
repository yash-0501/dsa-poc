#include <bits/stdc++.h>
using namespace std;

class Student{
    string name;
    public:
    int age;
    char gender;

    //Constructor
    Student(string s, int a, char g){
        name=s;
        age=a;
        gender=g;
    }

    //Default Constructor
    Student(){
        name="Rana";
        age=21;
        gender='M';
    }

    //copy constructor
    Student(Student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    //Setter function since string name is private
    void setName(string s){
        name=s;
    }

    //getter function
    void getName(){
        cout<<name;
    }

    void printInfo(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"Gender is: "<<gender<<endl;
    }

    bool operator == (Student &a){
        if(name == a.name && age==a.age && gender == a.gender)
            return true;
        else
            return false;
    }

};

int main()
{
    // Student a;
    // a.name = 'Urvashi';
    // a.age=22;
    // a.gender='F';

    cout<<"Enter number of Students: ";
    int n;
    cin>>n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Name ";
        string s;
        cin>>s;
        arr[i].setName(s);
        cout<<"Enter Age ";
        cin>>arr[i].age;
        cout<<"Enter Gender ";
        cin>>arr[i].gender;
    }

    for(int i=0;i<n;i++){
        arr[i].printInfo();
    }

    Student a("Urvi", 20, 'F');
    a.printInfo();

    Student c=a;

    c.printInfo();
    a.printInfo();
    if(c==a){
        cout<<"Same";
    }else{
        cout<<"Different";
    }
    return 0;
}