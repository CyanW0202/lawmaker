/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
A textbase game for my politic class project.
Chia
9/25/2021
Ver1
*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unistd.h>
#include "lawmaker_h.h"
using namespace std;
int plot(int plotChoice, int count);
bool party();
int plot_count = 0;
int plot_choice = 0;
int role = 0;
Senate S1;
the_House H1;
int main()
{
    cout<<"Choose a character for being a parliamentarian from \n(1)the Senate \n(2)the House ";
    cin>>role;
    plot_choice = plot(role, plot_count);
    for(int i =1; i<5; i++){
        plot_choice = plot(plot_choice, plot_count);
    }
    
    

    return 0;
}
int plot(int plotChoice, int count){
    cout<<"You are sitting in a car, and your calendar is in your hand...\n";
    usleep(1000000);
    switch(role){
                case 1:
                    for(int i =0; i<5; i++){
                        cout<< "("<< i+1 <<") "<<S1.list[i]<<"\n";
                    }
                    break;
                
                case 2:
                    for(int i =0; i<6; i++){
                        cout<< "("<< i+1 <<") "<< H1.list[i]<<"\n";
                    }
                    break;
            }
    cin>>plotChoice;
    plot_count++;        
    switch (plotChoice){
        case 0:
            return plotChoice;
            break;
        case 1:
            if(party()){
                cout<<"This is the day.";
                 cout<<"The party you join is the majority.";
                 cout<<"They voted over 2/3.";
                 sleep(3);
                 cout<<"The Congress Passed your proposal.";
            }else{
                cout<<"This is the day.";
                cout<<"The party you join is the majority.";
                cout<<"They voted over 2/3.";
                sleep(3);
                cout<<"The Congress Passed your proposal.";
            }
        
            break;
        case 2:
            break;
            
    }
    return 0;
}
bool party(){
    int plotChoice = 0;
    cout<<"You saw the president was sitting with the chair.\n";
    sleep(1);
    cout<<"The president asked you if you are the same party with the chair:\n";
    sleep(1);
    cout<<"(1)Yes! She is like my model. I always wish if I can organized my idea like she did.\n";
    cout<<"(2)She is persuasive, although we are not the same party sometimes I want to agree with her personally.\n";
    cin>>plotChoice;
    if (plotChoice>200){
        return true;
    }
    else if(plotChoice>100){
        return false;
    }
    else{
        cout<<" 'You should not say that... let's try this again.' the narrator said.\n";
        return party();
    }
    

}
