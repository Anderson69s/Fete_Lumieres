int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 8; //Le pin 8 s'appelle maintenant bleu
int vert = 7; //Le pin 7 s'appelle maintenant vert
int capteur_lumiere = A0; //Le pin A0 s'appelle maintenant capteur_lumière
const int limite = 10;//Valeur limite à partir de laquelle les LED s'allument

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {
  Serial.begin(9600); //On démarre la communication Serial pour avoir des informations
  pinMode(rouge, OUTPUT);// Initialisation du pin 9 (= rouge) en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 8 (= bleu) en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 7 (= vert) en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {
  int valeur_lue = analogRead(capteur_lumiere);
  if(valeur_lue > limite)
  {
    digitalWrite(vert,HIGH);
    digitalWrite(rouge, HIGH);
    digitalWrite(bleu, HIGH);
    delay(2000);
    digitalWrite(rouge, LOW);
    digitalWrite(bleu, LOW);
    digitalWrite(vert, LOW);
  }
  else
  {
    digitalWrite(rouge, HIGH);   // On allume la LED rouge
    delay(250);              // On attend une seconde
    digitalWrite(rouge, LOW);    // On éteint la LED rouge
    delay(250);              // On attend une seconde
    digitalWrite(bleu, HIGH);   //On allume la LED bleue
    delay(250);              // On attend une seconde
    digitalWrite(bleu, LOW);    // On éteint la LED bleue
    delay(250);              // On attend une seconde
    digitalWrite(vert, HIGH);   // On allume la LED verte
    delay(250);              // On attend une seconde
    digitalWrite(vert, LOW);    //On éteint la LED verte
    delay(250);              // On attend une seconde
  }
  Serial.println("La valeur analogique lue est : ");
  Serial.println(valeur_lue);
  delay(250);
}


