int rouge = 9; //Le pin 9 s'appelle maintenant rouge
int bleu = 5; //Le pin 5 s'appelle maintenant bleu
int vert = 6; //Le pin 6 s'appelle maintenant vert
int capteur_lumiere = A0; //Le pin A0 s'appelle maintenant capteur_lumiere
const int limite = 300;//Valeur limite à partir de laquelle les LED s'allument

// Fonction Setup qui est utilisé une fois au redémarrage de l'arduino
void setup() {
  Serial.begin(9600); //On démarre la communication Serial pour avoir des informations
  pinMode(rouge, OUTPUT);// Initialisation du pin 9 (= rouge) en sortie
  pinMode(bleu, OUTPUT);// Initialisation du pin 5 (= bleu) en sortie
  pinMode(vert, OUTPUT);// Initialisation du pin 6 (= vert) en sortie
}

// Fonction loop qui tourne pour toujours
void loop() {
  int valeur_lue = analogRead(capteur_lumiere); //On lit la valeur du capteur et on appelle la valeur : valeur_lue
  if(valeur_lue > limite)                       // Si la valeur_lue est supérieure à la limite définie 
  {
    analogWrite(vert,255);      //On allume la LED verte
    delay(250);                   //Pause 1/4 de seconde
    analogWrite(vert,0);       //On éteint la LED verte
    delay(250);                   //Pause 1/4 de seconde
    analogWrite(bleu, 255);     //On allume la LED bleue
    delay(250);                   //Pause 1/4 de seconde
    analogWrite(bleu,0);       //On éteint la LED bleue
    delay(250);                   //Pause 1/4 de seconde
    analogWrite(rouge, 255);    //On allume la LED rouge
    delay(250);                   //Pause 1/4 de seconde
    analogWrite(rouge, 0);     //On éteint la LED rouge
    delay(250);                   //Pause 1/4 de seconde
   }
  else                            //Sinon si valeur_lue est inférieure à la limite
  {
    analogWrite(rouge, 5);  // On allume la LED rouge
    delay(250);                 // On attend 1/4 de seconde
    analogWrite(rouge, 0);   // On éteint la LED rouge
    delay(250);                 // On attend 1/4 de seconde
   }
  Serial.print("La valeur lue est : "); //On affiche le résultat dans le Serial.
  Serial.println(valeur_lue);           //On affiche la valeur_lue dans le Serial
  delay(150);
}
