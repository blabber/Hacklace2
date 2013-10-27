/*
 * HL_FreqmeterApp.cpp
 *
 */ 

/**********************************************************************************

Description:		Hacklace Freqmeter App

					Measure the frequency at Pin PD3. Will work from 16 Hz up to 
					approx. 10 kHz.

Author:				Frank Andre
Copyright 2013:		Frank Andre
License:			This software is distributed under a hardware-bound GPL license as
					follows:
					(1) This software must only be executed on the original Hacklace2 
					printed circuit board with the fab4U logo on it. 
					(2) As long as (1) is not violated this software is licensed under 
					the GNU GPLv3 (see license.md or http://www.gnu.org/licenses/).
Disclaimer:			This software is provided by the copyright holder "as is" and any 
					express or implied warranties, including, but not limited to, the 
					implied warranties of merchantability and fitness for a particular 
					purpose are disclaimed. In no event shall the copyright owner or 
					contributors be liable for any direct, indirect, incidental, 
					special, exemplary, or consequential damages (including, but not 
					limited to, procurement of substitute goods or services; loss of 
					use, data, or profits; or business interruption) however caused 
					and on any theory of liability, whether in contract, strict 
					liability, or tort (including negligence or otherwise) arising 
					in any way out of the use of this software, even if advised of 
					the possibility of such damage.
					
**********************************************************************************/

#include <avr/eeprom.h>
#include "Arduino.h"
#include "Hacklace.h"
#include "Hacklace_AppEngine.h"
#include "Hacklace_App.h"


extern Hacklace_AppEngine HL;


/*************
 * constants *
 *************/

#ifdef APP_NAME
	#undef APP_NAME
	#undef APP_CLASSNAME
#endif

#define APP_NAME		FreqmeterApp
#define APP_CLASSNAME	CONCAT(APP_NAME, _class)

#define R_MAX			7


/*********
 * class *
 *********/

class APP_CLASSNAME : public Hacklace_App
{
	public:
		const unsigned char* setup(const unsigned char* ee);
		void run();
		void finish();

	private:
		static byte x;
		static byte timer;
};


APP_CLASSNAME APP_NAME;		// create an instance of the app class


/**************************
 * static class variables *
 **************************/

byte 			APP_CLASSNAME::x;
byte 			APP_CLASSNAME::timer;


/***********
 * methods *
 ***********/

const unsigned char* APP_CLASSNAME::setup(const unsigned char* ee)
{
	HL.enableFreqCounter();
	HL.setScrollSpeed(8, 6);
	HL.printString_P(PSTR(" Frequenzmesser  "));
	HL.scrollSync();						// clear sync flag
	return( ee );
}


void APP_CLASSNAME::run()
{
	char			st[7];

	if (HL.scrollSync()) {					// wait until end of scrolling occurs
		itoa((word)(HL.getFrequency() + 0.5), st, 10);
		HL.cursorHome();
		HL.printString_P(PSTR("f="));
		HL.printString(st);
		//HL.printString_P(PSTR("Hz"));
	}
}


void APP_CLASSNAME::finish()
{
	HL.disableFreqCounter();
}

