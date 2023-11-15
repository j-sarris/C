# C notes for DIEK Zografou 2023B

Exercises to practice

Μεταβλητές
1. Δημιουργήστε ένα πρόγραμμα το οποίο θα ζητά από τον χρήστη δύο ακέραιους αριθμούς, και θα υπολογίζει:
• Tο άθροισμά τους καταχωρώντας το στη μεταβλητή sum.
• Tη διαφορά τους καταχωρώντας τη στη μεταβλητή dif.
• Tο γινόμενό τους καταχωρώντας το στη μεταβλητή mult.
Στο τέλος θα εμφανίζει το αποτέλεσμα των πράξεων στο χρήστη.

2. Να γραφεί πρόγραμμα που να ζητά από το χρήστη έναν δεκαδικό αριθμό και να εμφανίζει στην έξοδο ξεχωριστά το ακέραιο και το δεκαδικό του τμήμα (πχ είσοδος: 6.25 έξοδος: 6 και 0.25).

Δομές επιλογής (if, switch)

3. Να γραφεί πρόγραμμα το οποίο να ζητάει από το χρήστη έναν ακέραιο αριθμό και να του εμφανίζει αν ο αριθμός είναι μονός ή ζυγός.

4. Ας υποθέσουμε ότι η βαθμολογία ενός μαθήματος προκύπτει ως ο μέσος όρος των βαθμολογιών (1 έως 20) δύο βαθμολογητών. Στην περίπτωση που οι 2 βαθμολογίες διαφέρουν περισσότερο από 4 μονάδες τότε το μάθημα βαθμολογείται από τρίτο βαθμολογητή. Να γραφεί πρόγραμμα που να ζητάει δύο βαθμολογίες από το χρήστη και στην περίπτωση που αυτές δεν διαφέρουν περισσότερο από 4 μονάδες να επιστρέφει ως τελική βαθμολογία του μαθήματος το μέσο όρο αυτών των δύο βαθμολογιών. Σε περίπτωση που η διαφορά των δύο βαθμολογιών είναι μεγαλύτερη από 4 μονάδες, να ζητείται τρίτη βαθμολόγηση και να επιστρέφεται αυτή ως τελικός βαθμός του μαθήματος.

5. Δημιουργήστε ένα πρόγραμμα το οποίο θα ζητά από τον χρήστη τρεις ακέραιους αριθμούς και θα ελέγχει και θα εμφανίζει αν υπάρχει κάποιο ζευγάρι ακεραίων που το γινόμενο τους είναι ίσο με τον τρίτο αριθμό. Αν δεν υπάρχει τέτοιο ζευγάρι, θα εμφανίζεται το μήνυμα “Den yparxei tetoio zevgari”.

6. Να γραφεί πρόγραμμα που να ζητάει 2 ακέραιους αριθμούς και να επιστρέφει το μεγαλύτερο από αυτούς. Σε περίπτωση που οι αριθμοί είναι ίσοι να επιστρέφεται ανάλογο μήνυμα.

7. Να γραφεί πρόγραμμα που να ζητά από το χρήστη το βάρος του σε κιλά και το ύψος του σε μέτρα και να υπολογίζει το Δείκτη Μάζας Σώματος (ΔΜΣ) σύμφωνα με τον τύπο: BMI = βάρος/(ύψος*ύψος). Το πρόγραμμα να τυπώνει το βάρος και το ύψος που δόθηκαν, καθώς και τον ΔΜΣ που υπολογίστηκε. Επίσης ανάλογα με το αποτέλεσμα του ΒΜΙ να εμφανίζεται ο αντίστοιχος χαρακτηρισμός, σύμφωνα με τα παρακάτω: BMI<=18.5 Ελλιποβαρής, 18.5<BMI<=25 Κανονικό Βάρος, 25<BMI<=30 Υπέρβαρος, BMI>30 Παχύσαρκος.

8. Να γραφεί πρόγραμμα που να δέχεται ως είσοδο ένα έτος (ακέραιος αρθμός) και να εμφανίζει στην έξοδο άν το έτος είναι "Δίσεκτο" ή "Κανονικό". Δίσεκτα είναι τα έτη που διαιρούνται ακριβώς με το 4. Όμως τα έτη που διαιρούνται ακριβώς με το 100 δεν είναι δίσεκτα εκτός και αν διαιρούνται ακριβώς και με το 400.<br />
Λύση (C/selection/disekto.c)

9. Να γραφεί πρόγραμμα που να ζητάει από το χρήστη 2 αριθμούς και έναν χαρακτήρα από τους '+', '-', '*', 'x' και '/'. <br />
   Αν ο χαρακτήρας είναι ο '+' να υπολογίζει και να εμφανίζει το άθροισμα των δύο αριθμών. <br />
   Αν ο χαρακτήρας είναι ο '-' να υπολογίζει και να εμφανίζει τη διαφορά των δύο αριθμών. <br />
   Αν ο χαρακτήρας είναι ο '*' ή ο 'x' να υπολογίζει και να εμφανίζει το γινόμενο των δύο αριθμών. <br />
   Αν ο χαρακτήρας είναι ο '/' να υπολογίζει και να εμφανίζει το πηλίκο (δεκαδικός αριθμός) των δύο αριθμών. <br />
   Σε κάθε άλλη περίπτωση χαρακτήρα να εμφανίζει μήνυμα λάθους στο χρήστη.<br />
   Πχ Είσοδος: Δώστε την πράξη που θέλετε: 6x5 <br />
   Έξοδος 6x5=30 <br />
   Λύση (C/selection/sw1.c)

Δομές επανάληψης (for, while-do, do-while)

10. Να γραφεί πρόγραμμα όπου να ζητάει από το χρήστη δύο ακεραίους αριθμούς, να ελέγχει έαν ο ένας είναι ίσος με το τετράγωνο του άλλου και να τυπώνει ανάλογο μήνυμα. Η διαδικασία να επαναλαμβάνεται, ζητώντας ζεύγη αριθμών, μέχρι ο χρήστη να δόσει 0 και για τους δύο αριθμούς.

11. Να γραφεί πρόγραμμα που να τυπώνει όλους του ακεραίους από το 1 έως το 9 μαζί με τα τετράγωνά τους. Πχ 9 * 9 = 81. Υλοποιήστε το πρόγραμμα με διάφορες δομές επανάληψης.

12. Να γραφεί πρόγραμμα που να ζητάει από το χρήστη 3 φορές να μαντέψει έναν αριθμό από το 1-10. Αν ο χρήστης βρει τον αριθμό μέσα στις 3 προσπάθειες να εμφανίζεται κατάλληλο μήνυμα.

     

