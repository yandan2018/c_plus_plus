#include<iostream>

using namespace std;

int celsius(){
    int cels;
    cout<<"please enter a celsius value:";
    cin>>cels;
    cout<<cels<<" degree celsius is "<<1.8*cels+32.0<<" degrees Fahrenheit"<<endl;
    return 0;
}
