int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 5; //Le pin 5 s'appelle maintenant bleu
int vert = 6; //Le pin 6 s'appelle maintenant vert
int capteur_temp = A0; //Le pin A0 s'appelle maintenant capteur_temp

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {
  Serial.begin(9600); //On démarre la communication Serial pour avoir des informations
  pinMode(rouge, OUTPUT);// Initialisation du pin 9 (= rouge) en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 5 (= bleu) en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 6 (= vert) en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {
  int valeur_lue = analogRead(capteur_temp); //On lit la valeur du capteur et on appelle la valeur : valeur_lue
  int temp = valeur_lue * 0.48828125;//On converti notre valeur analogique en degrés Celsius
  int rangement_temp = map(temp, 0, 45, 0, 7); //On crée un entier grace à la fonction map qui renvoie un chiffre entre 0 et 6 d'après la valeur du capteur
  switch (rangement_temp) { //On fait alors appelle à la fonction switch qui va nous permettre de définir les actions en fonction de rangement_lumiere
  case 0:                            //Si rangement_lumière = 0
    analogWrite(bleu, 255);        //LED bleu allumée
    analogWrite(vert, 255);        //LED verte allumée
    analogWrite(rouge, 255);       //LED rouge allumée
    Serial.println("Case 0");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 0
  case 1:                            //Si rangement_lumière = 1
    analogWrite(vert, 0);         //LED verte éteinte
    analogWrite(rouge, 0);       //LED rouge allumée
    analogWrite(bleu, 255);         //LED bleue éteinte
    Serial.println("Case 1");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 1
  case 2:                            //Si rangement_lumière = 2
    analogWrite(rouge, 255);       //LED rouge allumée
    analogWrite(vert, 0);        //LED verte allumée
    analogWrite(bleu, 255);         //LED bleue éteinte
    Serial.println("Case 2");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 2
  case 3:                            //Si rangement_lumière = 3
    analogWrite(bleu, 0);        //LED bleu allumée
    analogWrite(vert, 255);         //LED verte éteinte
    analogWrite(rouge, 0);        //LED rouge éteinte
    Serial.println("Case 3");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 3
  case 4:                            //Si rangement_lumière = 4
    analogWrite(rouge, 255);        //LED rouge éteinte
    analogWrite(vert, 255);        //LED verte allumée
    analogWrite(bleu, 0);         //LED bleue éteinte
    Serial.println("Case 4");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 4
  case 5:                            //Si rangement_lumière = 5
    analogWrite(rouge, 255);       //LED rouge allumée
    analogWrite(vert, 0);         //LED verte éteinte
    analogWrite(bleu, 0);        //LED bleu allumée
    Serial.println("Case 5");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 5
  case 6:                            //Si rangement_lumière = 6
    analogWrite(rouge, 0);        //LED rouge éteinte
    analogWrite(vert, 0);         //LED verte éteinte
    analogWrite(bleu, 0);         //LED bleue éteinte
    Serial.println("Case 6");        //On affiche le numero du cas dans le Serial
    break;                           //Fin du cas 6
  }                                  //Fin de la fonction switch
  Serial.print("La Temp lue est : "); //On affiche le résultat dans le Serial.
  Serial.println(temp);           //On affiche la temperature dans le Serial
  delay(150);                            // Petit pause d' 1/4 de seconde
}

