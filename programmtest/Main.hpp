#include "Goalkeeper.hpp"
#include "Outfielder.hpp"
#include "Team.hpp"
#include "Match.hpp"
#include "Country.hpp"

int main() {
    Country* country1 = new Country("Country1");
    Country* country2 = new Country("Country2");

    Goalkeeper* goalkeeper1 = new Goalkeeper("Goalkeeper1", country1);
    Goalkeeper* goalkeeper2 = new Goalkeeper("Goalkeeper2", country2);

    Outfielder* outfielder1 = new Outfielder("Outfielder1", country1);
    Outfielder* outfielder2 = new Outfielder("Outfielder2", country2);

    Team* team1 = new Team("Team1", country1, Team::Gender::MALE);
    Team* team2 = new Team("Team2", country2, Team::Gender::MALE);

    team1->addPlayer(goalkeeper1);
    team1->addPlayer(outfielder1);

    team2->addPlayer(goalkeeper2);
    team2->addPlayer(outfielder2);

    Match* match = new Match(team1, team2);

    match->simulateMatch();

    match->printMatch();

    for (Player* player : team1->getPlayers()) {
        player->updateStats(match);
        player->printStats();
    }

    for (Player* player : team2->getPlayers()) {
        player->updateStats(match);
        player->printStats();
    }

    delete country1;
    delete country2;
    delete goalkeeper1;
    delete goalkeeper2;
    delete outfielder1;
    delete outfielder2;
    delete team1;
    delete team2;
    delete match;

    return 0;
}
