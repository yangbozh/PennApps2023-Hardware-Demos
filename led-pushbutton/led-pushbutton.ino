// light an LED if button is pressed

const int LED = 14; 									
const int BUTTON = 14;

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



