#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Card {
    private:
        string cardvalue;
        string cardcolor;
        
    public:
        Card (string cardvalue = "empty value", string cardcolor = "empty color") {
            this->cardvalue = cardvalue;
            this->cardcolor = cardcolor;
        }
        
        ~Card() {
            
        }
        
        string cardtostring() const {
            return this->cardvalue + " " + this->cardcolor;
        }
        string getvalue() {
            return this->cardvalue;
        }
        string getcolor() {
            return this->cardcolor;
        }
};

class Deck {
    public:
        int hearts = 0;
        int spades = 0;
        int diamonds = 0;
        int clubs = 0;
        string value1;
        string color1;
        string deck;
        int allcards;
        Card cards[52];
        
        Deck(int a){
            srand ( time(NULL) );
            //Card cards[52];
            string colors[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};
            string values[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
            
            size_t i = 0;
            size_t j = 0;
            
            do {
                int RandIndexvalue = rand() % 13;
                int RandIndexcolor = rand() % 4;
                
                switch (RandIndexcolor){
                    case 0: hearts++; break;
                    case 1: spades++; break;
                    case 2: diamonds++; break;
                    case 3: clubs++; break;
                }
                
                this->value1 = values[RandIndexvalue];
                this->color1 = colors[RandIndexcolor];
                cards[i] = Card(this->value1, this->color1);
                    
                /*for (j=0; j<i; j++) {
                    if (cards[j].cardtostring() == cards[i].cardtostring()) {
                        cout << cards[i].cardtostring() << endl;
                        i++;
                    }
                }*/
            } while (i<a);
            
            allcards = hearts+diamonds+spades+clubs;
            
        }
        
        string decktostring() {
            std::string allcards_s = std::to_string(allcards);
            std::string clubs_s = std::to_string(clubs);
            std::string diamonds_s = std::to_string(diamonds);
            std::string hearts_s = std::to_string(hearts);
            std::string spades_s = std::to_string(spades);
            
            return allcards_s + " cards - " + clubs_s + " Clubs" + diamonds_s + " Diamonds" + hearts_s + " Hearts" + spades_s + " Sapdes";
        }
    
    
};
