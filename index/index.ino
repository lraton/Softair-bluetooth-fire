//Relè
int rele = 7;

//Variabili di controllo
char inputByte;

void setup() {
  Serial.begin(9600);
  //Relè
  pinMode(rele, OUTPUT);
  //Bluetooth
  pinMode(analogInPin, INPUT);
}

void loop() {

  while(Serial.available()>0){
  inputByte= Serial.read();
  Serial.println(inputByte);

    if (inputByte=='1'){
        digitalWrite(rele,HIGH);
        delay(2000);
    }else{
      if (inputByte=='0'){
        digitalWrite(rele,LOW);
      }
    }
  }
  inputByte='0';
  digitalWrite(rele,LOW);
}
