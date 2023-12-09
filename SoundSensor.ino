int analogPin=4;
int noiseValue=100;
void setup() {
  Serial.begin(115200);
  pinMode(analogPin,INPUT);
}

void loop() {
  int analogValue=analogRead(analogPin);
  //Serial.println(analogValue);
  if(analogValue>noiseValue){
    Serial.println("1");
  }else{
    Serial.println("0");

  }
  delay(100);
}
