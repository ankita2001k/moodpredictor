#include <iostream>
using namespace std;
#include <string>
 

int main()
{
   char name[100];
 
 cout << "Enter your name \n";
 cin.getline(name,100);
 
 cout << "Hello! "<<name<<", You will be asked 10 questions and you'll get your results.\n";
    
 cout<<"for each of the following questions, pree 0 for false,1 for partially true and 2 for true\n";

 cout<<"Q1) I am feeling very energetic.\n";
 int n1;
 cin>>n1;
 cout<<"Q2) I am able to deal with all sorts of people.\n";
 int n2;
 cin>>n2;
 cout<<"Q3) I feel like a superhero\n";
int n3;
 cin>>n3;
 cout<<"Q4) I know who I can trust\n";
 int n4;
 cin>>n4;
 cout<<"Q5) My parents understand me well\n";
 int n5;
 cin>>n5;
 cout<<"Q6) Relationship with people can work in my case\n";
 int n6;
 cin>>n6;
  cout<<"Q7) I live in a suitable environment\n";
  int n7;
 cin>>n7;
 cout<<"Q8) I live in a suitable environment\n";
 int n8;
 cin>>n8;
  cout<<"Q9) I live in a suitable environment\n";
 int n9;
 cin>>n9;
  cout<<"Q10) I live in a suitable environment\n";
 int n10;
 cin>>n10;

 int result=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
 cout<<"your result is "<<result<<"/20\n";
if(result>=18)
cout<<name<<"! you seem really happy today";
else if(result>=12)

cout<<name<<"! your mood seems good  today";
else if(result>=8)
    cout<<name<<"! you seems fair today";
else if(result<=8)
    cout<<name<<"! you  should try to help yourself out";
else if(result<20|| result<0)
    cout<<name<<"! sorry, you chose some wrong input";




    return 0;
}