/*
 Fundacion Kinal
 Centro Educativo Tecnico Laborla Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de eleectronica digital y reparacion de computadoras I
 Nombre: Juan Manuel Sebastian Ixen Coy
 Carne: 2019519
 Fecha: 13/04
 */
 #define Bot1 2
 #define Bot2 3
 #define R 4
 #define B 5
 #define G 6
 
 void setup() {

pinMode(Bot1,INPUT);
pinMode(Bot2,INPUT);
pinMode(R,OUTPUT);
pinMode(B,OUTPUT);
pinMode(G,OUTPUT);



 }
 
void loop() {
 
 if(digitalRead(Bot1)== LOW && digitalRead(Bot2) == LOW)
   {
 digitalWrite(R,HIGH);//rojo
 digitalWrite(B,LOW);//azul
 digitalWrite(G,LOW);//verde
 delay(500);
 digitalWrite(R,LOW);//rojo
 digitalWrite(B,HIGH);//azul
 digitalWrite(G,LOW);//verde
 delay(500);
 digitalWrite(R,LOW);//rojo
 digitalWrite(B,LOW);//azul
 digitalWrite(G,HIGH);//verde
 delay(500);
}
 
 if(digitalRead(Bot1)== HIGH && digitalRead(Bot2) == LOW)
{
 digitalWrite(R,HIGH);//rojo
 digitalWrite(B,LOW);//azul
 digitalWrite(G,HIGH);//verde 
  delay(500);
  
}
 if(digitalRead(Bot1)== HIGH && digitalRead(Bot2) == HIGH)
{
 digitalWrite(R,LOW);//rojo
 digitalWrite(B,HIGH);//azul
 digitalWrite(G,HIGH);//verde 
  delay(500);

 }
 if(digitalRead(Bot1)== LOW && digitalRead(Bot2) == HIGH)
{
 digitalWrite(R,HIGH);//rojo
 digitalWrite(B,HIGH);//azul
 digitalWrite(G,LOW);//verde
  delay(500);

 }
  }
  
