#include <vector>
#include <iostream>

class Barbecue
{
public:
    int eliminate(int n, std::vector<int> voter, std::vector<int> excluded);
};

struct Person {
    int index;
    int votes;
    int votesCast;
};

int Barbecue::eliminate(int n, std::vector<int> voter, std::vector<int> excluded)
{
    if (voter.size() == 0) {
        return 0;
    }
    // Initialise a vector with all the players and their data
    std::vector<Person> players;
    for (int i = 0; i < n; i++) {
        Person p;
        p.index = i;
        p.votes = 0;
        p.votesCast = 0;
        players.push_back(p);
    }

    // Count the votes
    int maxVotes = 0;
    for (int i = 0; i < voter.size(); i++) {
        players[voter[i]].votesCast++;
        players[excluded[i]].votes++;
        if (players[excluded[i]].votes > maxVotes) {
            maxVotes = players[excluded[i]].votes;
        }

    }

    // Remove the winners
    for (int i = 0; i < players.size(); i++) {
        if (players[i].votes < maxVotes) {
            players.erase(players.begin() + i);
            i--;
        }
    }

    int maxCasts = 0;
    // Find the real loser
    if (players.size() == 1) {
        return players[0].index;
    } else {
        for (int i = 0; i < players.size(); i++) {
            if (players[i].votesCast > maxCasts) {
                maxCasts = players[i].votesCast;
            }
        }

        for (int i = 0; i < players.size(); i++) {
            if (players[i].votesCast < maxCasts) {
                players.erase(players.begin() + i);
                i--;
            }
        }
        return players[0].index;
    }

}
