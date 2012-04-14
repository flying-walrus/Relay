#include <Arduino.h>
#include <Hvac.h>

Hvac::Hvac( int whatPin )
{
  // initialize variables
  pin = whatPin;
  run = 0;


  // initialize physical objects
  pinMode( pin, OUTPUT );

  // don't forget that we don't know the state of the pin
  // so give it one
  digitalWrite( pin, LOW );
}

void Hvac::on()
{
  if( ! run )
  {
    run = 1;
    digitalWrite( pin, HIGH );
  }

}

void Hvac::off()
{
  run = 0;
  digitalWrite( pin, LOW);
}

int Hvac::running()
{
  return run;

}
