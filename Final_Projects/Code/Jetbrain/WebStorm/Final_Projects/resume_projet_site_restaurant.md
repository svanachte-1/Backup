# Résumé technique – Site web de restaurant

## Technologies utilisées
- **HTML** pour la structure des pages
- **CSS** pour le style et le design visuel
- Pas d’utilisation de JavaScript, de frameworks ou de bibliothèques externes (conformément aux consignes)
- Aucune dépendance ou modèle extérieur : tout a été **codé manuellement**

## Structure du projet
```
Creer_un_site_16052025/
├── index.html
├── src/
│   ├── css/
│   │   ├── accueil.css
│   │   ├── about.css
│   │   ├── contact.css
│   │   ├── footer.css
│   │   ├── header.css
│   │   ├── main.css
│   │   ├── menu.css
│   │   ├── reservation.css
│   │   ├── style.css
│   ├── html/
│   │   ├── about.html
│   │   ├── contact.html
│   │   ├── menu.html
│   │   ├── reservation.html
│   ├── Legal/
│   │   ├── mentions-legales.html
│   │   ├── confidentialite.html
│   ├── media/
│   │   ├── image/
│   │   │   ├── home.png
│   │   │   ├── icon.png
├── README.md
```

## Pages et contenu
- **Accueil** : introduction au restaurant
- **Menu** : plats proposés avec prix et description
- **Réservation** : formulaire pour réserver une table
- **Contact** : formulaire de contact + infos utilisateur (pays, âge, code postal)
- **À propos** : histoire et valeurs du restaurant
- **Mentions légales** et **confidentialité** : aspects légaux du site

## Design et fonctionnalités
- Utilisation de **transitions CSS** et d’**effets hover** pour améliorer l’interaction utilisateur
- **Design soigné** et cohérent sur toutes les pages
- **Responsive partiel** : le site s’adapte à différents écrans (ordinateur, tablette, téléphone)
- Structure CSS répartie par page pour une meilleure organisation

## Limites techniques
- **Répétition de code** pour les éléments communs comme le header et le footer (pas de templating autorisé)
- Si l’usage d’autres technologies avait été permis, j’aurais utilisé **Astro.js** pour éviter la duplication de code entre les pages et rendre le projet plus modulaire et maintenable
