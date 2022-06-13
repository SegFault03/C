#include <iostream>
using namespace std;
//A class is very similar to a structure, except it can use OOP concepts. The basic structure is almost the same as that of a structure
class Student
{
    //Access specifier: determines the scope where the class name can be used
    public:

    //Class members or attributes
    int Roll;
    string name;
    int marks1;
    int marks2;
    double avg;

    //Class constructor: Special function having the same name as the class that gets called as soon as an object of the class is created
    Student(int a, string s, int m, int m2, double avrg)
    {
        this->Roll=a;
        this->name=s;
        this->marks1=m;
        this->marks2=m2;
        this->avg=avrg;
    }
    //NOTE: By default, all methods declared inside a class are called instance methods, meaning they cannaot be called or invoked
    //without first creating an instance(object) of a class. Use the keyword 'static' in front of the return-type to override this rule.
    //By default, all instance methods are non-static in nature, meaning they HAVE to be called using an object
    //Class function declaration: Functions on which objects of a class can be called. Can defined inside or outside the class
    void makeAverage();
    void printStudentArray();

};

void Student::makeAverage()
{
    double average=(this->marks1+this->marks2)/2; //'this' keyword is used by an object as a pointer to refer to it's own address. This eliminates the need of--
    //a pointer to refer to the object. 'This' behaves exactly like a pointer would. 
    this->avg= average;
}

void Student::printStudentArray()
{
    cout<<"Name: "<<this->name<<endl<<"Roll: "<<this->Roll<<endl;
    cout<<"Marks 1: "<<this->marks1<<endl<<"Marks 2: "<<this->marks2;
}
int main()
{
    int n,m1,m2,r;
    string nm;
    Student temp(16,"Niladri",2,3,5);
    temp.printStudentArray();
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    Student *array[n];      //array of class pointers
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name:"<<endl;
        ws(cin);
        getline(cin,nm);
        cout<<"Enter roll, marks1, marks2"<<endl;
        cin>>r>>m1>>m2;
        array[i]=new Student(r,nm,m1,m2,0);//'new' keyword functions a bit like malloc, return a "Class type" address with the address already typecasted
        array[i]->makeAverage();//when pointers refer to class objects, the error operator -> is used just like they are used in structures
        //NOTE: In a class, member functions are like member variables (Such as name, roll, etc. in this case), so pointers can be used to call them as well
        //Had it been an object instead of a pointer, statement would've looked like <Object-Name>.<Member-function or Memeber-variable>
    }
    for(int i=0;i<n;i++)
    array[i]->printStudentArray();
}

