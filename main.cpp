#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    while(true){
    int x,n,k=1;
    string choice,sure;
    cout<<"enter a number to calculate: ";
    cin>>x;
    cout<<"enter the number of repetition: ";
    cin>>n;
    while(n<1||n>100){
        cout<<"please choose a number from 1 to 100 : ";
        cin>>n;
    }
    long double r=1.0,result=1.0;
    cout<<"e^"<<x<<" using cmath ="<<exp(x)<<endl;
    cout<<"e^"<<x<<" using the binomial function : "<<endl;
    cout<<setfill('0')<<setw(7)<<result<<" ";
    for(int i=1;i<n;i++){
        for(int j=1;j<=(i);j++){
            r*=(x*(1.0/j));
        }
        result+=r;
        cout<<setfill('0')<<setw(7)<<result<<" ";
        if((k+1)%10==0){
            cout<<endl;
        }
        r=1.0;
        k++;
    }
    cout<<"Do you want to continue ?"<<endl<<"1-Yes"<<endl<<"2-No"<<endl<<">>";
    cin>>choice;
    while(choice!="1"&&choice!="2"&&choice!="N"&&choice!="Y"&&choice!="y"&&choice!="n"&&choice!="yes"&&choice!="no"&&choice!="Yes"&&choice!="No"&&choice!="1-yes"&&choice!="1-Yes"&&choice!="2-no"&&choice!="2-No"){
        cout<<"Please choose 1 or 2"<<endl<<">>";
        cin>>choice;
    }
    if(choice=="1"||choice=="Y"||choice=="y"||choice=="yes"||choice=="Yes"||choice=="1-yes"||choice=="1-Yes"){
        continue;
    }
    else{
        cout<<"Are you sure? "<<endl<<"1-Yes"<<endl<<"2-No"<<endl<<">>";
        cin>>sure;
         while(sure!="1"&&sure!="2"&&sure!="N"&&sure!="Y"&&sure!="y"&&sure!="n"&&sure!="yes"&&sure!="no"&&sure!="Yes"&&sure!="No"&&sure!="1-yes"&&sure!="1-Yes"&&sure!="2-no"&&sure!="2-No"){
        cout<<"Please choose 1 or 2"<<endl<<">>";
        cin>>sure;
    }
    if(sure=="1"||sure=="Y"||sure=="y"||sure=="yes"||sure=="Yes"||sure=="1-yes"||sure=="1-Yes"){
        break;
    }
    else{
        continue;
    }
    }
    }
    return 0;
}
