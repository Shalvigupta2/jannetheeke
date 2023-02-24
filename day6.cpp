#include<iostream>
using namespace std;
class student
{
    private:
    string UID;
    string name;
    string address;
    int contact;
    public:
    void getdata()
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        cout<<"\nEnter your UID : ";
        getline(cin,UID);
        cout<<"Your address and contact : ";
        getline(cin,address);
        cin>>contact;
    };
    void printdata()
    {
        cout<<"Name : "<<name<<" UID : "<<UID<<" address : "<<address<<" contact : "<<contact;
    };

};
class studytime
{
    private:
    int codetime=0,studytime=0;
    void get_totaltime()
    {
        cout<<"Enter your code and study : ";
        cin>>codetime,studytime;        

    }
    void printdata()
    {
        int total_time = codetime + studytime;
        cout<<"Your code time is : "<<codetime<<"\nand study time is : "<<studytime;
        cout<<"\nTotal time is : "<<total_time;

    };
 
};
class grade : public student,public studytime
{
    private:
    int sub1_marks=0,sub2_marks=0,sub3_marks=0;
    public:
    void getdata_grade();
    void printdata();

};
int main()
{
    return 0;
}    