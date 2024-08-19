int EsquerdaTras = 6;
int EsquerdaFrente = 5;
int DireitaTras = 10;
int DireitaFrente = 9;

int AnalogDireita = A0;
int AnalogEsquerda = A1;
int leituraDireita = 0;
int leituraEsquerda = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(EsquerdaTras,OUTPUT);
  pinMode(EsquerdaFrente,OUTPUT);
  
  pinMode(DireitaTras,OUTPUT);
  pinMode(DireitaFrente,OUTPUT);

}

void loop() {
  leituraDireita = analogRead(AnalogDireita);
  leituraEsquerda = analogRead(AnalogEsquerda);

  if (leituraDireita > 100 && leituraEsquerda < 100){
    digitalWrite(DireitaTras, HIGH);
    digitalWrite(EsquerdaFrente, HIGH);
    digitalWrite(EsquerdaTras, LOW);
    digitalWrite(DireitaFrente, LOW);
    
  } else {
    if (leituraEsquerda > 100 && leituraDireita < 100) {
      digitalWrite(EsquerdaTras, HIGH);
      digitalWrite(DireitaFrente, HIGH);
      digitalWrite(EsquerdaFrente, LOW);
      digitalWrite(DireitaTras, LOW);
    } else {
      digitalWrite(EsquerdaFrente, HIGH);
      digitalWrite(DireitaFrente, HIGH);
      digitalWrite(EsquerdaTras, LOW);
      digitalWrite(DireitaTras, LOW);
    }
  }
  delay(100);
  digitalWrite(EsquerdaFrente, LOW);
  digitalWrite(DireitaFrente, LOW);
  digitalWrite(EsquerdaTras, LOW);
  digitalWrite(DireitaTras, LOW);
  delay(100);
}
