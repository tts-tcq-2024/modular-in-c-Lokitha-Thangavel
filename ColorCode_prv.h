
extern int GetPairNumberFromColor(const ColorPair* colorPair);

extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);

extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
