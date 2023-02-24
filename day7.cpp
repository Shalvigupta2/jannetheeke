#include <iostream>
#include <fstream>
using namespace std;
int main()
{
fstream student; 
student.open("student_write.txt",ios::app);  
// if(!student_write) 
// {
// cout<<"File creation failed";
// }
// else
// {
// cout<<"New file created";
student<<"Learning File handling";    //Writing to file
student.close(); 
ifstream student1;
string str;
student1.open("student_write.txt",ios::in); 
student1>>str;
while(!student1.eof())
{
    
     cout<<str;
     student1>>str;
    
}
student1.close(); 
  
return 0;
}