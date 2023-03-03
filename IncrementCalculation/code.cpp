#include <iostream>

using namespace std;

int main(){
    
    int salary;
    float appraisal;
    cout<<"Enter the salary"<<endl;
    cin>>salary;
    cout<<"Enter the Perfomance appraisal rating"<<endl;
    cin>>appraisal;
    if ((appraisal < 1 || appraisal > 5) || (salary <= 0))
    {
        cout<<"invalid input"<<endl;  
        return 0;
    }
    else if (appraisal >= 1 && appraisal <= 3)
    {
        salary *= 1.1;
    }
    else if (appraisal <= 4)
    {
        salary *= 1.25;
    }
    else if (appraisal <= 5)
    {
        salary *= 1.3;
    }
    cout<<salary<<endl;
    return 0;
}
