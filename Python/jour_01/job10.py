"""Job 10
Créez un programme permettant la simulation financière pour un
investissement. Initialiser deux variables, une pour le montant initial de
l'investissement et une pour le taux de rendement annuel en pourcentage.
_4
Affichez en console le gain annuel en fonction du taux de rendement.
L'investisseur augmente son capital de 5 000 euros, le taux augmente alors
de 2%.
Calculez à nouveau le gain de l'investisseur et affichez en console le résultat.
L'investisseur retire 10% du montant total, suite à ce retrait, le rendement
diminue de 1%. Calculez le montant final de l'investissement et affichez le
nouveau gain.
"""

montant_initial = 10000
taux_rendement_annuel = 1.03
print("Gain annuel en fonction du taux de rendement : ", (montant_initial*taux_rendement_annuel)-montant_initial)

montant_augmentation = montant_initial + 5000
taux_rendement_annuel_augmentation = taux_rendement_annuel + 0.02
print("Nouveau gain annuel en fonction du taux de rendement : ", (montant_augmentation*taux_rendement_annuel_augmentation)-montant_augmentation)

montant_diminution = montant_augmentation * 0.90
taux_rendement_annuel_diminution = taux_rendement_annuel_augmentation - 0.01
print("Gain annuel final en fonction du taux de rendement : ", (montant_diminution*taux_rendement_annuel_diminution)-montant_diminution)