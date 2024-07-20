#ifndef COLORCODE_PRV_H
#define COLORCODE_PRV_H

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];
extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMinorColors;

extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void printColorReferenceManual();

#endif // COLORCODE_PRV_H
