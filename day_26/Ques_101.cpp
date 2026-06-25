#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int secretNumber,guess;
    srand(time(0));
    secretNumber=rand()%100+1;

    cout<<"Welcoming to the Number Guessing Game!"<<endl;
    cout<<"I have selected a number between 1 and 100"<<endl;
    
    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        if(guess<secretNumber){
            cout<<"Too low! Try again."<<endl;
        } 
        else if(guess>secretNumber){
            cout<<"Too high!Try again."<<endl;
        }
        else{
            cout<<"Congratulation!You guess the number correctly!"<<endl;
        }
    }
    while(guess!=secretNumber);

} 