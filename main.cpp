/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
A textbase game for my politic class project.
Chia
9/25/2021~9/27
Ver1

didn't do any user control.
*******************************************************************************/


#include <iostream>
#include <cstring>
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
    cout<<"Choose a character for being a parliamentarian from \n(1)the Senate \n(2)the House \n";
    cin>>role;
    plot_choice = plot(role, plot_count);
    for(int i =1; i<3; i++){
        sleep(2);
        plot_choice = plot(plot_choice, plot_count);
    }
    
    

    return 0;
}
int plot(int plotChoice, int count){
    cout<<"You are sitting in a car, and your calendar is in your hand...\n";
    usleep(1000000);
    switch(role){
                case 1:
                    for(int i =0; i<4; i++){
                        cout<< "("<< i+1 <<") "<<S1.list[i]<<"\n";
                    }
                    break;
                
                case 2:
                    for(int i =0; i<3; i++){
                        cout<< "("<< i+1 <<") "<< H1.list[i]<<"\n";
                    }
                    break;
            }
    cin>>plotChoice;
    if(plotChoice == 4){
        cout<<"The hearing is very awsome.\nAll the witnesses testify your proposal positively.\n";
        plot(plotChoice, plot_count);
    }
    plot_count++;        
    switch (plotChoice){
        case 1:
            cout<<"You got home so drunk, so you couldn't remember anything that day.\n";
            sleep(2);
            switch(role){
                case 1:
                    cout<<"As a member of Stand Committee, \ntoday you are going to talk about the amount of \nrevenue program that the House send last week.\n";
                    sleep(5);
                    cout<<"The day is long...\n The committee decided to cut it down a little bit.\n";
                    cout<<"You are so nervous, for your proposal is in the House now.\n";
                    sleep(1);
                    cout<<"(1)Add the hearing to your calendar.\n";
                    cout<<"(2)Decided to trade with a parliamentarian in the House.\n";
                    cin>>plotChoice;
                    if(plotChoice == 1){
                        strcpy(S1.list[3],"Monday: Go to the oversight hearing.\n");
                    } 
                    break;
                case 2:
                    cout<<"As a member of Stand Committee, today you are going to see what bills should have a hearing.\n";
                    sleep(5);
                    cout<<"It's lunch time. Normally there is only parliamentarian of the House.\n ";
                    cout<<"But you saw a familiar face standing there.\n";
                    sleep(2);
                    cout<<"Oh, it's your brother who works in the Senate.\n";
                    sleep(2);
                    cout<<"He want to do logrolling with you.\n";
                    cout<<"(1)Sure. Just remeber to help me for our new Amendment.\n";
                    cout<<"(2)......Sorry, there is not much I can do. We has decided today.\n";
                    cin>>plotChoice;
                    strcpy(H1.list[1], "The vote for oversee the veto.");
                    break;
            }
        break;
        case 2:
            switch(role){
                case 1:
                    strcpy(S1.list[2], "The last Tuesday of June: The new Amendment's debate.");
                    if(plot_choice == 2 ){
                        cout<<"your bill successfully passed the debate from the House yesterday.\n";
                    }else{
                        cout<<"Surprisingly, your bill successfully passed the debate from the House yesterday.\n"; }
                    sleep(2);
                    cout<<"This morning, when you turned in the other bills to president, \nhe said he could return the proposal in the afternoon.\n";
                    cout<<" 'It is too fast.' the narrator said. 'Doesn't sound like a good sign.\n";
                    sleep(5);
                    cout<<"The day is too long;\n";
                    cout<<"For his kindly favor, you voted for the Amendment in returned.\n";
                    cout<<"Now your returned document is in your hand.\n";
                    cout<<"Today day is too long.\n";
                    sleep(1);
                    cout<<"V\n";
                    sleep(1);
                    cout<<"E\n";
                    cout<<"T\n";
                    cout<<"You left the bill on the Chair's desk.";
                    break;
                    
                case 2:
                    cout<<"The President decided to VETO the proposal of your brother.\n";
                    sleep(2);
                    cout<<"This morning, the House member are reviewing the report from the last hearning.\n";
                    cout<<" 'It is too fast.' the narrator said. 'Doesn't sound like a good sign.\n";
                    sleep(5);
                    cout<<"The day is too long;\n";
                    cout<<"You vote for oversee, and your name was on record. \nWish he would vote for you in returned.\n";
                    break;
        plotChoice = 1;
        }
        break;
        case 3:
         cout<<"This is the day.\n";
         cout<<"You are so nervoud for your proposal.\n";
         cout<<"You recalled your memory from the drunk, drunk Thursday...";
            switch(role){
                case 1:
                    if(party()){
                         cout<<"Your party is the majority of this year.\n";
                         cout<<"They voted over 2/3.\n";
                         sleep(3);
                         cout<<"The Congress oversee the VETO, \nyour proposal has turned into a bill.\n";
                    }else{
                        cout<<"The president made an mistakes.\n";
                        cout<<"Although your are minority, they purposely voted over 2/3.\n";
                        sleep(3);
                        cout<<"The Congress The Congress oversee the VETO and passed your proposal.\n";
                    }
                break;
                
                case 2:
                    if(party()){
                         cout<<"Your party is the majority of this year.";
                         cout<<"They voting over 2/3 for going to the states, \nand your brother helped your for 3/4 of the state legislatives.\n";
                         sleep(3);
                         cout<<"A new Amendment is created.\n";
                    }
                    else{
                        cout<<"Failed.\n";
                        cout<<"Your are minority party, although your brother helped you.\nIt is not enough.";
                        sleep(3);
                        cout<<"BAD ";
                    }
                break;
          }
        cout<<"END";
        break;    
    }
    return plotChoice;
}
bool party(){
    int plotChoice = 0;
    cout<<"Mr. Walker is your best friend.\nSo you went to the restaurant next to the building.\n";
    cout<<"When you got in, you saw the president was sitting with the Chair in a chamber.\n";
    sleep(1);
    cout<<"The president saw you passed by,\ngreeting with you and asking if you are the same party with the chair:\n";
    sleep(1);
    cout<<"(1)Yes! She is like my model. I always wish if I can organized my idea like she did.\n";
    cout<<"(2)She is persuasive, although we are not the same party sometimes I want to agree with her personally.\n";
    cin>>plotChoice;
    
    if (plotChoice ==1){
        return true;
    }
    else if(plotChoice ==2){
        return false;
    }
    else{
        cout<<" 'You should not say that... let's try this again.' the narrator said.\n";
        return party();
    }
    

}
