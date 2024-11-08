#ifndef PLAYER_H
#define PLAYER_H

#include <fstream>
#include <string>
#include "struct.h"

struct Player
{
    std::wstring name;
    int wins = 0;
    int losses = 0;
    double winRate = 0.0;
    HandRank favoriteStrategy = HandRank::HighCard;
    int favoriteStrategyCount = 0;
    Hand hand;

    /// @brief Constructor
    Player();
    Player(const std::wstring& playerName);

    void updateStats(bool won, HandRank strategy);

    void updateWinRate();

    void updateFavoriteStrategy(HandRank strategy);

    void saveStats(const std::wstring& filename);

    void loadStats(const std::wstring& filename);
};

#endif // PLAYER_H