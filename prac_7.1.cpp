#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;
    char ID[5];
    char name[20],branch[5],en[8],refe[20];

    cout<<"************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"************************************************"<<endl;

    cout<<"Enter Enrollment Number:";
    cin>>ID;

    cout<<"Enter Student Name:";
    cin>>name;

    cout<<"Enter Branch Name:";
    cin>>branch;

    cout<<"--------------------------------------------"<<endl;


    cout<<"Student Refrence:"<<endl;
    cin>>refe;
    for(i=0;name[20]!=0;i++)
    {
        refe[20]=name[20];

    }
         refe[20]= ' ';
         i++;

    for(j=0;en[8]!=0;j++)
    {
        refe[20]=en[8];
    }
    refe[20]='\0';

    cout<<"-----------------------------------------------"<<endl;





}
