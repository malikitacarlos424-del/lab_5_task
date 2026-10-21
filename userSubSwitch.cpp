#include<iostream>
using namespace std;

int main(){
    srand(time(0));
    int DaysUntilExpiration=rand()%10+1;
    cout<<"the random days are "<<DaysUntilExpiration<<endl;
    switch(DaysUntilExpiration){
        case 0:
            cout<<"Your subscription has expired"<<endl;
            break;
        case 1:
            cout<<"Your subscription is expires within a day"<<DaysUntilExpiration<<endl;
            cout<<"Please renew and save 20% "<<endl;
            break;
        case 2:
            cout<<"Your subscription will expires in "<<DaysUntilExpiration<<endl;
            cout<<"Please renew and save 10% "<<endl;
            break;
        case 3:
            cout<<"Your subscription will expire in "<<DaysUntilExpiration<<" days. Please renew your subscription."<<endl;
            break;
        default:
            cout<<"You have an active subscription valid for "<<DaysUntilExpiration<<" days"<<endl;
    }
    return 0;
}