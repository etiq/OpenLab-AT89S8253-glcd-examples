#include <REG8253.H>
#include "delay.h"
#include "font5x8.h"
#include "graphic.h"
#include "KS0108.h"

void main()
{
GLCD_Initalize();
GLCD_ClearScreen();	
while(1)
    {
    GLCD_WriteString("ETIQ TECHNOLOGIES");
    Delay_ms(2000);
    GLCD_Circle(64, 32, 28);
    Delay_ms(2000);
    GLCD_ClearScreen();
    GLCD_Rectangle(30, 12, 70,40);
    Delay_ms(2000);
    GLCD_ClearScreen();
    }
	}
