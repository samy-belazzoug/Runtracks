"""Job 09
Créez un programme permettant la gestion d'un inventaire.
Créez des variables représentant un produit (nom, prix unitaire, quantité en
stock). Affichez en console les informations du produit de manière formatée.
Ajoutez des produits en stock. Demandez à l'utilisateur de saisir la quantité de
produits qu'il souhaite acheter et mettre le stock à jour.
"""

"""Une variable sert à stocker en mémoire une valeure
Cela permet de sauvegarder des valeures et les mettre à jour au fil du programme
Maintenant, nous avons uniquement coder des variables en brut, mais nous pouvons aussi demander à l'utilisateur une valeure.
Cela s'appelle des entrées. Précisemment, les entrées sont toutes les intéractions d'un utilisateur dans un programme
On peut demander, dans un terminal, une entrée utilisateur en Python à l'aide de la fonction input()
"""

nom = "Bouteille d'eau 1L"
prix_unitaire = 0.15
quantite_stock = 18

informations = f"Informations de base du produit : \nNom : {nom}\nPrix à l'unité : {prix_unitaire}\nQuantité en stock : {quantite_stock}\n"
print(informations)

achat = int(input("Saisissez la quantité voulue : "))
quantite_stock = quantite_stock - achat
informations2 = f"Informations après achat : \nNom : {nom}\nPrix à l'unité : {prix_unitaire}\nQuantité en stock : {quantite_stock}\n"
print(informations2)

prix_unitaire *= 1.10
informations3 = f"Attention ! Le produit a subi une inflation de 10% : \nNom : {nom}\nPrix à l'unité : {prix_unitaire}\nQuantité en stock : {quantite_stock}\n"
print(informations3)