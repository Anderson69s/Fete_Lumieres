int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 5; //Le pin 5 s'appelle maintenant bleu
int vert = 6; //Le pin 6 s'appelle maintenant vert

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {

  pinMode(rouge, OUTPUT);// Initialisation du pin 9 = rouge en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 5 = bleu en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 6 = vert en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {

  analogWrite(rouge, 255); // On allume la LED rouge
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  delay(1000);               // On attend une seconde

  analogWrite(bleu, 255);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde

  analogWrite(vert, 255);  // On allume la LED verte
  delay(1000);               // On attend une seconde
  analogWrite(vert, 0);   //On éteint la LED verte
  delay(1000);               // On attend une seconde

  //On peut faire d'autres couleurs : violet
  
  analogWrite(rouge, 255); // On allume la LED rouge
  analogWrite(bleu, 255);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde

  //On peut faire d'autres couleurs : jaune
  
  analogWrite(rouge, 255); // On allume la LED rouge
  analogWrite(vert, 255);  //On allume la LED verte
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(vert, 0);   // On éteint la LED vert
  delay(1000);               // On attend une seconde

  //On peut faire d'autres couleurs : blanc
  
  analogWrite(rouge, 255); // On allume la LED rouge
  analogWrite(vert, 255);  //On allume la LED vert
  analogWrite(bleu, 255);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(vert, 0);   // On éteint la LED vert
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde
  
  //On peut aussi jouer sur l'intensité de la LED :
  analogWrite(rouge, 55); // On allume la LED rouge
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  delay(1000);               // On attend une seconde

  analogWrite(bleu, 55);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde

  analogWrite(vert, 55);  // On allume la LED verte
  delay(1000);               // On attend une seconde
  analogWrite(vert, 0);   //On éteint la LED verte
  delay(1000);               // On attend une seconde
 
  analogWrite(rouge, 55); // On allume la LED rouge
  analogWrite(bleu, 55);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde
  
  analogWrite(rouge, 55); // On allume la LED rouge
  analogWrite(vert, 55);  //On allume la LED verte
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(vert, 0);   // On éteint la LED vert
  delay(1000);               // On attend une seconde

  analogWrite(rouge, 55); // On allume la LED rouge
  analogWrite(vert, 55);  //On allume la LED vert
  analogWrite(bleu, 55);  //On allume la LED bleue
  delay(1000);               // On attend une seconde
  analogWrite(rouge, 0);  // On éteint la LED rouge
  analogWrite(vert, 0);   // On éteint la LED vert
  analogWrite(bleu, 0);   // On éteint la LED bleue
  delay(1000);               // On attend une seconde


}
