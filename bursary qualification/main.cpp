#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Welcome to the bursary application \n" << endl;
    cout<<"Enter your average mark: \n";
    int av_mark;
    cin>>av_mark;

    float parents_income;
    cout<<"Enter your parents income: ";
    cin>>parents_income;

    string able;
    bool disabled;
    cout<<"Enert D for disabled and A for abled: ";
    cin>>able;
    if (able=="D"){
        disabled=true;
    }
    else{
        disabled=false;
    }

    if (av_mark>=75){
        cout<<"You qualify for a bursary!";
    }

    else if (av_mark>60 && av_mark<75){
         if (able=="D" || disabled==true){
                cout<<"You qualify for a bursary";

         }
         else{
            cout<<"You do not qualify for a bursary";
         }
                              }



    return 0;
}
