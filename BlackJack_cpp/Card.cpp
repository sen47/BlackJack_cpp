#include"Card.h"

/////////////////////////////////////////////////////////// Constructors

Card::Card(const Rank::Rank& rank, const Suit::Suit suit)
	: m_rank(rank), m_suit(suit)
{
	std::int16_t suitPosition(1);

	switch (m_rank)
	{
	case Rank::TWO:
		m_card[0] = '2';
		break;
	case Rank::THREE:
		m_card[0] = '3';
		break;
	case Rank::FOUR:
		m_card[0] = '4';
		break;
	case Rank::FIVE:
		m_card[0] = '5';
		break;
	case Rank::SIX:
		m_card[0] = '6';
		break;
	case Rank::SEVEN:
		m_card[0] = '7';
		break;
	case Rank::EIGHT:
		m_card[0] = '8';
		break;
	case Rank::NINE:
		m_card[0] = '9';
		break;
	case Rank::TEN:
		m_card[0] = '1';
		m_card[1] = '0';
		suitPosition = 2;
		break;
	case Rank::VALET:
		m_card[0] = 'J';
		break;
	case Rank::QUIN:
		m_card[0] = 'Q';
		break;
	case Rank::KING:
		m_card[0] = 'K';
		break;
	}
	
	switch (m_suit)
	{
	case Suit::HEARTS:
		m_card[suitPosition] = static_cast<char>(3);
		break;
	case Suit::DIAMONDS:
		m_card[suitPosition] = static_cast<char>(4);
		break;
	case Suit::CLUBS:
		m_card[suitPosition] = static_cast<char>(5);
		break;
	case Suit::SPIDERS:
		m_card[suitPosition] = static_cast<char>(6);
		break;
	}
}

////////////////////////////////////////////////////////// Setters

void Card::setRank(const Rank::Rank& rank)
{
	m_rank = rank;
}

void Card::setSuit(const Suit::Suit& suit)
{
	m_suit = suit;
}

///////////////////////////////////////////////////////// Getters

const Rank::Rank& Card::getRank()
{
	return this->m_rank;
}

const Suit::Suit& Card::getSuit()
{
	return this->m_suit;
}

const char* Card::getCardSymb()
{
	return m_card;
}

////////////////////////////////////////////////////////// Functions