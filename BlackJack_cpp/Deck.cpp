#include "Deck.h"

///////////////////////////////////////////// Constructor
Deck::Deck()
{
	m_deck = new Card[m_SIZE];
	int count(0);
	for (int i = 0; i < Suit::SIZE; ++i)
		for (int j = 0; j < Rank::SIZE; ++j)
		{
			m_deck[count].setSuit(static_cast<Suit::Suit>(i));
			m_deck[count].setRank(static_cast<Rank::Rank>(j));
			++count;
		}
}

/////////////////////////////////////////////// Destructor

Deck::~Deck()
{
	delete[]m_deck;
}

//////////////////////////////////////////////// Getters

std::int16_t Deck::getSize()
{
	return m_SIZE;
}

//////////////////////////////////////////////// Functions

void Deck::printDeck()
{
	for (int i = 0; i < m_SIZE; ++i)
		std::cout << m_deck[i].getCardSymb() << std::endl;
}
