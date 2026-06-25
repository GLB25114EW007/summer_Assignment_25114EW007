#include<iostream>
using namespace std;
int main(){
    int score=0;
    int answer;
    cout<<"===== Welcome to Quiz Game ====="<<endl;

//Question 1
    cout<<"\n1.What is the capital of India?"<<endl;
    cout<<"1.Mumbai\n2.Delhi\n3.Kolkata\n4.Chennai"<<endl;
    cout<<"Enter your answer: ";
    cin>>answer;
    if(answer==2){
        score++;
    }

    //Question 2
    cout<<"\n2.How many planets are in the solar system?"<<endl;
    cout<<"1.9\n2.8\n3.5\n4.10"<<endl;
    cout<<"Enter your answer: ";
    cin>>answer;
    if(answer==2){
        score++;
    }
 //Question 3
   cout<<"\n3.Which planet is known as Red Planet?"<<endl;
  cout<<"1.Earth\n2.Venus\n3.Mars\n4.Jupitar"<<endl;
  cout<<"Enter your answer: ";
  cin>>answer;
  if(answer==3){
   score++;
  }

  //Question 4
  cout<<"\n4.Who is the Father of Computers?";
  cout<<"1.Charles Babbage\n2.Newton\n3.Einstein\n4.Tesla"<<endl;
  cout<<"Enter your answer: ";
  cin>>answer;
  if(answer==1){
    score++;
  }

  //Question 5
  cout<<"\n5.What is 10+15?"<<endl;
  cout<<"1.20\n2.35\n3.10\n4.25"<<endl;
  cout<<"Enter your answer: ";
  cin>>answer;
  if(answer==4){
    score++;
  }

  //Result
  cout<<"\n===== Quiz Finished ====="<<endl;
  cout<<"Your Score: "<<score<<" out of 5"<<endl;

  if(score==5){
    cout<<"Exellent!"<<endl;
  }
  else if(score>=3){
    cout<<"Good job!"<<endl;
  }
  else{
    cout<<"Better luck next time!"<<endl;
  }

}