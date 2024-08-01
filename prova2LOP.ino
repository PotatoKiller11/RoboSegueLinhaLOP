#define direitaFrente 11
#define direitaTras 10
#define esquerdaTras 6
#define esquerdaFrente 5

void frente(){
  digitalWrite(direitaTras, LOW);
  digitalWrite(esquerdaTras, LOW);
  digitalWrite(direitaFrente, HIGH);
  digitalWrite(esquerdaFrente, HIGH);
}
void tras(){
  digitalWrite(direitaFrente, LOW);
  digitalWrite(esquerdaFrente, LOW);
  digitalWrite(direitaTras, HIGH);
  digitalWrite(esquerdaTras, HIGH);
}
void parar(){
  digitalWrite(direitaFrente, LOW);
  digitalWrite(esquerdaFrente, LOW);
  digitalWrite(direitaTras, LOW);
  digitalWrite(esquerdaTras, LOW);
}
void direita(){
  digitalWrite(esquerdaTras, LOW);
  digitalWrite(direitaFrente, LOW);
  digitalWrite(esquerdaFrente, HIGH);
  digitalWrite(direitaTras, HIGH);
}
void esquerda(){
  digitalWrite(esquerdaFrente, LOW);
  digitalWrite(direitaTras, LOW);
  digitalWrite(esquerdaTras, HIGH);
  digitalWrite(direitaFrente, HIGH);
}

void setup() {
  pinMode(direitaFrente, OUTPUT);
  pinMode(direitaTras, OUTPUT);
  pinMode(esquerdaTras, OUTPUT);
  pinMode(esquerdaFrente, OUTPUT);

}

void loop{
  frente();
  delay(5000);
  tras();
  delay(5000);
  parar();
  delay(1000);
  direita();
  delay(1000);
  esquerda();
  delay(1000);
}
