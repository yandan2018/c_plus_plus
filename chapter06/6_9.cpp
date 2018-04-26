#include<iostream>
#include<cstring>
#include<string>
#include<array>
#include<ctime>
#include<fstream>
#include<vector>
using namespace std;
const int arsize=20;
struct donators{
    string name;
    double donations;
};
int main(){
    ifstream inFile;
    inFile.open("test.txt");
    if(!inFile.is_open()){
        cout<<"could not open the file";
        cout<<"program terminating.\n ";
        exit(EXIT_FAILURE);
    }
    int renshu,cishu=0;
    double qian=0;
    inFile>>renshu;
    inFile.get();
    donators *ps = new donators[renshu];
    string line;
    char name_temp[arsize];
    vector<int> grant,ordinary;
    int count_grand=0,count_patrons=0;
    while(cishu++<renshu){
        getline(inFile,line);
        inFile>>qian;
        inFile.get();
        if(qian>10000){
            count_grand+=1;
            grant.push_back(cishu);
            }
        else{
            count_patrons+=1;
            ordinary.push_back(cishu);
            }
        (ps+cishu-1)->name =line;
        (ps+cishu-1)->donations=qian;
    }
    cout<<"grand patrons"<<endl;
    cout<<"-----------------"<<endl;
    int i=0,j=0;
    if(count_grand==0)
        cout<<"none"<<endl;
    else{
     for(int x: grant)
        cout<<(ps+x-1)->name<<endl<<(ps+x-1)->donations<<endl;
    }
    cout<<endl;
    cout<<"patrons"<<endl;
    cout<<"-----------------"<<endl;
    if(count_patrons==0)
        cout<<"none"<<endl;
    else{
        for(int x:ordinary)
            cout<<(ps+x-1)->name<<endl<<(ps+x-1)->donations<<endl;
    }
    return 0;
}
