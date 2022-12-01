#include <iostream>
using namespace std;

int main() {

  int f;
  int s;
  string op;

  cout<<"=====WELCOME===="<<endl;
  cout<<endl;
  
  cout<<" Enter Frist Numder: ";
  cin>>f;
  cout<<" Enter Second Numder: ";
  cin>>s;

  cout<<endl;
  cout<<" For ADD 'add'"<<endl;
  cout<<endl;
  cout<<" FOR Mines 'sub'"<<endl;
  cout<<endl;
  cout<<" FOR Multeplation 'mul'"<<endl;
  cout<<endl;
  cout<<" FOR Divied 'div'"<<endl;
  cout<<endl;
  cout<<" Enter Opration :"<<endl;
  cout<<" ";
  cin>>op;

  if(op == "add"){
    cout<<" ANSWER:"<<endl;
    cout<<" "<<(f+s)<<endl;
  }else if(op == "sub"){
    cout<<"ANSWER"<<endl;
    cout<<" "<<(f-s)<<endl;
  }else if(op == "mul"){
    cout<<"ANSWER"<<endl;
    cout<<" "<<(f*s)<<endl;
  }else if (op == "div"){
    cout<<"ANSWER"<<endl;
    cout<<" "<<(f/s)<<endl;
  }else{
    cout<<"sorry"<<endl;
  }

  return 0;
}
