#include <fstream>
#include<iostream>
using namespace std;
int main()
{
int x[3]={-1,-2};
for(int i=0;i<2;i++)
{
    int ex=x[i];
    try
    {
        if(ex>0)
        throw ex;
        else
    //throwing a character as exception
        throw 'ex';
    }
    catch(int ex)//to catch numeric exceptions
    {
        cout<<"integer exception";
        
    }
    catch(char ex)//to catch character/ string exceptions
    {
        cout<<"Charcter exception\n";
    }
    
}

}