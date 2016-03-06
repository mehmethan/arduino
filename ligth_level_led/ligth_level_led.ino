int leds[] = {2,3,4,5,6,7};
int photocellPin = 0;  
int photocellValue = 0;

void setup(){
   for(int i = 0; i <= sizeof(leds); i++){
      pinMode(leds[i], OUTPUT);
      
   } 
   
   Serial.begin(9600);
}

void loop(){
  for(int i = 0; i <= 6; i++){
      digitalWrite(leds[i], LOW);
   }  
  
  photocellValue = analogRead(photocellPin);
   Serial.println(photocellValue);
   int c = 0;
   c = map(photocellValue, 0, 200, 0, 6);
   for(int i = 0; i <= c; i++){
      digitalWrite(leds[i], HIGH);
   } 
   delay(250);
}
