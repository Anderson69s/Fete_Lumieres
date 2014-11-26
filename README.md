Fete_Lumieres
=============

Code pour stand de la Fabrique d'Objets Libres lors de la fête des Lumières en partenariat avec Hôli et IDEA :

- http://www.fablab-lyon.fr/
- http://www.holimotion.com/
- (il me manque l'url)

1 - Pour envoyer le code sur la carte SparkFun Pro Micro 5V - 16MHz il vous faut télécharger l'Arduino IDE disponible gratuitement ici : http://arduino.cc/en/Main/Software . La dernière version en date stable est la 1.0.6 disponible sur Windows, Mac et Linux.

2 - La fiche descriptive et le schéma de la carte sont disponibles ici : https://www.sparkfun.com/products/12640 . Pour envoyer le code sur la carte il faut rajouter un dossier dans le dossier hardware de l'application Arduino IDE. Le nom du dossier à ajouter est SF32u4. Il est disponible dans ce Github (/arduino/hardware/SF32u4), mais le github officiel est ici : https://github.com/sparkfun/SF32u4_boards/.

3 - Il faudra donc copier le dossier SF32u4 dans un des dossier suivant en fonction de votre système d'exploitation :

* Windows : C: ▸ Users ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Mac : OS X ▸ Utilisateurs ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Linux : /home ▸ Nom_Utilisateur ▸ sketchbook ▸ hardware


4 - Puis, redémarrez l'Arduino IDE, vous pouvez maintenant choisir le bon type de carte : 
    
* Outils ▸ Type de carte ▸ SpakFun Pro Micro 5V/16MHz

5 - Branchez votre SparkFun Pro Micro via le port USB vous devez le voir apparaître dans : 

* Outils ▸ Port Série :
    * Mac & Linux : /dev/tty.usbmodemX où X est un nombre.
    * Windows : COMX où X est un nombre

6 - Il vous suffit alors de réaliser les branchements qui sont décrit grâce à une image dans les dossiers des différents montages et à uploader un des deux codes correspondants pour commencer à vous amusez... 


* NB : Si le visuel du microcontrolleur est un peu différent sur les photos : 

    - Pas de port USB 
    - Couleur PCB 

* IL N'EN RESTE PAS MOINS QUE LES CONNEXIONS SE FONT SUR LES MÊMES SORTIES !!!!

