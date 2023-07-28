#include<iostream>

double function_01(double);
int main(){
    using namespace std;
    double dhseh;
    cout<<"썹씨 온도를 입력하고 Enter키를 누르죠:";
    
    cin>>dhseh;
    double num2=function_01(dhseh);
    cout<<"섭씨:"<<dhseh<<"도는 화씨로:"<<num2<<"입니다";
    return 0;
}
double function_01(double num){
    return 1.8*num+32.0;
}