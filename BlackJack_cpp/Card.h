#pragma once
#include<cstdint>

namespace Suit
{
	enum Suit
	{
		HEARTS,
		DIAMONDS,
		CLUBS,
		SPIDERS,
		SIZE
	};
}

namespace Rank
{
	enum Rank
	{
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		VALET,
		QUIN,
		KING,
		SIZE
	};
}

class Card
{
public:
	Card() {};
	Card(const Rank::Rank& rank, const Suit::Suit suit);

	void setRank(const Rank::Rank& rank);
	void setSuit(const Suit::Suit& suit);

	const Rank::Rank& getRank();
	const Suit::Suit& getSuit();

	const char* getCardSymb();

private:

	Suit::Suit m_suit{};
	Rank::Rank m_rank{};
	char m_card[4]{};
};