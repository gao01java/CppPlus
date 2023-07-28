#include<iostream>

using namespace std;
double miles(double);
int main(){
    cout<<"광년수를 입력하고 Enter키를 누르줘:";
    double num1;
    cin>>num1;
    double num2=miles(num1);
    cout<<num1<<"광년은:"<<num2<<"천문 단위 입니다";
}
double miles(double num2){
    return num2*63240;
}