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
  int valeur_lue = analogRead(capteur_lumiere); //On lit la valeur du capteur et on appelle la valeur : valeur_lue
  if(valeur_lue > limite)                       // Si la valeur_lue est supérieure à la limite définie 
  {
    digitalWrite(vert,HIGH);      //On allume la LED verte
    delay(250);                   //Pause 1/4 de seconde
    digitalWrite(vert,LOW);       //On éteint la LED verte
    delay(250);                   //Pause 1/4 de seconde
    digitalWrite(bleu, HIGH);     //On allume la LED bleue
    delay(250);                   //Pause 1/4 de seconde
    digitalWrite(bleu,LOW);       //On éteint la LED bleue
    delay(250);                   //Pause 1/4 de seconde
    digitalWrite(rouge, HIGH);    //On allume la LED rouge
    delay(250);                   //Pause 1/4 de seconde
    digitalWrite(rouge, LOW);     //On éteint la LED rouge
    delay(250);                   //Pause 1/4 de seconde
  }
  else                            //Sinon si valeur_lue est inférieure à la limite
  {
    digitalWrite(rouge, HIGH);  // On allume la LED rouge
    delay(250);                 // On attend une seconde
    digitalWrite(rouge, LOW);   // On éteint la LED rouge
    delay(250);                 // On attend une seconde
  }
  Serial.print("La valeur lue est : "); //On affiche le résultat dans le Serial.
  Serial.println(valeur_lue);           //On affiche la valeur_lue dans le Serial
}
