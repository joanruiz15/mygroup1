#ifndef _GOALKEEPER_
#define _GOALKEEPER_

#include "Player.hpp"

class Goalkeeper : public Player {

public:
    Goalkeeper(std::string n, Country* nat) : Player(n, nat) {}

    void updateStats(Match* m) override {
        // Implement Goalkeeper-specific update logic based on the match
    }

    void printStats() const override {
        // Implement Goalkeeper-specific print logic
    }
};

#endif
