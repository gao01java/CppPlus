#include<iostream>

/* C++ 입력과 출력*/
int main(){
    using namespace std;
    
    int carrots; //변수선언 
    cout<<"당근을 몇개 가지고 있어?"<<endl; 
    cin>>carrots; //입력한 변수 대입 
    cout<<"지금 당근을 "<<carrots<<"개 가지고 있다"<<endl; //변수 출력
    carrots=carrots +2;
    cout<<"야 잠만 요기 당금 두개 더있어 그럼 지금 당근"<<carrots<<"가지고 있다"<<endl;
    return 0;
}