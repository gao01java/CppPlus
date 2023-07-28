#include<iostream>


/*
함수 만들면 함수 원형 있어야 한다.


*/
int fc(int); 
int main(){
    using namespace std;

    int age;
    cout<<"나이 입력하세요"<<endl;
    cin>>age;
    int age1=fc(age);
    cout<<"당신의 나이를 월수로 나타낼 경우:"<<age1<<"입니다";
    return 0;
}
int fc(int sts){
    return sts*12;
}