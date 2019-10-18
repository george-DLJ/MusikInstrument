/*
 * IntrumentControls.h
 *
 *  Created on: 14.09.2019
 *      Author: georg
 */

#ifndef INTRUMENTCONTROLS_H_
#define INTRUMENTCONTROLS_H_
#include "EncoderControl.h"

namespace MusikInstrument {

class IntrumentControls {
public:
	IntrumentControls();
	virtual ~IntrumentControls();
	void initializeKnobRight(int knobRightPinA, int knobRightPinB, long knobTolerance = 10, long stepsProRev );
	void initializeButton(int buttonPin);

private:
	EncoderControl KnobRight;
	ButtonControl playStyleA;

};

} /* namespace MusikInstrument */

#endif /* INTRUMENTCONTROLS_H_ */
