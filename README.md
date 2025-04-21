# Projet Sherlock 13 – OS USER

Ce projet est un jeu basé sur Sherlock 13. C’est un programme en C avec une interface graphique faite avec SDL2, et qui utilise les sockets pour faire communiquer les joueurs avec un serveur. Il a été réalisé dans le cadre du module "Systèmes d'exploitation utilisateurs".

## Contenu

Le projet contient :
- `sh13.c` : le code du client (interface + communication avec le serveur)
- `server.c` : le code du serveur qui gère les connexions et la logique du jeu
- les images des cartes, objets et boutons (au format PNG)
- la police `sans.ttf` pour l’affichage du texte

## Compilation

Il faut avoir installé SDL2, SDL2_image et SDL2_ttf.  
Ensuite on compile avec :

```bash
gcc -o sh13 sh13.c `sdl2-config --cflags --libs` -lSDL2_image -lSDL2_ttf -lpthread

```

## Lancement

### 1. Lancer le serveur :
```bash
./server 1234
```

### 2. Lancer le client :
```bash
./sh13 127.0.0.1 1234 127.0.0.1 5000 Joueur1
```

On peux lancer plusieurs fois `sh13` (avec des ports différents) pour faire plusieurs joueurs.

## Fonctionnement

Le joueur se connecte, reçoit ses cartes, et peut ensuite cliquer pour poser des questions ou faire une accusation. Tous les échanges entre les joueurs passent par le serveur.  
L’interface graphique permet de voir les cartes, les objets et les suppositions.

## 

TP B – 2024/2025  
Module OS USER
