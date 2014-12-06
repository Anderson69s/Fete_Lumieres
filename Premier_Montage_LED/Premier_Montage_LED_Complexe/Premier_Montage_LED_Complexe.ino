/* 
Original code from cyragia on Instructables (http://www.instructables.com/id/Fading-RGB-LED-Arduino/step3/Code/), slightly modified by Eric Weinhoffer.
Assembly instructions are available on Make Projects (http://makeprojects.com/Project/Use+a+Common+Anode+RGB+LED/3415/).
And again little change by Anderson69s : Anderson69s.com
*/
#define vert 6 //Le pin 6 s'appelle maintenant vert
#define bleu 5 //Le pin 5 s'appelle maintenant bleu
#define rouge 9 //Le pin 9 s'appelle maintenant rouge
#define delayTime 15 // Augmenter la valeur pour diminiuer le temps de transition entre les couleurs.

void setup() 
{
  pinMode(vert, OUTPUT); // Initialisation du pin 6 = vert en sortie
  pinMode(bleu, OUTPUT); // Initialisation du pin 5 = bleu en sortie
  pinMode(rouge, OUTPUT); // Initialisation du pin 9 = rouge en sortie
}

int rougeVal; //on définit une variable pour une valeur de rouge
int bleuVal; //on définit une variable pour une valeur de bleu
int vertVal; //on définit une variable pour une valeur de vert
 
void loop() 
{
  rougeVal = 255; // on attribue la valeur 255 (max) à notre variable rouge
  bleuVal = 0; // on attribue la valeur 0 (min) à notre variable bleu
  vertVal = 0; // on attribue la valeur 0 (min) à notre variable verte
  for(int i = 0; i < 255; i += 1) // Pour i = 0 à i < 255 on incrémente i de 1 à chaque boucle for. Cela executera 254 fois la portion de code entre accolade
  {
    vertVal += 1; //on ajoute 1 à notre variable verte
    rougeVal -= 1; //on enlève 1 à notre variable rouge
    analogWrite(vert, 255 - vertVal); //on écrit la valeur de notre variable sur la led verte.
    analogWrite(rouge, 255 - rougeVal); //on écrit la valeur de notre variable sur la led rouge.
    delay(delayTime); // On applique notre delay personnalisé.
  }
 
  rougeVal = 0;  // on attribue la valeur 0 (min) à notre variable rouge
  bleuVal = 0;  // on attribue la valeur 0 (min) à notre variable bleu
  vertVal = 255; // on attribue la valeur 255 (max) à notre variable verte
  for(int i = 0; i < 255; i += 1) // Pour i = 0 à i = 255 on incrémente i de 1 à chaque boucle for. Cela executera 254 fois la portion de code entre accolade
  {
    bleuVal += 1; //on ajoute 1 à notre variable bleu
    vertVal -= 1; //on enlève 1 à notre variable verte
    analogWrite(bleu, 255 - bleuVal); //on écrit la valeur de notre variable sur la led bleu.
    analogWrite(vert, 255 - vertVal); //on écrit la valeur de notre variable sur la led verte.
    delay(delayTime); // On applique notre delay personnalisé.
  }
 
  rougeVal = 0; // on attribue la valeur 0 (min) à notre variable rouge
  bleuVal = 255; // on attribue la valeur 255 (max) à notre variable bleu
  vertVal = 0; // on attribue la valeur 0 (min) à notre variable verte
  for(int i = 0; i < 255; i += 1)// Pour i = 0 à i = 255 on incrémente i de 1 à chaque boucle for. Cela executera 254 fois la portion de code entre accolade
  {
    rougeVal += 1; //on ajoute 1 à notre variable rouge
    bleuVal -= 1; //on enlève 1 à notre variable bleu
    analogWrite(rouge, 255 - rougeVal); //on écrit la valeur de notre variable sur la led rouge.
    analogWrite(bleu, 255 - bleuVal); //on écrit la valeur de notre variable sur la led rouge.
    delay(delayTime); // On applique notre delay personnalisé.
  }
}
