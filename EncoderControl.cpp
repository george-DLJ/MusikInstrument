/*
 * Encoder.cpp
 *
 *  Created on: 08.09.2019
 *      Author: Jorge Miranda
 */

#include "EncoderControl.h"
#include <Encoder.h>

EncoderControl::EncoderControl(int aPin, int bPin){
	encoderAPin = aPin;
	encoderBPin = bPin;
	encoderKnob = new Encoder(encoderAPin, encoderBPin); //NOTICE: avoid using pins with LEDs attached
	statePosition = 0;
}

EncoderControl::~EncoderControl() {
	// TODO Auto-generated destructor stub
}

void EncoderControl::setup() {
	resetPosition();
}

long EncoderControl::readPosition() {
	return encoderKnob.read();
}

// Compares the actual state with previous stored state.
bool EncoderControl::hasStateChanged(long tolerance = 0) {
	 long newPosition;
	 newPosition = encoderKnob.read();

	if (abs(newPosition - statePosition) > tolerance) {
		    statePosition = newPosition;
		    return true;
	}
  return false;
}

void EncoderControl::resetPosition() {
	statePosition = 0;
	encoderKnob.write(statePosition);
}

String EncoderControl::toString() {
    return "Knob.position = " + readPosition();
}
