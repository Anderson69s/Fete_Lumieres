int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 8; //Le pin 8 s'appelle maintenant bleu
int vert = 7; //Le pin 7 s'appelle maintenant vert
int capteur_son = A0; //Le pin A0 s'appelle maintenant capteur_son

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {
  Serial.begin(9600); //On démarre la communication Serial pour avoir des informations
  pinMode(rouge, OUTPUT);// Initialisation du pin 9 (= rouge) en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 8 (= bleu) en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 7 (= vert) en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {
  int valeur_lue = analogRead(capteur_son); //On lit la valeur du capteur et on appelle la valeur : valeur_lue
  int rangement_son = map(valeur_lue, 0, 400, 0, 7); //On crée un entier grace à la fonction map qui renvoie un chiffre entre 0 et 6 d'après la valeur du capteur
  switch (rangement_son) { //On fait alors appelle à la fonction switch qui va nous permettre de définir les actions en fonction de rangement_son
  case 0:                            //Si rangement_lumière = 0
    digitalWrite(bleu, HIGH);        //LED bleu allumée
    digitalWrite(vert, HIGH);        //LED verte allumée
    digitalWrite(rouge, HIGH);       //LED rouge allumée
    Serial.println("Case 0");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 0
  case 1:                            //Si rangement_lumière = 1
    digitalWrite(vert, LOW);         //LED verte éteinte
    digitalWrite(rouge, HIGH);       //LED rouge allumée
    digitalWrite(bleu, LOW);         //LED bleue éteinte
    Serial.println("Case 1");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 1
  case 2:                            //Si rangement_lumière = 2
    digitalWrite(rouge, HIGH);       //LED rouge allumée
    digitalWrite(vert, HIGH);        //LED verte allumée
    digitalWrite(bleu, LOW);         //LED bleue éteinte
    Serial.println("Case 2");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 2
  case 3:                            //Si rangement_lumière = 3
    digitalWrite(bleu, HIGH);        //LED bleu allumée
    digitalWrite(vert, LOW);         //LED verte éteinte
    digitalWrite(rouge, LOW);        //LED rouge éteinte
    Serial.println("Case 3");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 3
  case 4:                            //Si rangement_lumière = 4
    digitalWrite(rouge, LOW);        //LED rouge éteinte
    digitalWrite(vert, HIGH);        //LED verte allumée
    digitalWrite(bleu, LOW);         //LED bleue éteinte
    Serial.println("Case 4");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 4
  case 5:                            //Si rangement_lumière = 5
    digitalWrite(rouge, HIGH);       //LED rouge allumée
    digitalWrite(vert, LOW);         //LED verte éteinte
    digitalWrite(bleu, HIGH);        //LED bleu allumée
    Serial.println("Case 5");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 5
  case 6:                            //Si rangement_lumière = 6
    digitalWrite(rouge, LOW);        //LED rouge éteinte
    digitalWrite(vert, LOW);         //LED verte éteinte
    digitalWrite(bleu, LOW);         //LED bleue éteinte
    Serial.println("Case 6");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 6
  }                                  //Fin de la fonction switch
  Serial.print("La valeur lue est : "); //On affiche le résultat dans le Serial.
  Serial.println(valeur_lue);           //On affiche la valeur_lue dans le Serial
  delay(250);                            // Petit pause d' 1/4 de seconde
}
