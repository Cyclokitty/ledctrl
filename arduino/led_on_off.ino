int flag = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    char data = Serial.read();
    //Serial.println(data);
    if(data == 'T'){
      if(flag == 0){
        digitalWrite(13,HIGH);
        flag = 1;
      }else{
        digitalWrite(13,LOW);
        flag = 0;
      }
    }
  }
}