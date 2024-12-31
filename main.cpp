#include<iostream>
#include<string>
#include<vector>

using namespace std;

class MyStrArray{

public:
    vector<string> strVector;
    int length;
    MyStrArray(string str): strVector{str}, length{1}{
   }

    string getString(){ 
    return strVector[length];
   }

    void pushStr(string s){
      strVector.push_back(s);
      length++;
   }
};

int main(){

MyStrArray newArray("Jay");

int n=newArray.length;

cout<<"String Length:"<<newArray.length<<endl;

cout<<"String :"<<newArray.getString()<<endl;

cout<<"\n========================"<<endl;

newArray.pushStr("Ken");

cout<<"String Length:"<<newArray.length<<endl;

cout<<"String :"<<newArray.getString()<<endl;


return 0;
}