/*
 * Copyright (c) 2024, lraton 
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

//Relè
int rele = 7;
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
