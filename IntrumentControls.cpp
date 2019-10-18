/*
 * IntrumentControls.cpp
 *
 *  Created on: 14.09.2019
 *      Author: georg
 */

#include "IntrumentControls.h"

namespace MusikInstrument {

IntrumentControls::IntrumentControls() {
	// TODO Auto-generated constructor stub
}

IntrumentControls::~IntrumentControls() {
	// TODO Auto-generated destructor stub
}

void initializeKnobRight(int knobRightPinA, int knobRightPinB, long knobTolerance = 10, long stepsProRev )
{
	knobRight(knobRightPinA, knobRightPinB);
}

void initializeButton()
{

}

} /* namespace MusikInstrument */
