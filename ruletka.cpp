#include<iostream>
#include "ruletka.h"

Ruletka::Ruletka() : numbers(37), cash(100){

}

Ruletka::Ruletka(int c) : numbers(37){
    cash = c;
}

int Ruletka::Roll(char color, int cash){

    srand(time(0));

    int number = rand()%numbers;

    this->cash -= cash;

    if(number != 0){
        if(number%2==0){
            if(color == 'b'){
                this->cash += cash*2;
            }
        }
        else if(number%2==1){
            if(color == 'r'){
                this->cash += cash*2;
            }
        }
    }else{
        if(color == 'g'){
                this->cash += cash*35;
        }
    }

    return number;
}

int Ruletka::GetNumbers(){
    return numbers;
}

int Ruletka::GetCash(){
    return cash;
}

char Ruletka::GetColor(int number){
    if(number <= numbers){
        if(number != 0){
            if(number%2==0){
                return 'b';
            }
            else if(number%2==1){
                return 'r';
            }
        }else{
            return 'g';
        }
    }else{
        return 'x';
    }
    return 'x';

}