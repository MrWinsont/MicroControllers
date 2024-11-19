// C++ code
//
int buttonState = 1;
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if(digitalRead(2) == HIGH){
    if(buttonState == 1){
    	buttonState = 2;
      	delay(200);
    }
    else{
    	buttonState = 1;
      	digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
      	delay(200);
    }
  }
  else{
  	if (buttonState == 2){
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
  		delay(500);
  		digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
  		delay(500); 
    }
  }
  
}