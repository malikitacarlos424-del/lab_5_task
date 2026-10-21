#include<iostream>
#include<string>
using namespace std;

int main(){
    int DaysUntilExpiration=rand()%10+1;
    cout<<"the random days are "<<DaysUntilExpiration<<endl;
    if(DaysUntilExpiration<=10){
        cout<<"Your subscription will expire in "<<DaysUntilExpiration<<" days. Please renew your subscription."<<endl;
    }
    else if(DaysUntilExpiration<5){
        cout<<"Your subscription is expires in "<<DaysUntilExpiration<<endl;
        cout<<"Please renew and save 10% "<<endl;
    }
    else if(DaysUntilExpiration<1){
        cout<<"Your subscription is expires within a day"<<DaysUntilExpiration<<endl;
        cout<<"Please renew and save 20% "<<endl;
    }
    else if(DaysUntilExpiration==0){
        cout<<"Your subscription has expired"<<endl;
    }
    else{
        cout<<"You have an active subscription valid for "<<DaysUntilExpiration<<" days"<<endl;
    }
    return 0;
}