/*
 * GriffbrettActuator.h
 *
 *  Created on: 14.09.2019
 *      Author: georg
 */

#ifndef GRIFFBRETTACTUATOR_H_
#define GRIFFBRETTACTUATOR_H_

namespace MusikInstrument {

// Griffbrett actuator useas a stepper motor, a transmission and two endstops.
class GriffbrettActuator {
public:
	GriffbrettActuator();
	virtual ~GriffbrettActuator();
	void calibrate(); // find endstops, calculate maximum distance, set 0 pos and max pos
	//void afinar(); //TODO: First approach: set A note only, from it, calculate postion of further notes.
						//		  further work: through a microphone allow the instrument to calibrate itself to find out the position of each note.
//	void setNote(); 	//TODO: introduce the possibility to pass notes and let the motor alone choose the position.
	void setLinealPosition(int value); // set position on the string in mm
private:

	StepperMotor motor
	int gearRatio; //Stores the transmission ratio between motor and rim.
	int maxValue; // max allowed value after calibration; 0 is set on min Endstop (some steps before endstop was triggered).
	//bool minEndStop; //TODO: attach endstops to event. trigger Emergency stop if motor is not in calibration
	//bool maxEndStop; //TODO: attach endstops to event. trigger Emergency stop if motor is not in calibration
};

} /* namespace MusikInstrument */

#endif /* GRIFFBRETTACTUATOR_H_ */
