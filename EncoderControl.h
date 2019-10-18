/*
 * Encoder.h
 *
 *  Created on: 08.09.2019
 *      Author: georg
 */

#ifndef ENCODERCONTROL_H_
#define ENCODERCONTROL_H_
#include <Encoder.h>

class EncoderControl {
public:

	EncoderControl(int APin, int BPin);
	virtual ~EncoderControl();
	void setup();	//Initializes arduino/teensy parameters. Call it on .ino setup function
	long readPosition(); //reads current state of the encoder
	bool hasStateChanged(long tolerance); //returns; tolerance optional
	void resetPosition();
	String toString();

	long getStatePosition() const {
		return statePosition;
	}

	//TODO: implement interruption events position changed
private:
	Encoder encoderKnob;
	int encoderAPin;
	int encoderBPin;
	long statePosition;
	// TODO: implement event notification when encoder changes.
	//volatile bool encoderState;
	//void encoder_ISR();
};

#endif /* ENCODERCONTROL_H_ */
