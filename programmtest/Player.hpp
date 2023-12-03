#ifndef _PLAYER_
#define _PLAYER_

#include "Country.hpp"
#include "Match.hpp"

class Player {

protected:
    std::string name;
    Country* nationality;

public:
    Player(std::string n, Country* nat) : name(n), nationality(nat) {}
    virtual ~Player() {}

    bool isFemale() const {
        // Implement this method based on your requirements
        // This is a placeholder; you may need additional logic based on your design
        return false;
    }

    virtual void updateStats(Match* m) = 0;
    virtual void printStats() const = 0;
};

#endif
