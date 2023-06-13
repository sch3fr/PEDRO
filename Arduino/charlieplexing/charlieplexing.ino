
int LED_A = 12;
int LED_B = 10;
int LED_C = 8;
int LED_D = 6;
int switch1 = 13;

void setup()
{
  reset_pins();
  pinMode(switch1, INPUT);
}
void loop()
{
  
  
    for (int i = 1; i < 13; i++)
    {
      light_led(i);
      delay(1);
      


    }

  

}

void reset_pins()
{
  pinMode(LED_A, INPUT);
  pinMode(LED_B, INPUT);
  pinMode(LED_C, INPUT);
  pinMode(LED_D, INPUT);
  digitalWrite(LED_A, LOW);
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_C, LOW);
  digitalWrite(LED_D, LOW);
}

void set_pins(int high_pin, int low_pin)
{
  reset_pins();
  pinMode(high_pin, OUTPUT);
  pinMode(low_pin, OUTPUT);
  digitalWrite(high_pin, HIGH);
  digitalWrite(low_pin, LOW);
}

void light_led(int led_num) {
  switch (led_num)
  {
    case 1:
      set_pins(LED_B, LED_A);
      break;
    case 2:
      set_pins(LED_A, LED_B);
      break;
    case 3:
      set_pins(LED_C, LED_B);
      break;
    case 4:
      set_pins(LED_B, LED_C);
      break;
    case 5:
      set_pins(LED_D, LED_C);
      break;
    case 6:
      set_pins(LED_C, LED_D);
      break;
    case 7:
      set_pins(LED_C, LED_A);
      break;
    case 8:
      set_pins(LED_A, LED_C);
      break;
    case 9:
      set_pins(LED_D, LED_B);
      break;
    case 10:
      set_pins(LED_B, LED_D);
      break;
    case 11:
      set_pins(LED_D, LED_A);
      break;
    case 12:
      set_pins(LED_A, LED_D);
      break;
  }
}
