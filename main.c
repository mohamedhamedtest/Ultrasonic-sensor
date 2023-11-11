
#include<avr/io.h>
#include  "LCD/LCD.h"
#include  "ult_sen/ultrasonic.h"
#include "Timers/TIMER.h"
int main(){

lcd_init();
ultrasonic_init();
timer0_init();
sei();

lcd_write_word("Distance is ");
_delay_ms(10);
while(1){
  ultra_triger();
  _delay_ms(15);
}

  return 0;
}
