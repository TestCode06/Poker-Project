#ifndef PRINT_H
#define PRINT_H

#include <string>
#include "struct.h"

// Function prototypes
std::wstring CardRankToString(CardRank rank);
std::wstring CardSuitToString(CardSuit suit);
std::wstring handRankToString(HandRank rank);
void PrintHand(const Hand& hand);

#endif