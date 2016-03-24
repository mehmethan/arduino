int led = 8;
String input;

void setup(){
   pinMode(led, OUTPUT);
   Serial.begin(9600);
   
}

void loop(){
    input = Serial.readString();
    if(input == "1"){
      digitalWrite(led, HIGH);
    }else if(input == "2"){
       digitalWrite(led, LOW); 
    }else{
       //do nothing for now 
    }
    
    delay(200);
    
}
