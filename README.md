Fete_Lumieres
=============

Code pour stand de la Fabrique d'Objets Libres lors de la fête des Lumières en partenariat avec Hôli et IDEA :

- http://www.fablab-lyon.fr/
- http://www.holimotion.com/
- http://espe.univ-lyon1.fr/actualites/fete-des-lumieres-l-espe-de-l-academie-de-lyon-accueille-les-etudiants-du-programme-idea-770433.kjsp

1 - Pour envoyer le code sur la carte SparkFun Pro Micro 5V - 16MHz ou sur la carte Polulu A-Start il vous faut télécharger l'Arduino IDE disponible gratuitement ici : http://arduino.cc/en/Main/Software . La dernière version en date stable est la 1.0.6 disponible sur Windows, Mac et Linux.

2 - La fiche descriptive et le schéma de la carte de SparkFun sont disponibles ici : https://www.sparkfun.com/products/12640 . Pour envoyer le code sur la carte il faut rajouter un dossier dans le dossier hardware de l'application Arduino IDE. Le nom du dossier à ajouter est SF32u4. Il est disponible dans ce Github (/arduino/hardware/SF32u4), mais le github officiel est ici : https://github.com/sparkfun/SF32u4_boards/.

   - La fiche descriptive et le schéma de la carte de Polulu sont disponibles ici : https://www.coolcomponents.co.uk/a-star-32u4-micro.html . Pour envoyer le code sur la carte il faut rajouter un dossier dans le dossier hardware de l'application Arduino IDE. Le nom du dossier à ajouter est polulu. Il est disponible dans ce Github (/arduino/hardware/polulu), mais le github officiel est ici : https://github.com/pololu/a-star.

3 - Il faudra donc copier le dossier SF32u4 ou polulu dans un des dossier suivant en fonction de votre système d'exploitation :

* Windows : C: ▸ Users ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Mac : OS X ▸ Utilisateurs ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Linux : /home ▸ Nom_Utilisateur ▸ sketchbook ▸ hardware

Photos exemple sur le SF32u4 : 

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/img/hardware_folder.png)

4 - Puis, redémarrez l'Arduino IDE, vous pouvez maintenant choisir le bon type de carte : 

* Outils ▸ Type de carte ▸ SpakFun Pro Micro 5V/16MHz ou Polulu A-Star 32u4

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/img/type_de_carte.png)

5 - Branchez votre SparkFun Pro Micro ou la cate Polulu via le port USB vous devez le voir apparaître dans : 

* Outils ▸ Port Série :
    * Mac & Linux : /dev/tty.usbmodemX où X est un nombre.
    * Windows : COMX où X est un nombre

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/img/outils_ports.png)

6 - Il vous suffit alors de réaliser les branchements qui sont décrit grâce à une image dans les dossiers des différents montages et à uploader un des deux codes correspondants pour commencer à vous amusez... 


* NB : Si le visuel du microcontrolleur est un peu différent sur les photos : 
    
    * Pas de port USB 
    * Couleur PCB 

* DONC PEU IMPORTE LA CARTE QUE VOUS UTILISEZ, IL FAUT JUSTE RESPECTER LES NUMEROS DE PINS ET UPLOADER LE CODE!!!!

