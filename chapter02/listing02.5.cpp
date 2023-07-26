#include<iostream>
void simon(int); //simon()을 위한 함수 원형

int main(){
    using namespace std;
    simon(3); //simon()함수를 호출한다.
    cout<<"정수를 하나 고르시오";
    int count;
    cin>>count;
    simon(count); //simon()함수를 다시 호출한다.
    cout<<"끝!"<<endl; 
    return 0;
   // 날려버려 안타박해민 오오오오ㅗ오오오 박해민 무적엘지 박해민!
}

void simon(int n){ //simon()함수를 정의한다.
    using namespace std;
    cout<<"Simon 월,발기락을 "<<n<<"번 두드려다."<<endl;
}   //void형 함수에는 return 구문이 필요없다.