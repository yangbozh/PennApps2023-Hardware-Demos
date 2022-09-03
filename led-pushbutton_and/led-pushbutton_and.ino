// light LED if both buttons are pressed

const int LED = 14; 									
const int BUTTON_1 = 15;
const int BUTTON_2 = 33;

int val;

void setup() {
	pinMode(LED, OUTPUT); 		
	pinMode(BUTTON_1, INPUT);
    pinMode(BUTTON_2, INPUT);
}

void loop() {
  // read the buttons' states
  val_1 = digitalRead(BUTTON_1);
  val_2 = digitalRead(BUTTON_2);
  
  // are both buttons pressed?
  if (val_1 == HIGH && val_2 == HIGH) {
    digitalWrite(LED, HIGH);
  } else { 
    digitalWrite(LED, LOW);
  }
}



