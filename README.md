# fillit

- Fonctions autorisees
   - exit
   - open
   - close
   - write
   - read
   - malloc
   - free

- Makefile content
   - all
   - clean
   - fclean
   - re
   
- Flags compilator
   - -Wall
   - -Wextra
   - -Werror
   
- L'executable se trouve dans le repertoire racine et s'appelle "fillit".


- "fillit" n'accepte qu'un parametre. Ce parametre decrira une suite de tetriminos
separes d'une ligne vide qu'il faudra agencer dans le plus petit carre possible.

- Un 'tetrimino' respecte les regles suivantes:
   - 4 lignes de 4 caractere suivis d'un retour a la ligne.
      - ....'\n'
      - ....'\n'
      - ....'\n'
      - ....'\n'
      - '\n' (si il y a au moins un autre 'tetrimino')
   - un tetriminos est compose de 4 caracteres qui sont des '#'.
   - les cases vides sont representees par des '.'.
   - chaque caractere d'un 'tetrimono' doit etre en contact 
     avec un autre. (gauche, droite, haut, bas).

- La solution retenue sera celle ou les tetriminos seront le plus en haut a gauche.

- Chaque 'tetrimino' sera represente par un lettre majuscule en fonction de l'ordre
de lecture. Ce qui implique qu'il ne devrait pas y en avoir plus de 26.

- Si le parametre comporte 1 erreur, fillit doit afficher "error" sur la sortie standard
et quitter proprement.
