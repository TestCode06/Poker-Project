#ifndef COMPARE_H
#define COMPARE_H

#include "struct.h"
#include <cmath>

// SortHand
void SortHand(Hand* handPlayer);

// Check Pair
bool isPair(Hand* handPlayer);

// Check Set
bool isSet(Hand* handPlayer);

// Check Two Pair
bool isTwoPair(Hand* handPlayer);

// Check Straight
bool isStraight(Hand* handPlayer);

// Check flush
bool isFlush(Hand* handPlayer);

// Check Full House
bool isFullHouse(Hand* handPlayer);

// Check Quad
bool isQuad(Hand* handPlayer);

// Check Straight Flush
bool isStraightFlush(Hand* handPlayer);

// Evaluate hand Strength
double EvaluateHand(Hand* handPlayer);

// Get Best Hand
HandRank getBestHandRank(Hand* hand);

#endif