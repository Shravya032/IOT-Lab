//const int dry_threshold=800;
//const int wet_threshold=300;
int moisture_sensor=0;
void setup(){
  pinMode(A0,INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop(){
  moisture_sensor=analogRead(A0);
  Serial.println(moisture_sensor);
  if(moisture_sensor>=800){
    Serial.print("Soil is dry :");
    digitalWrite(13,HIGH);
  }else if(moisture_sensor<100){
    Serial.print("Soil is extremely wet ");
    digitalWrite(13,LOW);
  }
  else{
    Serial.print("Soil is wet :");
  }
  delay(10);
}

  
