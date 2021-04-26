
//WIO Essentials libary for Seeed WIO Terminal

class WIO_Essentials {
private:
bool KeyA = false;
bool KeyB = false;
bool KeyC = false;
bool KeyU = false;
bool KeyR = false;
bool KeyD = false;
bool KeyL = false;
bool KeyP = false;
int Light;
int Sonic;
int Key = 0;
bool LED = false;
public:
void begin() {
  pinMode(WIO_KEY_A, INPUT_PULLUP);
  pinMode(WIO_KEY_B, INPUT_PULLUP);
  pinMode(WIO_KEY_C, INPUT_PULLUP);
  
  pinMode(WIO_5S_UP, INPUT_PULLUP);
  pinMode(WIO_5S_DOWN, INPUT_PULLUP);
  pinMode(WIO_5S_LEFT, INPUT_PULLUP);
  pinMode(WIO_5S_RIGHT, INPUT_PULLUP);
  pinMode(WIO_5S_PRESS, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(WIO_BUZZER, OUTPUT);
  pinMode(WIO_LIGHT, INPUT);
  pinMode(WIO_MIC, INPUT);
  Key = 0;
  LED = false;
}
int Keypressed() {
  if (digitalRead(WIO_KEY_A) == LOW)  {
    Key = 1;
    KeyA = true;
    KeyB = false;
    KeyC = false;
    KeyD = false;
    KeyL = false;
    KeyP = false;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_KEY_A) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_KEY_B) == LOW) {
    Key = 2;
    KeyA = false;
    KeyB = true;
    KeyC = false;
    KeyD = false;
    KeyL = false;
    KeyP = false;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_KEY_B) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_KEY_C) == LOW) {
    Key = 3;
    KeyA = false;
    KeyB = false;
    KeyC = true;
    KeyD = false;
    KeyL = false;
    KeyP = false;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_KEY_C) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_UP) == LOW) {
    Key = 4;
    KeyA = false;
    KeyB = false;
    KeyC = false;
    KeyD = false;
    KeyL = false;
    KeyP = false;
    KeyR = false;
    KeyU = true;
    while (digitalRead(WIO_5S_UP) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_DOWN) == LOW) {
    Key = 5;
    KeyA = false;
    KeyB = false;
    KeyC = false;
    KeyD = true;
    KeyL = false;
    KeyP = false;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_5S_DOWN) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_LEFT) == LOW) {
    Key =6 ;
    KeyA = false;
    KeyB = false;
    KeyC = false;
    KeyD = false;
    KeyL = true;
    KeyP = false;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_5S_LEFT) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_RIGHT) == LOW) {
    Key = 7;
    KeyA = false;
    KeyB = false;
    KeyC = false;
    KeyD = false;
    KeyL = false;
    KeyP = false;
    KeyR = true;
    KeyU = false;
    while (digitalRead(WIO_5S_RIGHT) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_PRESS) == LOW) {
    Key = 8;
    KeyA = false;
    KeyB = false;
    KeyC = false;
    KeyD = false;
    KeyL = false;
    KeyP = true;
    KeyR = false;
    KeyU = false;
    while (digitalRead(WIO_5S_PRESS) == LOW) {
      delay(10);
    }
  }
  else Key = 0;
  delay(100);
  return Key;  
}
int Keyset() {
  if (digitalRead(WIO_KEY_A) == LOW)  {
    Key = 1;
    if (KeyA = true) KeyA = false;
    else KeyA = true;
    while (digitalRead(WIO_KEY_A) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_KEY_B) == LOW) {
    Key = 2;
    if (KeyB = true) KeyB = false;
    else KeyB = true;
    while (digitalRead(WIO_KEY_B) == LOW) {
      delay(10);
    }
  }
  
  else if (digitalRead(WIO_KEY_C) == LOW) {
    Key = 3;
    if (KeyC = true) KeyC = false;
    else KeyC = true;
    while (digitalRead(WIO_KEY_C) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_UP) == LOW) {
    Key = 4;
    if (KeyU = true) KeyU = false;
    else KeyU = true;
    while (digitalRead(WIO_5S_UP) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_DOWN) == LOW) {
    Key = 5;
    if (KeyD = true) KeyD = false;
    else KeyD = true;
    while (digitalRead(WIO_5S_DOWN) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_LEFT) == LOW) {
    Key =6 ;
    if (KeyL = true) KeyL = false;
    else KeyL = true;
    while (digitalRead(WIO_5S_LEFT) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_RIGHT) == LOW) {
    Key = 7;
    if (KeyR = true) KeyR = false;
    else KeyR = true;
        while (digitalRead(WIO_5S_RIGHT) == LOW) {
      delay(10);
    }
  }
  else if (digitalRead(WIO_5S_PRESS) == LOW) {
    Key = 8;
    if (KeyP = true) KeyP = false;
    else KeyP = true;
    while (digitalRead(WIO_5S_PRESS) == LOW) {
      delay(10);
    }
  }
  else Key = 0;
  delay(100);
  return Key;  
}
void Keyreset() {
  KeyA = false;
  KeyB = false;
  KeyC = false;
  KeyD = false;
  KeyL = false;
  KeyP = false;
  KeyR = false;
  KeyU = false;
}
bool getKeyA() {
  return KeyA;
}
bool getKeyB() {
  return KeyB;
}
bool getKeyC() {
  return KeyC;
}
bool getKeyU() {
  return KeyU;
}
bool getKeyD() {
  return KeyD;
}
bool getKeyL() {
  return KeyL;
}
bool getKeyR() {
  return KeyR;
}
bool getKeyP() {
  return KeyP;
}
bool getLED(){
  return LED;
}
bool LEDon() {
  LED = true;
  digitalWrite(LED_BUILTIN, HIGH);
  return LED;
}
bool LEDoff() {
  LED = false;
  digitalWrite(LED_BUILTIN, LOW);
  return LED;
}
bool LEDtoggle() {
  if (LED == true) {
    LED = false;
    digitalWrite(LED_BUILTIN, LOW);
  }
  else {
    LED = true;
    digitalWrite(LED_BUILTIN, HIGH);
  }
  return LED;
}
void buzzer(int leng)  {
  analogWrite(WIO_BUZZER, 128);
  delay(leng);
  analogWrite(WIO_BUZZER, 0);
  delay(leng);
}
int meassureLight() {
   Light = analogRead(WIO_LIGHT);
   delay(200);
   return Light;
}
int getLight() {
  return Light;
}
int meassureSonic() {
  Sonic = analogRead(WIO_MIC);
  return Sonic;
}
int getSonic() {
  return Sonic;
}
};
