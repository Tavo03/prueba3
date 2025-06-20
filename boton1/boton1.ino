//Definicion de pines
const int LED1=2;
const int BOTON=5;
//Definicion variable
bool estado; 

void setup() {
  pinMode(LED1,OUTPUT); //Definimos LED1 como salida
  pinMode(BOTON,INPUT); //Definimos BOTON como entrada
  // Establecemos el estado inicial de los leds (Recomendado)
  digitalWrite(LED1,LOW); //Led1 apagado
}

void loop() {
  estado = digitalRead(BOTON); //Asignamos la lectura del boton a variable estado
  if(estado == HIGH){
    digitalWrite(LED1,HIGH); //Si el boton esta presionado (HIGH) el Led1 se prende
  }
  if(estado == LOW){
    digitalWrite(LED1,LOW); //Si el boton esta suelto (LOW) el Led1 se apaga
  }
}
