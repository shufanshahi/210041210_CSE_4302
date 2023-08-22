#include<iostream>
#include<string>
using namespace std;

class Student{
        private:
            string first_name;
            string last_name;
            int id;
            int birth_year;
            string course;
            float marks;
        public:
            void setDetails(string temp_first_name,string temp_last_name,int temp_id,int temp_birth_year,string temp_course,float temp_marks)
            {
                first_name=temp_first_name;
                last_name=temp_last_name;
                id=temp_id;
                birth_year=temp_birth_year;
                course=temp_course;
                marks=temp_marks;
            }
            int displayAge()
            {
                return (2023-birth_year);
            }
            float displayGPA()
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

            void willGraduate()
            {
                if(marks<30)
                {
                    cout<<"Won't Graduate"<<endl;
                }
                else
                {
                    cout<<"Will Graduate"<<endl; 
                }
            }

            float updatedGPA()
            {
                marks+=((marks/100)*10);
                return displayGPA();
            }

            void printTranscript()
            {
                cout<<"Name: "<<first_name<<" "<<last_name<<endl;
                cout<<"Student ID: "<<id<<endl;
                cout<<"Current age: "<<2023-birth_year<<endl;
                float print_Gpa=displayGPA();
                cout<<"GPA: "<<print_Gpa<<endl;
            }

};

int main()
{
    Student stu1;
    stu1.setDetails("shufan","Shahi",210041210,2002,"CSE",70);
    cout<<"Age: "<<stu1.displayAge()<<endl;
    cout<<"GPA: "<<stu1.displayGPA()<<endl;
    stu1.willGraduate();
    stu1.updatedGPA();
    stu1.printTranscript();
    



}
