#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define COSTOBIGL 7

int main() {
  float pensbigl, disocbigl, studbigl, costoscont;
  costoscont = COSTOBIGL;
  float costoPens, costoStud, costoDisoc, costoLavor, costoPerPens, costoPerStud, costoPerDisoc, costoPerLavor, totale;
  int persone, checkN, checkD, nLavoratori, nDisoccupati, nStudenti, nPensionati, giorno;
  persone = 10;
  checkN = 1;
  checkD = 1;
  nStudenti = 0;
  nPensionati = 0;
  nLavoratori = 0;
  nDisoccupati = 0;
  cout << "Benvenuto in FastCalc" << endl << endl;
  while (checkN <= 4 && persone > 0) {
    switch (checkN) {
      case 1:
      cout << "Inserisci il numero di lavoratori (Inserisci 0 se non presenti) (" << persone << " Persone da poter essere aggiunte alla comitiva)" << endl;
      cin >> nLavoratori;
      if (nLavoratori >= 0 && nLavoratori <= persone) {
        persone = persone - nLavoratori;
        checkN++;
        break;
      } else {
        break;
      };
      case 2:
      cout << "Inserisci il numero di disoccupati (Inserisci 0 se non presenti) (" << persone << " Persone da poter essere aggiunte alla comitiva)" << endl;
      cin >> nDisoccupati;
      if (nDisoccupati >= 0 && nDisoccupati <= persone) {
        persone = persone - nDisoccupati;
        checkN++;
        break;
      } else {
        break;
      };
      persone = persone - nDisoccupati;
      checkN++;
      break;
      case 3:
      cout << "Inserisci il numero di Studenti (Inserisci 0 se non presenti) (" << persone << " Persone da poter essere aggiunte alla comitiva)" << endl;
      cin >> nStudenti;
      if (nStudenti >= 0 && nStudenti <= persone) {
        persone = persone - nStudenti;
        checkN++;
        break;
      } else {
        break;
      };
      persone = persone - nStudenti;
      checkN++;
      break;
      case 4:
      cout << "Inserisci il numero di Pensionati (Inserisci 0 se non presenti) (" << persone << " Persone da poter essere aggiunte alla comitiva)" << endl;
      cin >> nPensionati;
      if (nPensionati >= 0 && nPensionati <= persone) {
        persone = persone - nPensionati;
        checkN++;
        break;
      } else {
        break;
      };
      persone = persone - nPensionati;
      checkN++;
      break;
    }
    if (persone == 10 && checkN == 5) {
      cout << endl << "Errore 404: Comitiva not found. Riprova (Una comitiva e' un gruppo di 3 o piu' persone)" << endl << endl;
      nPensionati = 0;
      nLavoratori = 0;
      nStudenti = 0;
      nDisoccupati = 0;
      checkN = 1;
    } else if (persone == 8 && checkN == 5) {
      cout << endl << "Che bella coppia, ma questo programma e' progettato per le comitive. Riprova" << endl << "(Una comitiva e' un gruppo di 3 o piu' persone)" << endl << endl;
      nPensionati = 0;
      nLavoratori = 0;
      nStudenti = 0;
      nDisoccupati = 0;
      persone = 10;
      checkN = 1;
    } else if (persone == 9 && checkN == 5){
      cout << endl << "E' vero che chi fa da se fa per tre, ma questo programma e' progettato per le comitive. Riprova "<< endl <<"(Una comitiva e' un gruppo di 3 o piu' persone)" << endl << endl;
      nPensionati = 0;
      nLavoratori = 0;
      nStudenti = 0;
      nDisoccupati = 0;
      persone = 10;
      checkN = 1;
    };
  };
  while (checkD == 1) {
    cout << "Che giorno e' oggi?" << endl;
    cout << "1. Lunedi" << endl << "2. Martedi" << endl << "3. Mercoledi" << endl << "4. Giovedi" << endl << "5. Venerdi" << endl << "6. Sabato" << endl << "7. Domenica" << endl;
    cin >> giorno;
    cout << endl;
    switch (giorno) {
      case 3:
      costoscont = costoscont * 0.8;
      checkD++;
      break;
      case 7:
      costoscont = costoscont * 1.3;
      checkD++;
      break;
      default:
      //Non sono applicati sconti.
      if (giorno == 1 || giorno == 2 || giorno == 4 || giorno == 5 || giorno == 6) {
        checkD++;
        break;
      } else {
        break;
      }
    }
  };
    pensbigl = costoscont * 0.9;
    disocbigl = costoscont * 0.8;
    studbigl = costoscont * 0.75;
    costoPens = pensbigl * nPensionati;
    costoStud = studbigl * nStudenti;
    costoDisoc = disocbigl * nDisoccupati;
    costoLavor = costoscont * nLavoratori;
    if (nPensionati != 0) {
      costoPerPens = costoPens / nPensionati;
    };
    if (nStudenti != 0) {
      costoPerStud = costoStud / nStudenti;
    };
    if (nDisoccupati != 0) {
      costoPerDisoc = costoDisoc / nDisoccupati;
    };
    if (nLavoratori != 0) {
      costoPerLavor = costoLavor / nLavoratori;
    };

    totale = costoPens + costoStud + costoDisoc + costoLavor;
    cout << endl;

    cout << "----------------------------------------------------------" << endl;
    cout << "                                     " << endl << "                          _______________________" << endl << "                         ( _____________________ ()" << endl << "                       _.-'|                    ||" << endl << "                   _.-'   ||        IL          ||" << endl << "  ______       _.-'       ||                    ||" << endl << " |      |_ _.-'           ||       RIVALE       ||" << endl << " |      |_|_              ||                    ||" << endl << " |______|   `-._          ||       DELLO        ||" << endl << "    /\\          `-._      ||                    ||" << endl << "   /  \\             `-._ ||    SHOWVILLE      ||" << endl << "  /    \\                `-.||____________________||" << endl << " /      \\                 ------------------------" << endl << "/________\\___________________/________________\\______" << endl;
    cout << endl << "      Via Caduti del Lavoro, 5, 70126 Bari BA" << endl;
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << endl;
    if (nLavoratori > 0) {
    cout << "    "<< nLavoratori << " biglietti a prezzo pieno                  " << costoLavor << " euro" << endl;
    cout << "       Prezzo biglietto singolo                   " << costoPerLavor << " euro" << endl;
    };
    if (nDisoccupati > 0) {
      cout << endl << "    "<< nDisoccupati << " biglietti per disoccupati                 " << costoDisoc << " euro" << endl;
      cout << "       Prezzo biglietto singolo                   " << costoPerDisoc << " euro" << endl;
    };
    if (nStudenti > 0) {
      cout << endl << "    "<< nStudenti << " biglietti per studenti                    " << costoStud << " euro" << endl;
      cout << "       Prezzo biglietto singolo                   " << costoPerStud << " euro" << endl;
    };
    if (nPensionati > 0) {
      cout << endl << "    "<< nPensionati << " biglietti per pensionati                  " << costoPens << " euro" << endl;
      cout << "       Prezzo biglietto singolo                   " << costoPerPens << " euro" << endl;
    };
    switch (giorno) {
      case 3:
      cout << endl << endl << "    Sconti applicati                            -20% " << endl;
      break;
      case 7:
      cout << endl << endl << "    Variazioni di prezzo                        +30% " << endl;
      break;
      default:
      break;
    };
    cout << endl << "    Totale                              " << totale << " euro" << endl;
    cout << "----------------------------------------------------------" << endl;
    system("pause");
  };
