#ifndef PRINT_H
#define PRINT_H

#include <string>
#include "struct.h"

std::wstring CardRankToString(CardRank rank);

std::wstring CardSuitToString(CardSuit suit);

// handRank to string
std::wstring handRankToString(HandRank rank);

void PrintHand(const Hand& hand);

#endif