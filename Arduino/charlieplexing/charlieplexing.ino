int LED_A = 12; //connects to LED 1
int LED_B = 11; //connects to LED 1
int LED_C = 10; //connects to LED 3
int LED_D = 9; //connects to LED 6

// Pins connected to the buttons
int button1Pin = 7;
int button2Pin = 6;
int button3Pin = 5;
int button4Pin = 4;

// Variables to store the button states
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

// Flags to control the functions
bool function1Running = false;
bool function2Running = false;
bool function3Running = false;
bool function4Running = false;

void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
}

void loop() {
  buttonState1 = digitalRead(button1Pin);
  buttonState2 = digitalRead(button2Pin);
  buttonState3 = digitalRead(button3Pin);
  buttonState4 = digitalRead(button4Pin);

  if (buttonState1 == LOW && !function1Running) {
    stopAllFunctions();
    function1Running = true;
    animationFull();
  }

  if (buttonState2 == LOW && !function2Running) {
    stopAllFunctions();
    function2Running = true;
    animationUpper();
  }

  if (buttonState3 == LOW && !function3Running) {
    stopAllFunctions();
    function3Running = true;
    animationLower();
  }

  if (buttonState4 == LOW && !function4Running) {
    stopAllFunctions();
    function4Running = true;
    animationLoading();
  }
}

void animationFull() {
  while (function1Running) {
    for (int i = 1; i < 13; i++)
    {
      light_led(i);
      delay(1);
    }
    buttonState2 = digitalRead(button2Pin);
    buttonState3 = digitalRead(button3Pin);
    buttonState4 = digitalRead(button4Pin);

    if (buttonState2 == LOW || buttonState3 == LOW || buttonState4 == LOW) {
      function1Running = false;
    }
  }
}

void animationUpper() {
  while (function2Running) {
    light_led(10);
    delay(1);
    light_led(11);
    delay(1);
    light_led(12);
    delay(1);
    light_led(1);
    delay(1);
    light_led(2);
    delay(1);

    buttonState1 = digitalRead(button1Pin);
    buttonState3 = digitalRead(button3Pin);
    buttonState4 = digitalRead(button4Pin);

    if (buttonState1 == LOW || buttonState3 == LOW || buttonState4 == LOW) {
      function2Running = false;
    }
  }
}

void animationLower() {
  while (function3Running) {
    light_led(4);
    delay(1);
    light_led(5);
    delay(1);
    light_led(6);
    delay(1);
    light_led(7);
    delay(1);
    light_led(8);
    delay(1);

    buttonState1 = digitalRead(button1Pin);
    buttonState2 = digitalRead(button2Pin);
    buttonState4 = digitalRead(button4Pin);

    if (buttonState1 == LOW || buttonState2 == LOW || buttonState4 == LOW) {
      function3Running = false;
    }
  }
}

void animationLoading() {
  while (function4Running) {
    for (int i = 1; i < 13; i++)
    {
      light_led(i);
      delay(35);
    }

    buttonState1 = digitalRead(button1Pin);
    buttonState2 = digitalRead(button2Pin);
    buttonState3 = digitalRead(button3Pin);

    if (buttonState1 == LOW || buttonState2 == LOW || buttonState3 == LOW) {
      function4Running = false;
    }
  }
}

void stopAllFunctions() {
  function1Running = false;
  function2Running = false;
  function3Running = false;
  function4Running = false;
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
