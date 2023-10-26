#include <iostream>
#include <cstring>
using namespace std;

struct Card {
    int suit, rank;
    Card();
    Card(int s, int r);
};

Card::Card(){
    suit = 0; rank = 0;
}

Card::Card(int s, int r){
    suit = s; rank =r ;
}

string Card::to_string()const{
    vector<string> suit_strings = {"Clubs","Spades","Hearts","Diamonds"};
    vector<string> rank_strings = {"","Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};

    return rank_strings[rank] +" of "+ suit_strings[suit];
}