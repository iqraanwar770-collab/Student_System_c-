#include<iostream>
using namespace std;
  class student
  { 
    string name[2];
    int id[2];
    int marks[2];
    public:
 
       void inputdata()
    {
       for(int i=0;i<2;i++){
           cout<<"enter name:"<<endl;
           cin>>name[i];
           cout<<"enter id:"<<endl;
           cin>>id[i];
           cout<<"enter marks:"<<endl;
           cin>>marks[i];
       }
    }
    void outputdata()
    {
       for(int i=0;i<2;i++){
           cout<<" name:"<<name[i]<<endl;
           cout<<" id:"<<id[i]<<endl;
           cout<<" marks:"<<marks[i]<<endl;
       }
    }
};
 int main(){
    student s1;
    s1.inputdata();
    s1.outputdata();
 }
