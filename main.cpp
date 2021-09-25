/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
A textbase game for my politic class project.
Chia
9/25/2021
Ver1
*******************************************************************************/

#include <iostream>
#include <unistd.h>
#include "lawmaker_h.h"
using namespace std;
int plot(int plotChoice, int count);
int plot_count = 0;
int plot_choice = 0;
int role = 0;
Senate S1;
the_House H1;
int main()
{
    cout<<"Choose a character: (1)for being a senator; (2) for being a member of the House ";
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
    switch (plot_count){
        case 0:
            switch(plotChoice){
                case 1:
                    for(int i =0; i<5; i++){
                        cout<< "("<< i+1 <<") "<<S1.list[i]<<"\n";
                    }
                    break;
                
                case 2:
                    for(int i =0; i<6; i++){
                        cout<< S1.list[i];
                    }
                    break;
            }
            cin>>plotChoice;
            plot_count++;
            return plotChoice;
            break;
        case 1:
            break;
        case 2:
            break;
            
    }
    return 0;
}
