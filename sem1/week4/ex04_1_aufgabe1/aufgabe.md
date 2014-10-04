Exercise 04_1 (Punkte: 12)

Aufgabe 1:
Funktionen:
Implementieren Sie folgende Formeln als Funktionen, wobei a und b vom Typ double sind und b
zusätzlich als Konstante definiert wird:

o result = a + b
o result = b / a
o result = a % b (Vergessen Sie nicht auf int zu typecasten)
o result = a * a (Verwenden Sie die Funktion "Potenzieren" aus der <math.h> Library! – siehe auch Referenzkarte)
o Berücksichtigen Sie in der Funktion mit der Formel result = b / a, dass eine Division nur
  dann ausgeführt werden kann, wenn der Divisor ungleich Null ist!

Main-Funktion:
 Das Hauptprogramm liest mithilfe einer Schleifenkonstruktion genau 5x die Werte für a ein.
 Innerhalb dieser Schleifenkonstruktion werden die Werte für a erfasst und alle Funktionen
  aufgerufen. (Überlegen Sie, welche Schleifenkonstruktion Sie hier auswählen müssen.)
 Ein Zwischenspeichern der Werte von a ist daher nicht nötig.
 Die Variable b wird als lokale Konstante mit dem Wert 5 in der main-Funktion vereinbart.
 Jede Funktion soll mit einem beschreibenden Namen versehen werden.
 Jede Funktion gibt bei ihrem Aufruf die Berechnungsformel und das Ergebnis aus. Der
   Rückgabewert ist somit void.