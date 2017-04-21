#ifndef MISC_HPP
#define MISC_HPP

Position nextPosition(Position p);
Position nextTeammate(Position p);
Suit charToSuit(char stringSuit);
std::string suitToString(Suit suit);
std::string positionToString(Position position);
void generateScoringChart();
uint8_t randomUint8(uint8_t min, uint8_t max);

#endif