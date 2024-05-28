int PIR = 5;
int statusPin = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PIR, INPUT);

}

void loop() {
  statusPin = digitalRead(PIR);
  if(statusPin == HIGH){
    Serial.println("movement detected");
  }else{
    Serial.println("movement is not detected");
  }

}
