#include<iostream>

using namespace std;

int main() {
    int age;
    cout<<"AGE : "<<endl;
    cin>>age;
    if(age<18){
        cout<<"Not Eligible"<<endl;
    }
    else if(age>=18){
        cout<<"Eligible"<<endl;
    }
    // switch (age)
    // {
    // case 18:
    //     cout<<"You are 18";
    //     break;
    // case 16:
    //     cout<<"Youre 16";
    //     break;
    
    // default:
    //     cout<<"No special cases"<<endl;
    //     break;
    // }
    return 0;
}