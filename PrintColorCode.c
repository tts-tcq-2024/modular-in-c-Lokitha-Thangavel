#include <stdio.h>
#include "ColorCode_prv.h"

void printColorReferenceManual()
{
    printf("Color Code Reference Manual:\n");
    printf("-----------------------------\n");
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) 
    {
        ColorPair colorPair = GetColorFromPairNumber(i);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%2d: %s\n", i, colorPairNames);
    }
    printf("-----------------------------\n");
}
