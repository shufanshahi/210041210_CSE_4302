#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    private:
        string first_name;
        string last_name;
        int id;
        int birth_year;
        vector<pair<string,float>> course;
        int obtained_marks;
     public:   
        static int totalStudents;

        Student(string first_name,string last_name,int id)
        {
            this->first_name=first_name;
            this->last_name=last_name;
            this->id=id;
        }
        void enrollInCourses(string courseName)
        {
            course.push_back({courseName,0.0});
        }
        void obtainedMarks(string courseName, int marks)
        {
            //cout<<marks;
            for(auto it:course)
            {
                if(it.first==courseName)
                {
                    it.second=marks;
                    break;
                }
            }
        }
        float setGPAForEachCourse(int marks)
        {
            
            if(marks>=80)
            return 4;
            else if(marks>=75)
            return 3.75;
            else if(marks>=70)
            return 3.7;
            else if(marks>=65)
            return 3.65;
            else if(marks>=60)
            return 3.6;
            else if(marks>=55)
            return 3.55;
            else if(marks>=50)
            return 3.5;
            else if(marks>=45)
            return 3.45;
            else if(marks>=40)
            return 3.4;
            else if(marks>=35)
            return 3.35;
            else if(marks>=30)
            return 3.3;
            else
            return 0.0;
        }

        float displayCGPA()
        {
            float tcgpa=0;
            for(auto it:course)
            {
                tcgpa+=(setGPAForEachCourse(it.second));
            }
            //cout<<tcgpa<<"ciw"<<endl;
            return (tcgpa/(course.size()));
        }
        void willGraduate()
        {
            if(displayCGPA()>0.0)
            cout<<"will graduate"<<endl;
            else
            cout<<"wont graduate"<<endl;
        }
        void applyForScholarship()
        {
            if(displayCGPA()>3.8)
            cout<<"can apply for scholershipe"<<endl;
            cout<<"can't apply for scholershipe"<<endl;
        }
        void participateInInternship(string company)
        {
            if(displayCGPA()>3)
            {
                cout<<"can intern at "<<company<<endl;
            }
            else
            {
                cout<<"can't intern at "<<company<<endl;
            }
        }

        ~Student(){

              cout<<"Full name :"<<first_name<<" "<<last_name<<endl;
              cout<<"ID :"<<id<<endl;
              cout<<"Enrolled course: "<<endl;
              for(auto it:course)
              {
                  cout<<it.first<<endl;
              }
              cout<<"Graduation Status: "; willGraduate();
              cout<<"Scholarship Status: ";applyForScholarship();
              cout<<"Internship status: ";participateInInternship("Nokia");

        }

};

int Student::totalStudents=0;

int main()
{
    Student obj1("shahi","shufan ",210041210);
    obj1.enrollInCourses("cse");
    obj1.enrollInCourses("eee");
    obj1.obtainedMarks("cse",30);
    obj1.obtainedMarks("eee",30);

}