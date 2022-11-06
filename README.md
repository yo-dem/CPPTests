# Implementazione del cifrario di Vigènere

Il cifrario di Vigènere è un'evoluzione del cifrario di Cesare, in cui, il testo cifrato, si ottiene scambiando il posto di ogni carattere di una quantità prefissata.
Nel cifrario di Vigènere la quantità di caratteri per cui scambiare non è più fissa e varia carattere per carattere in base a una chiave segreta che gli interlocutori devono conoscere.


# Esempio

Testo in chiaro: MESSAGGIO
Chiave (MELA): MELAMELAM
Testo cifrato : AMFTNNSLC

Il testo cifrato si ottiene sommando al posto relativo al primo carattere del messaggio in chiaro (M = 11) quello relativo al primo carattere della chiave (M = 11).
Il risultato  22, quindi la prima lettera del testo cifrato è A (22 = 21 + 1 = A)
