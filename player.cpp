#include "player.h"

/// @brief Constructor
Player::Player() : name(L"") {}
Player::Player(const std::wstring& playerName) : name(playerName) {}

void Player::updateStats(bool won, HandRank strategy)
{
    if (won)
    {
        wins++;
    }
    else
    {
        losses++;
    }
    updateWinRate();
    updateFavoriteStrategy(strategy);
}

void Player::updateWinRate()
{
    int totalGames = wins + losses;
    if (totalGames > 0)
    {
        winRate = static_cast<double>(wins) / totalGames;
    }
}

void Player::updateFavoriteStrategy(HandRank strategy)
{
    if (strategy == favoriteStrategy)
    {
        favoriteStrategyCount++;
    }
    else
    {
        favoriteStrategy = strategy;
        favoriteStrategyCount = 1;
    }
}

void Player::saveStats(const std::wstring& filename)
{
    std::wofstream file(filename.c_str());
    if (file.is_open()) {
        file << name << L"\n" << wins << L"\n" << losses << L"\n" << winRate << L"\n" << static_cast<int>(favoriteStrategy) << L"\n";
        file.close();
    }
    else {
        std::wcerr << L"Error opening file for saving stats!" << std::endl;
    }
}

void Player::loadStats(const std::wstring& filename)
{
    std::wifstream file(filename.c_str());
    if (file.is_open())
    {
        file >> name >> wins >> losses >> winRate;
        int strategy;
        file >> strategy;
        favoriteStrategy = static_cast<HandRank>(strategy);
        file.close();
    }
    else
    {
        std::wcerr << L"Error opening file for loading stats!" << std::endl;
    }
}