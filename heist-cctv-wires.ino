// The pins that the pushbutton is attached to
const int  wire1Pin = 2;
const int  wire2Pin = 3;
const int  wire3Pin = 4;
const int  wire4Pin = 5;

// The pin that the LED is attached to
const int ledPin = 10;

int wire1ConnectCounter = 0;   // counter for the number of button presses
int wire2ConnectCounter = 0;
int wire3ConnectCounter = 0;
int wire4ConnectCounter = 0;

int wire1State = 0;         // current state of the button
int wire2State = 0;
int wire3State = 0;
int wire4State = 0;

int lastWire1State = 0;
int lastWire2State = 0;
int lastWire3State = 0;
int lastWire4State = 0;

//bool wire_state_change_detect(int wireX);
//char wireXPin;
//char wireXState;
//char wireXConnectCounter;

void setup() {
  pinMode(wire1Pin, INPUT_PULLUP);
  pinMode(wire2Pin, INPUT_PULLUP);
  pinMode(wire3Pin, INPUT_PULLUP);
  pinMode(wire4Pin, INPUT_PULLUP);

  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  // WIRE 1 LOGIC
  // read the wire input pin:
  wire1State = digitalRead(wire1Pin);

  // compare the wire1State to its previous state
  if (wire1State != lastWire1State) {
    // if the state has changed, increment the counter
    if (wire1State == LOW) {
      // if the current state is HIGH then the wire went from off to on:
      wire1ConnectCounter++;
      Serial.println("wire 1 turned on");
      Serial.println(wire1ConnectCounter);
    } else {
      // if the current state is LOW then the wire went from on to off:
      Serial.println("wire 1 turned off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastWire1State = wire1State;

  // WIRE 2 LOGIC
  // read the wire input pin:
  wire2State = digitalRead(wire2Pin);

  // compare the wire1State to its previous state
  if (wire2State != lastWire2State) {
    // if the state has changed, increment the counter
    if (wire2State == LOW) {
      // if the current state is HIGH then the wire went from off to on:
      wire2ConnectCounter++;
      Serial.println("wire 2 turned on");
      Serial.println(wire2ConnectCounter);
    } else {
      // if the current state is LOW then the wire went from on to off:
      Serial.println("wire 2 turned off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastWire2State = wire2State;

  // WIRE 3 LOGIC
  // read the wire input pin:
  wire3State = digitalRead(wire3Pin);

  // compare the wire1State to its previous state
  if (wire3State != lastWire3State) {
    // if the state has changed, increment the counter
    if (wire3State == LOW) {
      // if the current state is HIGH then the wire went from off to on:
      wire3ConnectCounter++;
      Serial.println("wire 3 turned on");
      Serial.println(wire3ConnectCounter);
    } else {
      // if the current state is LOW then the wire went from on to off:
      Serial.println("wire 3 turned off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastWire3State = wire3State;

  // WIRE 4 LOGIC
  // read the wire input pin:
  wire4State = digitalRead(wire4Pin);

  // compare the wire1State to its previous state
  if (wire4State != lastWire4State) {
    // if the state has changed, increment the counter
    if (wire4State == LOW) {
      // if the current state is HIGH then the wire went from off to on:
      wire4ConnectCounter++;
      Serial.println("wire 4 turned on");
      Serial.println(wire4ConnectCounter);
    } else {
      // if the current state is LOW then the wire went from on to off:
      Serial.println("wire 4 turned off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastWire4State = wire4State;


  if (wire1ConnectCounter != 0 && wire2ConnectCounter != 0 && wire3ConnectCounter != 0 && wire4ConnectCounter != 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
}

//bool wire_state_change_detect(int wireX){
//  // put your main code here, to run repeatedly:
//  // read the pushbutton input pin:
//  wireXPin = "wire" += wireX + "Pin";
//  wireXState = "wire" += wireX + "State";
//  wireXConnectCounter = "wire" += wireX + "ConnectCounter";
//  
//  wireXState = digitalRead(wireXPin);
//
//  // compare the wireXState to its previous state
//  if (wireXState != lastWireXState) {
//    // if the state has changed, increment the counter
//    if (wireXState == LOW) {
//      // if the current state is HIGH then the wire went from off to on:
//      wire1ConnectCounter++;
//      Serial.println("wire " + wireX + " turned on");
//      Serial.println(wireXConnectCounter);
//    } else {
//      // if the current state is LOW then the wire went from on to off:
//      Serial.println("wire " + wireX + " turned off");
//    }
//    // Delay a little bit to avoid bouncing
//    delay(50);
//  }
//  // save the current state as the last state, for next time through the loop
//  lastWireXState = wireXState;
//}

