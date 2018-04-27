#include<iostream>
using namespace std;
template<typename T>
double SumArray(T arr[],int n);
template<typename T>
double SumArray(T *arr[],int n);

struct debts{
    char name[50];
    double amount;
};

int main(){
    int things[6]{13,31,103,301,310,130};
    struct debts mr_E[3]{
      {"yandan",2400.0},
      {"yumo",1300.0},
      {"yingyuan",1800.0},
    };
    double *pd[3];
    for(int i=0;i<3;i++)
        pd[i]=&mr_E[i].amount;
    cout<<"sum of mr.e's counts of things:\n";
    double sum_things=SumArray(things,6);
    cout<<sum_things<<endl;
    double sum_pd=SumArray(pd,3);
    cout<<sum_pd<<endl;
    return 0;
}
template <typename T>
double SumArray(T arr[],int n){
    double sum=0;
    cout<<"template A \n";
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

template <typename T>
double SumArray(T * arr[],int n){
    double sum=0;
    cout<<"template B\n";
    for(int i=0;i<n;i++)
        sum+=*arr[i];
    return sum;

}

