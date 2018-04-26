#include<iostream>
using namespace std;
double add(double,double);
double sub(double,double);
double mul(double,double);
double div(double,double);
double calculate(double x,double y,double (*pf)(double,double));
int main(){
    double x,y;
    double (*p1)(double,double)=add;
    double (*p2)(double,double)=sub;
    double (*p3)(double,double)=mul;
    double (*p4)(double,double)=div;
    cout<<"please input two integers:";
    cin>>x>>y;
    double (*pf[4])(double,double)={p1,p2,p3,p4};
    int i=0;
    while(i++<4){
        double q = calculate(x,y,pf[i-1]);
        cout<<"the result is:"<<q<<endl;
    }
    return 0;
}
double add(double x,double y){
    return x+y;
}
double sub(double x,double y){
    return x-y;
}
double mul(double x,double y){
    return x*y;
}
double div(double x,double y){
    return x/y;
}
double calculate(double x,double y,double (*pf)(double,double)){
    return pf(x,y);
}


