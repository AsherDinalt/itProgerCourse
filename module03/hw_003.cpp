#include <iostream>
#include <string>
#include <fstream>

enum gameVar { ROCK, SCISSORS, PAPER };

class Player {
private:
    gameVar state;
    std::string name;
public:
    Player();
    Player(gameVar state, std::string name);
    gameVar getState();
    std::string getName();
    std::string who_wins(Player player);
};


int main() {
    setlocale(LC_ALL, "rus");
    
    Player bot;
    Player alex(gameVar::PAPER, "Alex");
    std::cout << bot.who_wins(alex) << std::endl;
    Player bob(gameVar::SCISSORS, "Bob");
    std::cout << bob.who_wins(alex) << std::endl;
    return 0;
}

    Player::Player() {
        this->name = "bot";
        this->state = gameVar::ROCK;
    };

    Player::Player(gameVar state, std::string name) {
        this->name = name;
        this->state = state;        
    };

    gameVar Player::getState() {
        return this->state;
    };

    std::string Player::getName() {
        return this->name;
    };

    std::string Player::who_wins(Player player) {
        if (this->state == player.getState())
            return "Ничья";
        int iRes;
        switch (this->state)
        {
        case gameVar::ROCK :
            iRes = (player.getState() == gameVar::PAPER) ? 0 : 1; break;     
        case gameVar::SCISSORS :
            iRes = (player.getState() == gameVar::ROCK) ? 0 : 1; break;     
        case gameVar::PAPER :
            iRes = (player.getState() == gameVar::SCISSORS) ? 0 : 1; break;             
        default: break;
        }

        return (iRes) ? \
                "Победил игрок с именем : " + this->name : \
                "Победил игрок с именем : " + player.getName();


    }