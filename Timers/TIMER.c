/*
 * TIMER.c
 *
 *  Created on: Aug 27, 2023
 *      Author: user
 */


#include"TIMER.h"


//timer0


void timer0_init(void)
{
	    	/* Disable Timer 0 */
	    	TCCR0 = DISABLE_MODULE_VALUE;
	    	/* Setting pre scaler */
	    	TCCR0 = (PRESCLR1_VALUE);
	    	/* Initializing the timer with zero */
	    	TCNT0 = ZER0_INITIALIZER;
				/* Timer overflow interrupt enable*/
				TIMSK |=(1<<TOIE0);

	return;
}
