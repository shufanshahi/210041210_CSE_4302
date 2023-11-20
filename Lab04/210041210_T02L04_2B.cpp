#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string firstName;
        string lastName;
        string studentID;
        int birthYear;
        string course;
        int obtainedMark;
        static int totalStudent;
    
    public:
        
        Student(string firstName,string lastName,string id,int birthYear)
        {
            this->firstName=firstName;
            this->lastName=lastName;
            studentID=id;
            this->birthYear=birthYear;
            totalStudent++;
         
        }
        ~Student()
        {
            totalStudent--;
        }
        void enrollingCourse(string courseName)
        {
            this->course=courseName;
            obtainedMark=0.0;
        }
        string generateEmail()
        {
            string email=firstName+lastName+"@iut-dhaka.edu";
            return email;
        }
        void obtainedMarks(int marks)
        {
            obtainedMark=marks;
        }

       float setGPAForEachCourse()
       {
            int marks= obtainedMark;

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

    void willGraduate()
    {
        float gpa=setGPAForEachCourse();
        if(gpa==0.0)
        cout<<"will not pass"<<endl;
        else
        cout<<"will Graduate"<<endl;
    }

    void applyForScholarship()
    {
        float gpa=setGPAForEachCourse();
        if(gpa>3.8)
        cout<<"Can apply for Scholarship"<<endl;
        else
        cout<<"Can't apply for Scholarship"<<endl;
    }
    void participateInInternship(string company)
    {
        float cgpa=setGPAForEachCourse();
        if(cgpa>3.0)
        cout<<"Can apply for Internship at "<<company<<endl;
        else
        cout<<"Can't apply for Internship at "<<company<<endl;
    }
    void printAcademicRecord()
    {
        cout<<"Full name :"<<firstName<<" "<<lastName<<endl;
        cout<<"ID :"<<studentID<<endl;
        cout<<"Enrolled course: "<<course<<endl;
        cout<<"Graduation Status: "; willGraduate();
        cout<<"Scholarship Status: ";applyForScholarship();
        cout<<"Internship status: ";participateInInternship("Nokia");

    }
        


};

int Student::totalStudent=0;

int main()
{
    //cout<<Student::totalStudent<<endl;
    Student obj1("Shahi","Shufan","210041210",2002);
    //cout<<Student::totalStudent<<endl;
    obj1.enrollingCourse("CSE");
    obj1.generateEmail();
    obj1.obtainedMarks(80);
    obj1.printAcademicRecord();
    
}