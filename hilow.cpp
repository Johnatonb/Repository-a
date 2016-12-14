# include <iostream>
# include <random>
# include <cstdlib>
# include <time.h>
using namespace std;

int hilow(){
    srand (time(NULL));
    static int randomNumber = rand() % 100 + 1;
    cout<<"==========================================="<<endl
    <<"You are trying to guess a random number."<<endl
    <<"Guess a random number from 1 to 100."<<endl
    <<"It will tell you if you are Hi or Low."<<endl
    <<"==========================================="<<endl;
    long long int guess = 0;
        for(long long int guessCount=0;guessCount<21;guessCount++){
            for(guess==0;guess!=randomNumber;cin>>guess){
                cin>>guess;
                    if(guess!=randomNumber){
                        if(guess>randomNumber&&guess<101){
                            cout<<"Hi"<<endl<<"==========================================="<<endl;
                            break;
                        }else if(guess<randomNumber&&guess>0){
                            cout<<"Low"<<endl<<"==========================================="<<endl;
                            break;
                        }else{
                            cout<<"Enter a number in the bounds"<<endl
                            <<"==========================================="<<endl;
                            break;
                }
            }else{
            cout<<"You got it right the number was "<<randomNumber<<"."<<endl
            <<"==========================================="<<endl;
            break;
        }
    }
}
}


int main(){
    hilow();
}

