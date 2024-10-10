#include<iostream>
#include "ruletka.h"

int main(){

    
    Ruletka r1(999);

    char chosen_color = 'a'; 
    int cash_bet = -1;
    int cash = 0;


    std::cout<<"\nliczba numerow na ruletce: "<<r1.GetNumbers()<<"\n";

    while(r1.GetCash()>0){

        cash = r1.GetCash();

        std::cout<<"\n--------------------------\n"; 
        std::cout<<"hajs: "<<r1.GetCash()<<"\n"; 
        std::cout<<"--------------------------\n\n"; 

        while(chosen_color != 'r' && chosen_color != 'b' && chosen_color != 'g'){
            std::cout<<"podaj kolor (r,b,g): ";
            std::cin>>chosen_color;
        }

        while(cash_bet < 0 || cash_bet > cash){
            std::cout<<"podaj zaklad: ";
            std::cin>>cash_bet;
            
        }

        char color = r1.GetColor(r1.Roll(chosen_color, cash_bet));
        std::cout<<"\n";
        if(color == 'r'){
            std::cout<<"wypadl czerwony\n"; 
        }else if(color == 'b'){
            std::cout<<"wypadl czarny\n"; 
        }else if(color == 'g'){
            std::cout<<"wypadl zielony\n"; 
        }

        chosen_color = 'a';
        cash_bet = -1;
    }    

    std::cout<<"\nprzejebales hajs!\n";


    return 0;
}