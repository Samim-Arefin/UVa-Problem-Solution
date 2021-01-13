
#include<iostream>
using namespace std;
int main()
{
    int t,count=0;
    char ch;
    cin>>t;
    while(t--)
    {
        int current_day,current_month,current_year,age;
        int birth_day,birth_month,birth_year;
        cin>>current_day>>ch>>current_month>>ch>>current_year;
        cin>>birth_day>>ch>>birth_month>>ch>>birth_year;
        if(birth_day>current_day)
        {
            current_month-=1;
        }
        if(birth_month>current_month)
        {
            current_year-=1;
        }
        age=current_year-birth_year;
        count++;
        if(age<0)
        {
            cout<<"Case "<<"#"<<count<<":"<<" "<<"Invalid birth date"<<endl;
        }
        else if(age>130)
        {
            cout<<"Case "<<"#"<<count<<":"<<" "<<"Check birth date"<<endl;
        }
        else
        {
            cout<<"Case "<<"#"<<count<<":"<<" "<<age<<endl;
        }
   }
   return 0;
}
