// Do not remove the include below
#include "MusikInstrument.h"
#include "EncoderControl.h"

// Musik instrument components teensy 3.x connections:
// 1. Controls


// 3. Actuator(s)
// 3.1 GriffbrettActuator: finger board (griffbrett)
// 3.2 PlektrumActuator: Motor/Actuator2: pick (plektrum)
//
bool motorIsMoving = false; //Debug: currently substitutes the motor for testing

// 4. NeoPixels(s)


// 5<. Other components. e.g. Switch, servo, ...

long lastCommandedPosition; //NOTE: we only send new command positions when motor has stopped.
//The setup function is called once at startup of the sketch
void setup()
{
	Serial.begin(38400);
	knobRight.setup(); // currently it is empty but in future there could be some data.

}

// 1. First approach polling
// TODO: 2. Approach (events)
// The loop function is called in an endless loop
void loop()
{
	// For each control:
	// 1. Read Music instrument controls

	// 2. Move actuator(s)

	if(!motorIsMoving) {
	// 1. Check if motor is stopped:
	//   NOTICE: motor library cannot modify position changes on the fly.
	//   Therefore 1st approach is to enqueue the mevements

		// 2. Check if knob has changed (above tolerance, after last reading)
		if(knobRight.hasStateChanged(knobTolerance)) {
			if (knobRight.getStatePosition() !=  lastCommandedPosition){
				// Send new command to motor
			}

			// Debug: print current knob position
			Serial.print(", ");
			Serial.print(knobRight.toString());
			Serial.println();
		}

	}

	// 3. log changes

	// 4. Wait some time between reads
	delay(250);
}

void moveToPosition()
{

}

