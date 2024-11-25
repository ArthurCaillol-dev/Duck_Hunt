# Duck Hunt

Ce projet est une version simplifiée du jeu classique **Duck Hunt**, développée en C pour Linux. Le jeu met en œuvre des mécanismes de base avec un système de points et de vies.

## Fonctionnalités

- **Gameplay** :  
  - Un canard apparaît à l'écran, traverse de gauche à droite.  
  - Si le canard n'est pas abattu avant de sortir de l'écran, le joueur perd une vie.  
  - Le jeu se termine lorsque le joueur perd ses 3 vies.  
- **Système de score** : gagnez des points pour chaque canard abattu.

## Prérequis

Avant de pouvoir compiler et exécuter le jeu, assurez-vous d'avoir les éléments suivants :  

- **Linux** (testé sur POPos et autres distributions basées sur Debian)  
- **GCC** (compilateur C).  
- **CSFML** (si vous utilisez cette bibliothèque pour le rendu graphique).  
- Les bibliothèques standard du C.

## Installation

1. Clonez ce dépôt dans votre environnement local :  
   ```bash
   git clone https://github.com/votre-utilisateur/duck_hunt_simple.git
   cd Duck_Hunt
2. Dans votre terminal lancer la commande :
   ```bash
   make
   make go
3. Jouez !
