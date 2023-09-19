#include<iostream>
#include<string>

using namespace std;

class StudentCollection{
            private:
                string names[10];
                double grades[10];
            public:
                int totalstudents=0;
                void addStudent(string name,double grade)
                {
                    
                    if(totalstudents<10)
                    {
                        cout<<totalstudents<<endl;
                        names[totalstudents]=name;
                        grades[totalstudents]=grade;
                        totalstudents++; 
                    }
                    else
                    {
                        cout<<"The array is full"<<endl;
                    }
                }

                double& operator[](string names)
                {
                    int index=0;
                    for(int i=0;i<10;i++)
                    {
                        if(names==this->names[i])
                        {
                            break;
                        }
                        else
                        index++;
                    }
                    return grades[index];
                }

                // double& operator[](string name)
                // {
                //     int index=0;
                //     for(int i=0;i<10;i++)
                //     {
                //         if(names==this->names[i])
                //         {
                //             break;
                //         }
                //         else
                //         index++;
                //     }
                //     return grades[index];
                // }
            // string getname(int pos)
            // {
                
            //     return names[pos];
            // }

};



int main()
{
    StudentCollection obj1;
    obj1.addStudent("shahi1",1.11);
    obj1.addStudent("shahi2",1.12);
    obj1.addStudent("shahi3",1.13);
    obj1.addStudent("shahi4",1.14);
    obj1.addStudent("shahi5",1.15);
    obj1.addStudent("shahi6",1.16);
    obj1.addStudent("shahi7",1.17);
    obj1.addStudent("shahi9",1.19);
    obj1.addStudent("shahi8",1.18);
    obj1.addStudent("shahi10",1.10);  
    obj1.addStudent("shahi11",1.11);
    obj1.addStudent("shahi11",1.11);
    obj1.addStudent("shahi11",1.11);
    obj1.addStudent("shahi11",1.11);

    double testgrade=obj1["shahi2"];
    cout<<testgrade<<endl;
    obj1["shahi2"]=2.22;
    testgrade=obj1["shahi2"];
    cout<<testgrade<<endl;
   
    
}