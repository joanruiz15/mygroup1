#ifndef _OUTFIELDER_
#define _OUTFIELDER_

#include "Player.hpp"

class Outfielder : public Player {

public:
    Outfielder(std::string n, Country* nat) : Player(n, nat) {}

    void updateStats(Match* m) override {
        // Implement Outfielder-specific update logic based on the match
    }

    void printStats() const override {
        // Implement Outfielder-specific print logic
    }
};

#endif
