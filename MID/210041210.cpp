#include<iostream>
#include<string>
using namespace std;

class GradeConverter{
        private:
            string names;
            int ages;
            float GPA;
        public:
            GradeConverter(string names,int ages,float GPA)
            {
                this->names = names;
                this->ages = ages;
                this->GPA = GPA/1.5;
            }
             void display()
            {
                cout<<"Name of the student is "<<names<<endl;
                cout<<"Age is "<<ages<<endl;
                cout<<"German GPA is "<<GPA<<endl;

            }

};

class Student{
        private:
            string names;
            int ages;
            float GPA;
        public:
            static int total_students;
            Student()
            {
                
            }
            Student(string names,int ages,float GPA)
            {
                total_students++;
                this->names = names;
                this->ages = ages;
                this->GPA = GPA;
            }
            operator GradeConverter() const
            {
                return GradeConverter(names,ages,GPA);
            }
            void display()
            {
                cout<<"Name of the student is "<<names<<endl;
                cout<<"Age is "<<ages<<endl;
                cout<<"GPA is "<<GPA<<endl;

            }
            float getGPA()
            {
                return GPA;
            }
            bool operator > (Student obj2)
            {
                if(GPA > obj2.GPA)
                {
                    return true;
                }
                else
                return false;
            }
};

class myarray{
    private:
        Student array[5];
    public:
        Student& operator[](int n)
        {
            if(n<0 || n>4)
            {
                cout<<"out of bound"<<endl;
            }
            else
            {
                return array[n];
            }
        }
       
};

int Student:: total_students = 0;

int main()
{
    myarray array;
    Student obj1("Shahi", 20 , 5.00);
    Student obj2("Arefeen", 19, 4.5);
    Student obj3("Ruhan", 18 , 4);
    Student obj4("Tanjil", 17, 3.5);
    Student obj5("Sakeef", 16, 6);
    GradeConverter obj6 = obj1;
    GradeConverter obj7 = obj2;
    GradeConverter obj8 = obj3;
    GradeConverter obj9 = obj4;
    GradeConverter obj10 = obj5;
    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();
    obj5.display();
    cout<<endl<<endl<<"Their German GPA:"<<endl;
    obj6.display();
    obj7.display();
    obj8.display();
    obj9.display();
    obj10.display();
    cout<<endl<<endl;
    
    array[0]= obj1;
    array[1]= obj2;
    array[2]= obj3;
    array[3]= obj4;
    array[4]= obj5;

    cout<<"Before Sort: "<<endl<<endl;

    array[0].display();
    array[1].display();
    array[2].display();
    array[3].display();
    array[4].display();
    
    for(int i=0;i<5;i++)
    {
        Student temp= array[i];
        for(int j=i; j<5;j++)
        {
            if(array[j]>array[i])
            swap(array[j],array[i]);
        }
    }
    


    cout<<endl<<"After sort: "<<endl<<endl;
    array[0].display();
    array[1].display();
    array[2].display();
    array[3].display();
    array[4].display();

    cout<<endl<<endl<<"Total Number of Students "<<Student::total_students<<endl<<endl;;
        
}

