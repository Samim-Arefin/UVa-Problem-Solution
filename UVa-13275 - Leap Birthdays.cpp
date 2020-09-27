#include<iostream>
using namespace std;
int main() {
    int t,count=1;
    cin>>t;
    while(t--)
    {
        int day,month,birth_year,current_year;
        cin>>day>>month>>birth_year>>current_year;
        if(day!=29 || month!=2)
        {
          cout<<"Case "<<count<<": "<<current_year-birth_year<<endl;
        } else
        {
            int count1=current_year/4 - current_year/100 + current_year/400;
            int count2=birth_year/4 - birth_year/100 + birth_year/400;
            cout<<"Case "<<count<<": "<<count1-count2<<endl;
        }
        count++;
    }
    return 0;
}
