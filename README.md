Fete_Lumieres
=============

Code pour stand de la Fabrique d'Objets Libres lors de la fête des Lumières en partenariat avec Hôli et IDEA :

- http://www.fablab-lyon.fr/
- http://www.holimotion.com/
- http://espe.univ-lyon1.fr/actualites/fete-des-lumieres-l-espe-de-l-academie-de-lyon-accueille-les-etudiants-du-programme-idea-770433.kjsp

Carte utilisée : Polulu A-Star 32U4

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/polulu_pcb_front.jpg)

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/polulu_pcb_rear.jpg)

Pour télécharger tout les fichiers :
====================================

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/github_download.png)


Installation Driver : WINDOWS UNIQUEMENT!!!!
============================================

Avant de pouvoir utiliser la carte sur Windows il va falloir installer le driver qui n'est pas disponible en ligne via Windows Update. Voici un petit guide qui devrait vous aider :

Brancher votre carte via le port USB et attendez patiemment que Windows ne la reconaisse pas (ce qui est normal): 

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_premiere_connexion.png)

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_error_no_drivers.png)

Rendez-vous dans les propriétés de l'ordinateur : 

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_prorietes_ordinateur.png)

Ouvrez le Gestionnaire de Périphériques :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_gestionnaire_peripherique.png)

Notre carte apparaît en USB IO Board :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_pas_driver.png)

Faites un clic droit sur la carte et choississez mettre à jour le pilote :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_maj_driver.png)

Sélectionnez Rechercher un pilote sur mon ordinateur :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_source.png)

Cliquez sur parcourir pour indiquer le bon chemin :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_source_choix.png)

Sélectionnez le dossier drivers contenu dans le zip :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_source_driver.png)

Cliquez sur Suivant pour valider :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_source_lancement_recherche.png)

Choissiez de toujours faire confiance et installez le pilote : 

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_confirmation_installation.png)

On attend le temps de l'installation :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_durant_installation.png)

Si l'installation ce passe bien, il affiche le bon nom de carte, vous pouvez alors cliquez sur fermer :

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_installation_finie.png)

Notre carte est maintenant bien reconnu par windows : (pensez à noter le numéro de port COM ici 6)

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Drivers_carte_bien_reconnue.png)

Vous pouvez maintenant passer à la suite :-) 

Utiliser la Carte Polulu
========================


1 - Pour éditer et envoyer le code sur la carte Polulu A-Start 32U4, il vous faut télécharger l'Arduino IDE disponible gratuitement ici : http://arduino.cc/en/Main/Software . La dernière version en date stable est la 1.0.6 disponible sur Windows, Mac et Linux.

2 - La fiche descriptive et le schéma de la carte de Polulu sont disponibles ici : http://www.pololu.com/product/3101/resources . Pour envoyer le code sur la carte il faut rajouter un dossier dans le dossier hardware de l'application Arduino IDE. Le nom du dossier à ajouter est polulu. Il est disponible dans ce Github (/hardware/polulu), mais le github officiel est ici si vous le désirez: https://github.com/pololu/a-star .

3 - Il faudra donc copier le dossier polulu dans un des dossier suivant en fonction de votre système d'exploitation :

* Windows : C: ▸ Users ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Mac : OS X ▸ Utilisateurs ▸ Nom_Utilisateur ▸ Documents ▸ Arduino ▸ hardware
* Linux : /home ▸ Nom_Utilisateur ▸ sketchbook ▸ hardware

Photos exemple pour le dossier à mettre dans hardware : 

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Arduino_IDE_hardware_folder.png)

4 - Puis, redémarrez l'Arduino IDE, vous pouvez maintenant choisir le bon type de carte : 

* Outils ▸ Type de carte ▸ Polulu A-Star 32u4

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Arduino_IDE_type_de_carte.png)

5 - Branchez la carte Polulu via le port USB vous devez le voir apparaître dans : 

* Outils ▸ Port Série :
    * Mac & Linux : /dev/tty.usbmodemX où X est un nombre.
    * Windows : COMX où X est un nombre

![alt tag](https://raw.githubusercontent.com/Anderson69s/Fete_Lumieres/master/images_installation/Arduino_IDE_outils_ports.png)

6 - Il vous suffit alors de réaliser les branchements qui sont décrit grâce à une image dans les dossiers des différents montages et à uploader un des deux codes correspondants pour commencer à vous amusez... 


* NB : Si le visuel du microcontrolleur est un peu différent sur les photos : 
    
    * Pas de port USB 
    * Couleur PCB 

* IL FAUT JUSTE RESPECTER LES NUMEROS DE PINS ET UPLOADER LE BON CODE EN FONCTION DE VOTRE MONTAGE!!!!

