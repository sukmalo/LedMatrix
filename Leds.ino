#define pin1_2 5 //Out
#define pin3_4 6 //Out
#define pin1_3 3 //In
#define pin2_4 4 //In

void setup() {

  Serial.begin(9600);

  pinMode(pin1_2, OUTPUT);
  pinMode(pin3_4, OUTPUT);
  
  pinMode(pin1_3, OUTPUT);
  pinMode(pin2_4, OUTPUT);
}

int val[8][4] = {{1,0,0,1},
        {1,0,1,0},
        {0,1,0,1},
        {0,1,1,0},
        {1,0,0,0},
        {0,1,0,0},
        {1,1,0,1},
        {1,1,1,0},};

// void ledsLight(led){
//   for (i = 0; i < 8; i++){
//     for (j = 0; j < 4; j++){

//     }
//   }
// }

void loop() {

  digitalWrite(pin1_2, LOW);
  digitalWrite(pin3_4, LOW);
  digitalWrite(pin1_3, LOW);
  digitalWrite(pin2_4, LOW);

  

  if (Serial.available() > 0){
    char c = Serial.read();
    Serial.println(c);

    if (c == '0'){
      digitalWrite(pin1_2, LOW);
      digitalWrite(pin3_4, LOW);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, LOW);
      delay(1000);

    }
    else if (c == '1'){
      digitalWrite(pin1_2, HIGH);
      digitalWrite(pin3_4, LOW);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, HIGH);
      delay(1000);

    }
    else if (c == '2'){
      digitalWrite(pin1_2, HIGH);
      digitalWrite(pin3_4, LOW);
      digitalWrite(pin1_3, HIGH);
      digitalWrite(pin2_4, LOW);
      delay(1000);

    }
    else if (c == '3'){
      digitalWrite(pin1_2, LOW);
      digitalWrite(pin3_4, HIGH);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, HIGH);
      delay(1000);
      
    }
    else if (c == '4'){
      digitalWrite(pin1_2, LOW);
      digitalWrite(pin3_4, HIGH);
      digitalWrite(pin1_3, HIGH);
      digitalWrite(pin2_4, LOW);
      delay(1000);
      
    }
    else if (c == '12' or c == '21'){
      digitalWrite(pin1_2, HIGH);
      digitalWrite(pin3_4, LOW);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, LOW); 
      delay(1000);   
    }
    else if (c == '34' or c == '43'){
      digitalWrite(pin1_2, LOW);
      digitalWrite(pin3_4, HIGH);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, LOW); 
      delay(1000);
    }
    else if (c == '13' or c == '31'){
      digitalWrite(pin1_2, HIGH);
      digitalWrite(pin3_4, HIGH);
      digitalWrite(pin1_3, LOW);
      digitalWrite(pin2_4, HIGH);
      delay(1000);
      
    }
    else if (c == '24' or c == '42'){
      digitalWrite(pin1_2, HIGH);
      digitalWrite(pin3_4, HIGH);
      digitalWrite(pin1_3, HIGH);
      digitalWrite(pin2_4, LOW);
      delay(1000);
      
    }
  }

  // for (i = 0; i < 4; i++){
  //   if (val[i] == 1 and i == 0)
  //     digitalWrite(pin1_2, HIGH);
  //   else

  // }


}