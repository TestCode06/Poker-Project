#include "struct.h"

void Deck::shuffle()
{
    std::srand(std::time(nullptr));
    std::random_shuffle(m_deck.begin(), m_deck.end());
}

std::vector<Card> Deck::createStandardDeck()
{
    std::vector<Card> standardDeck;
    for (CardSuit suit : {CardSuit::Hearts, CardSuit::Diamonds, CardSuit::Clubs, CardSuit::Spades})
    {
        for (CardRank rank : {CardRank::Two, CardRank::Three, CardRank::Four, CardRank::Five, CardRank::Six, CardRank::Seven, CardRank::Eight, CardRank::Nine, CardRank::Ten, CardRank::Jack, CardRank::Queen, CardRank::King, CardRank::Ace})
        {
            standardDeck.push_back(Card(rank, suit));
        }
    }
    return standardDeck;
}

Deck::Deck() : m_deck(createStandardDeck())
{
    shuffle();
}

Card Deck::draw()
{
    if (m_deck.empty())
    {
        m_deck = createStandardDeck();
        shuffle();
    }

    Card drawnCard = m_deck.back();
    m_deck.pop_back();
    return drawnCard;
}