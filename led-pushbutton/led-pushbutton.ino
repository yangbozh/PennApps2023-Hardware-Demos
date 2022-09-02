// light an LED if button is pressed

const int LED = 13; 									
const int BUTTON = 7;

int val;

void setup() {
	pinMode(LED, OUTPUT);	
	pinMode(BUTTON, INPUT); 	
}

void loop() {
  // read the button's state
  val = digitalRead(BUTTON); 
  
  // is the button pressed?
  if (val == HIGH) {
    digitalWrite(LED, HIGH);
  } else { 
    digitalWrite(LED, LOW);
  }
}



