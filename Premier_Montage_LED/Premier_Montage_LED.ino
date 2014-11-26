int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 8; //Le pin 8 s'appelle maintenant bleu
int vert = 7; //Le pin 7 s'appelle maintenant vert

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {

  pinMode(rouge, OUTPUT);// Initialisation du pin 9 = rouge en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 8 = bleu en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 7 = vert en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {
  
  digitalWrite(rouge, HIGH); // On allume la LED rouge
  delay(1000);               // On attend une seconde
  digitalWrite(rouge, LOW);  // On éteint la LED rouge
  delay(1000);               // On attend une seconde
  digitalWrite(bleu, HIGH);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  digitalWrite(bleu, LOW);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde
  digitalWrite(vert, HIGH);  // On allume la LED verte
  delay(1000);               // On attend une seconde
  digitalWrite(vert, LOW);   //On éteint la LED verte
  delay(1000);               // On attend une seconde
}





