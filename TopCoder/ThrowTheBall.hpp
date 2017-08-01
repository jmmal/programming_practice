// ThrowTheBall.hpp
#include <vector>

class ThrowTheBall
{
public:
    int timesThrown(int N, int M, int L);
};

// Returns the number of times the ball will be thrown in a game based on the
// Input parameters
int ThrowTheBall::timesThrown(int N, int M, int L)
{
    // throwCount counts the number of times the ball is passed between players
    // and the players vector has a player at each index, with the value counting
    // the number of times the player has had the ball.
    int throwCount = 0;
    std::vector<int> players;
    int currentPlayerIndex = 0;

    // Initial players and their count to zero
    for (size_t i = 0; i < N; i++) {
        players.push_back(0);
    }

    bool stop = false;
    players.at(0) = 1;

    while(!stop) {
        if (players.at(currentPlayerIndex) == M) {
            stop = true;
        } else {
            // If players has had ball even times, throw 'upwards'
            if (players.at(currentPlayerIndex) % 2 == 0) {
                currentPlayerIndex += L;
                // Wrap around if go to far in number of players
                if (currentPlayerIndex > N - 1) {
                    currentPlayerIndex -= N;
                }
            }
            // Else throw ball downwards
            else {
                currentPlayerIndex -= L;
                if (currentPlayerIndex < 0) {
                    currentPlayerIndex += N;
                }
            }
            players.at(currentPlayerIndex)++;
            throwCount++;
        }
    }

    return throwCount;
}
