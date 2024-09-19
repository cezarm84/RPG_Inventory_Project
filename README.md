# RPG_Inventory_Project
I detta projekt har jag skapat ett enkelt inventariesystem för ett rollspel (RPG) i C++. Målet har varit att använda objektorienterad programmering (OOP) med klasser, arv, polymorfism och rätt hantering av minne.

Klasser och Arv Jag har gjort en basklass som heter Item. Denna klass innehåller vanliga attribut som namn och vikt. Det finns också en virtuell funktion som heter use(), som är rent virtuell. Detta innebär att alla klasser som ärver från Item måste ha sin egen version av use().

Tre klasser ärver från Item:

Weapon: Hanterar vapen med egenskaper som skada och räckvidd. use() simulerar en attack.
Armor: Hanterar rustningar och har ett försvarsvärde. Här används use() för att ta på sig rustningen.
Potion: Hanterar drycker som kan läka och använder use() för att simulera att dricka drycken.
Polymorfism används genom att alla objekt av typen Item kan hanteras via pekare till basklassen, vilket gör att rätt use()-metod anropas beroende på vilken typ objektet har.

Minneshantering I programmet hanteras minne både på stacken och heapen:

Objekt skapas dynamiskt på heapen med new och sparas i spelarens inventarie (en std::vector<Item>*).
För att undvika minnesläckor frigörs alla objekt som skapas på heapen med delete i spelarens destruktor.
Detta uppfyller kravet på korrekt hantering av stack- och heapallokering.

Spelarklassen och Inventarie Jag har skapat en Player-klass som innehåller en lista över föremål, där varje föremål är ett pekare till ett Item-objekt. Spelaren kan:

Lägga till föremål i sitt inventarie.
Visa inventariet och se detaljer om varje föremål.
Använda föremål, vilket visar polymorfism eftersom rätt use()-funktion anropas beroende på föremålets typ.
Ta bort föremål, där minnet för det borttagna objektet frigörs.
