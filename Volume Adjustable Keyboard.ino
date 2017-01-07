#define cButton 2
#define dButton 3
#define eButton 4
#define fButton 5
#define gButton 6
#define aButton 7
#define bButton 8
#define speakerPin 13

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(aButton,INPUT_PULLUP);
  pinMode(bButton,INPUT_PULLUP);
  pinMode(cButton,INPUT_PULLUP);
  pinMode(dButton,INPUT_PULLUP);
  pinMode(eButton,INPUT_PULLUP);
  pinMode(fButton,INPUT_PULLUP);
  pinMode(gButton,INPUT_PULLUP);
  pinMode(speakerPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int aButtonState = digitalRead(aButton);
  int bButtonState = digitalRead(bButton);
  int cButtonState = digitalRead(cButton);
  int dButtonState = digitalRead(dButton);
  int eButtonState = digitalRead(eButton);
  int fButtonState = digitalRead(fButton);
  int gButtonState = digitalRead(gButton);
  if(aButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,440);
    delay(80);
  }
  else if(bButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,493.88);
    delay(80);
  }
  else if(cButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,261.63);
    delay(80);
  }
  else if(dButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,293.66);
    delay(80);
  }
  else if(eButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,329.63);
    delay(80);
  }
  else if(fButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,349.23);
    delay(80);
  }
  else if(gButtonState==0){
    noTone(speakerPin);
    tone(speakerPin,392);
    delay(80);
  }
  delay(20);
  noTone(speakerPin);
}