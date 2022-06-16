#pragma once
#include<iostream>
#include<cstdint>

#include"Card.h"

class Deck
{
public:
	Deck();
	~Deck();

	std::int16_t getSize();

	void printDeck();

private:
	const std::int16_t m_SIZE{ 52 };
	Card* m_deck;
};

