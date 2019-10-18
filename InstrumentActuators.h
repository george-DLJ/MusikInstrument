/*
 * InstrumentActuators.h
 *
 *  Created on: 14.09.2019
 *      Author: georg
 */

#ifndef INSTRUMENTACTUATORS_H_
#define INSTRUMENTACTUATORS_H_

namespace MusikInstrument {

class InstrumentActuators {
public:
	InstrumentActuators();
	virtual ~InstrumentActuators();
private:
	GrifbrettAktuator griffbrettActuator;
	PlektrumAktuator plektrumActuator;
};

} /* namespace MusikInstrument */

#endif /* INSTRUMENTACTUATORS_H_ */
