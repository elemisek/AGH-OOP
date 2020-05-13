#include "MyPrinter.h"
#include <iostream>

MyPrinter::MyPrinter(unsigned int width)
	: m_width(width) 
{

}

////////////////////////////////////////////////////////////////////////
//  Jedyna metoda klasy MyPrinter ktora powinni Panstwo modyfikowac.  //
////////////////////////////////////////////////////////////////////////
void MyPrinter::print( const MyPrintable & obj ) const
{
    int numOfSpaces = (m_width - obj.getLength()) / 2;
    const AttFormat* format = dynamic_cast<const AttFormat*>(&obj);
    const AttColor* color = dynamic_cast<const AttColor*>(&obj);
    
    if(format)
        std::cout << controlSeq(format->getFormat());
        
    if(color)
        std::cout << controlSeq(color->getColor());
        
    for(int i = 0; i < numOfSpaces; i++)
        std::cout << " ";
        
    std::cout << obj.rawString();
        
    std::cout<<controlSeq(AttFormat::Attribute::NORMAL)<< std::endl;
	
}

////////////////////////////////////////////////////////////////////////
///                                                                  ///
///          ANSI/VT100 TERMINAL OUTPUT CONTROL SEQUENCES            ///
///                                                                  ///
////////////////////////////////////////////////////////////////////////

const char * MyPrinter::resetSeq()
{
	return "\x1B[0m";
}

// formats: BOLD, DIM, UNDERLINED, NORMAL
const char * MyPrinter::controlSeq( AttFormat::Attribute opt )
{
	switch(opt)
	{
		case AttFormat::BOLD :
			return "\x1B[1m";
		case AttFormat::DIM :
			return "\x1B[2m";
		case AttFormat::UNDERLINED :
			return "\x1B[4m";
		default:
			return MyPrinter::resetSeq();
	}
}

// colors: BLACK, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, GRAY, WHITE, DEFAULT
const char * MyPrinter::controlSeq( AttColor::Attribute opt )
{
	switch(opt)
	{
		case AttColor::BLACK :
			return "\x1B[30m";
		case AttColor::RED :
			return "\x1B[31m";
		case AttColor::GREEN :
			return "\x1B[32m";
		case AttColor::YELLOW :
			return "\x1B[33m";
		case AttColor::BLUE :
			return "\x1B[34m";
		case AttColor::MAGENTA :
			return "\x1B[35m";
		case AttColor::CYAN :
			return "\x1B[36m";
		case AttColor::GRAY :
			return "\x1B[90m";
		case AttColor::WHITE  :
			return "\x1B[97m";
		default:
			return MyPrinter::resetSeq();
	}
}
