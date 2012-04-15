#ifndef Hvac_h
#define Hvac_h

class Hvac
{
  private:
    int run;  // remember if we're running or not
    int pin;  // what pin is the heater relay on

  public:
    Hvac( int );
    void on();
    void off();
    int running();
};

#endif
