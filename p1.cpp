 #include <iostream>
 using namespace std;
 int main()
 {
short int ch,
long int a,B=0;
m:cout<<"1:D,2:C,3:BC";
cin>>ch;
if(ch<1 || ch>3)
{
    cout<<"error invild choice";
    go to m;
}
else
{
    if(ch=1)
    {
        d:cout<<"enter amount:";
        cin>>a;
        if(b<a)
        {
            cout<<"error insufficient balance";
            go to d;

        }
else
{
    B=B-a
}
go to m;

    }
    else if(ch==2)
    {
        cout<<"enter amout";
        cin>>a;
        B=B-a
        go to m;

    }
    else if(ch=3)
    {
        cout<<b;
        go to m;
    }
    else
    {
        go to e;
    }
}
e;
 }
