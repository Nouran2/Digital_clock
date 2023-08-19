#include<iostream>
#include<windows.h>
using namespace std;
int main(){
int hours,min,sec;
hours=0; min=0; sec=0;
cout<<"Hours :";
cin>>hours;
cout<<"Minutes :";
cin>>min;
cout<<"Seconds :";
cin>>sec;


while (true)
{ system("cls");
    
if(sec>59)
{
    min++;
    sec=0;
}
if(min>59)
{
    hours++;
    min=0;
}
if(hours>23 && hours==24)
{
    hours=0;
}
else if (hours>24)
{
    cout<<"Wrong input";
    break;
}
cout<<hours<<":"<<min<<":"<<sec;
sec++;
Sleep(1000);
}
}