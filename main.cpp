#include <iostream>
#include <time.h>
#include <Windows.h>
#undef max

using namespace std;

string cardName(int size) {
    switch (size) {
        case 6:
            return "6 ";
            break;
        case 7:
            return "7 ";
            break;
        case 8:
            return "8 ";
            break;
        case 9:
            return "9 ";
            break;
        case 10:
            return "10";
            break;
        case 11:
            return "J ";
            break;
        case 12:
            return "Q ";
            break;
        case 13:
            return "K ";
            break;
        case 14:
            return "A ";
            break;
    }
}

void printFirstCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << " ___________ ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << " ___________ ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << " ___________ ";
            break;
        case 3:
            cout << " ___________ ";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << " ___________ ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printSecondCardLine(int size, int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|" << cardName(size) << "__   __  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|" << cardName(size) << "   _     |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|" << cardName(size) << "  ___    |";
            break;
        case 3:
            cout << "|" << cardName(size) << "   _     |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|?  _____   |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printThirdCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "| /  \\_/  \\ |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|    / \\    |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|   /   \\   |";
            break;
        case 3:
            cout << "|    / \\    |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|  /     \\  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printFourthCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "||         ||";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|   /   \\   |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|  _\\   /_  |";
            break;
        case 3:
            cout << "|  _/   \\_  |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "| |      /  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printFifthCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "| \\       / |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|  /     \\  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "| /       \\ |";
            break;
        case 3:
            cout << "| /       \\ |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|       /   |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printSixthCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|  \\     /  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|  \\     /  |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "| \\__   __/ |";
            break;
        case 3:
            cout << "| \\___ ___/ |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|      /    |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printSeventhCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|   \\   /   |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|   \\   /   |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|    / \\    |";
            break;
        case 3:
            cout << "|    / \\    |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|     |     |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printEighthCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|    \\_/    |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|    \\_/    |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|   /___\\   |";
            break;
        case 3:
            cout << "|   /___\\   |";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|     =     |";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

void printNinethCardLine(int siut) {
    switch (siut) {
        case 0:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|___________|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 1:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            cout << "|___________|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            break;
        case 2:
            cout << "|___________|";
            break;
        case 3:
            cout << "|___________|";
            break;
        case 4:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            cout << "|___________|";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
            break;
    }
}

int** allCardsGeneration() {
    int ind = 0;
    int** allCards = new int* [2];
    allCards[0] = new int[35];
    allCards[1] = new int[35];
    for (int i = 6; i < 15; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != 12 || j != 2) {
                allCards[0][ind] = i;
                allCards[1][ind] = j;
                ind++;
            }
        }
    }
    return allCards;
}

int** colodeShufle(int** colode, int ColodeSize) {;
    int randomIndex;
    srand(time(0));
    for (int i = 0; i < ColodeSize; i++) {
        randomIndex = rand() % ColodeSize;
        swap(colode[0][i], colode[0][randomIndex]);
        swap(colode[1][i], colode[1][randomIndex]);
    }
    cout << endl;
    return colode;
}

void printPlayerColode(int** playerColode, int playerColodeSize) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout << "ВАШИ КАРТЫ: " << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    for (int i = 0; i < playerColodeSize; i++) {
        printFirstCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printSecondCardLine(playerColode[0][i], playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printThirdCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printFourthCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printFifthCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printSixthCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printSeventhCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printEighthCardLine(playerColode[1][i]);
    }
    cout << endl;
    for (int i = 0; i < playerColodeSize; i++) {
        printNinethCardLine(playerColode[1][i]);
    }
    cout << endl;
}

void printAIColode(int AIColodeSize) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout << "КОЛ-ВО КАРТ У ВАШЕГО СОПЕРНИКА: " << AIColodeSize << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    for (int i = 0; i < AIColodeSize; i++) {
        printFirstCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printSecondCardLine(0, 4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printThirdCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printFourthCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printFifthCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printSixthCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printSeventhCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printEighthCardLine(4);
    }
    cout << endl;
    for (int i = 0; i < AIColodeSize; i++) {
        printNinethCardLine(4);
    }
    cout << endl;
}

int getNewColodeLength(int** currentArray, int currentLength) {
    int counter = 0;
    int** extinctionMass = new int* [2];
    extinctionMass[0] = new int[currentLength];
    extinctionMass[1] = new int[currentLength];
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (currentArray[0][i] == currentArray[0][j] && !(currentArray[0][i] == 12 && currentArray[1][i] == 3 || currentArray[0][j] == 12 && currentArray[1][j] == 3)) {
                bool f = true;
                for (int k = 0; k < currentLength; k++) {
                    if (currentArray[0][i] == extinctionMass[0][k] && currentArray[1][i] == extinctionMass[1][k] || currentArray[0][j] == extinctionMass[0][k] && currentArray[1][i] == extinctionMass[1][k]) {
                        f = false;
                        break;
                    }
                }
                if (f) {
                    extinctionMass[0][counter] = currentArray[0][i];
                    extinctionMass[1][counter] = currentArray[1][i];
                    extinctionMass[0][counter + 1] = currentArray[0][j];
                    extinctionMass[1][counter + 1] = currentArray[1][j];
                    counter += 2;
                }
            }
        }
    }
    delete[] extinctionMass[0];
    delete[] extinctionMass[1];
    delete[] extinctionMass;
    return currentLength - counter;
}

int** discardingPairedCards(int** currentArray, int currentLength, int newLength) {
    bool f;
    int counter = 0;
    int** newColode = new int* [2];
    newColode[0] = new int[newLength];
    newColode[1] = new int[newLength];
    int** extinctionMass = new int* [2];
    extinctionMass[0] = new int[currentLength];
    extinctionMass[1] = new int[currentLength];
    int index = 0;
    for (int i = 0; i < currentLength; i++) {
        f = true;
        for (int j = i + 1; j < currentLength; j++) {
            if (i != j && currentArray[0][i] == currentArray[0][j] && !(currentArray[0][i] == 12 && currentArray[1][i] == 3 || currentArray[0][j] == 12 && currentArray[1][j] == 3)) {
                bool f1 = true;
                for (int k = 0; k < counter; k++) {
                    if (currentArray[0][i] == extinctionMass[0][k] && currentArray[1][i] == extinctionMass[1][k] || currentArray[0][j] == extinctionMass[0][k] && currentArray[1][i] == extinctionMass[1][k]) {
                        f1 = false;
                        break;
                    }
                }
                if (f1) {
                    extinctionMass[0][counter] = currentArray[0][i];
                    extinctionMass[1][counter] = currentArray[1][i];
                    extinctionMass[0][counter + 1] = currentArray[0][j];
                    extinctionMass[1][counter + 1] = currentArray[1][j];
                    counter += 2;
                    f = false;
                }
            }
        }
        if (f) {
            bool f1 = true;
            for (int k = 0; k < counter; k++) {
                if (currentArray[0][i] == extinctionMass[0][k] && currentArray[1][i] == extinctionMass[1][k]) {
                    f1 = false;
                    break;
                }
            }
            if (f1) {
                newColode[0][index] = currentArray[0][i];
                newColode[1][index] = currentArray[1][i];
                index++;
            }
        }
    }

    return newColode;
}

void ignoreLine() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getSelectedCardNumber(int maxNumber) {
    int x;
    while (true) {
        cin >> x;
        if (cin.fail()) {
            cin.clear();
            ignoreLine();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "Вы ввели некорректное чилсо! Попробуйте снова." << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }
        if (x > maxNumber || x < 1) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "Вы ввели некорректное чилсо! Попробуйте снова." << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }
        else {
            return x;
        }
    }
}

int getRandomSelectedCardNumber(int maxNumber) {
    int SelectedCard;
    if (maxNumber == 1) {
        return 1;
    }
    else {
        while (true) {
            srand(time(0));
            SelectedCard = rand() % maxNumber;
            if (SelectedCard != 0) {
                break;
            }
        }
        return SelectedCard;
    }
}

int** addSelectedCard(int** yourCurrentColode, int** openentCurrentColode, int selectedCard, int yourCurrentColodeLength) {
    int** newColode = new int* [2];
    newColode[0] = new int[yourCurrentColodeLength + 1];
    newColode[1] = new int[yourCurrentColodeLength + 1];
    for (int i = 0; i < yourCurrentColodeLength + 1; i++) {
        if (i != yourCurrentColodeLength) {
            newColode[0][i] = yourCurrentColode[0][i];
            newColode[1][i] = yourCurrentColode[1][i];
        }
        else {
            newColode[0][i] = openentCurrentColode[0][selectedCard - 1];
            newColode[1][i] = openentCurrentColode[1][selectedCard - 1];
        }
    }
    return newColode;
}

int** deleteSelectedCard(int** currentColode, int selectedCard, int currentColodeLength) {
    int k = 0;
    int** newColode = new int* [2];
    newColode[0] = new int[currentColodeLength - 1];
    newColode[1] = new int[currentColodeLength - 1];
    for (int i = 0; i < currentColodeLength; i++) {
        if (i != selectedCard - 1) {
            newColode[0][i - k] = currentColode[0][i];
            newColode[1][i - k] = currentColode[1][i];
        }
        else {
            k++;
        }
    }
    return newColode;
}

int main(){
    setlocale(LC_ALL, "Russian");
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout << "РАЗДАЧА КАРТ..." << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    int** colode = allCardsGeneration();
    colode = colodeShufle(colode, 35);
    int** playerColode = new int* [2];
    playerColode[0] = new int[17];
    playerColode[1] = new int[17];
    int** AIColode = new int* [2];
    AIColode[0] = new int[18];
    AIColode[1] = new int[18];
    int indP = 0;
    int indA = 0;
    for (int i = 0; i < 35; i++) {
        if (i % 2 == 1){
            playerColode[0][indP] = colode[0][i];
            playerColode[1][indP] = colode[1][i];
            indP++;
        }
        else {
            AIColode[0][indA] = colode[0][i];
            AIColode[1][indA] = colode[1][i];
            indA++;
        }
    }
    int playerColodeSize = 17;
    int AIColodeSize = 18;
    delete[] colode[0];
    delete[] colode[1];
    delete[] colode;
    cout << endl;
    printAIColode(AIColodeSize);
    printPlayerColode(playerColode, playerColodeSize);
    string selectionSymbol;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    cout << endl;
    cout << "ЧТОБЫ СБРОСИТЬ ПАРНЫЕ КАРТЫ ВВЕДИТЕ ЛЮБОЙ СИМВОЛ: " << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cin >> selectionSymbol;
    int newColodeLength;
    newColodeLength = getNewColodeLength(playerColode, playerColodeSize);
    playerColode = discardingPairedCards(playerColode, playerColodeSize, newColodeLength);
    playerColodeSize = newColodeLength;
    cout << endl;
    printPlayerColode(playerColode, playerColodeSize);
    cout << endl;
    newColodeLength = getNewColodeLength(AIColode, AIColodeSize);
    AIColode = discardingPairedCards(AIColode, AIColodeSize, newColodeLength);
    AIColodeSize = newColodeLength;
    printAIColode(AIColodeSize);
    int selectedCard;
    if (playerColodeSize > AIColodeSize) {
        while (true) {
            cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "СОПЕРНИК ВЫБИРАЕТ ВАШУ КАРТУ... " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << endl;
            selectedCard = getRandomSelectedCardNumber(playerColodeSize);
            Sleep(1000);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "СОПЕРНИК ВЫБИРАЛ ВАШУ " << selectedCard << " КАРТУ! " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << endl;
            Sleep(1000);
            AIColode = addSelectedCard(AIColode, playerColode, selectedCard, AIColodeSize);
            AIColodeSize++;
            playerColode = deleteSelectedCard(playerColode, selectedCard, playerColodeSize);
            playerColodeSize--;
            if (playerColodeSize == 0 || AIColodeSize == 0) {
                break;
            }
            newColodeLength = getNewColodeLength(AIColode, AIColodeSize);
            if (newColodeLength != AIColodeSize) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ВАШ СОПЕРНИК СБРОСИЛ ПАРНЫЕ КАРТЫ И ПЕРЕМЕШАЛ СВОЮ КОЛОДУ!" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                AIColode = discardingPairedCards(AIColode, AIColodeSize, newColodeLength);
                AIColodeSize = newColodeLength;
                AIColode = colodeShufle(AIColode, AIColodeSize);
                cout << endl;
            }
            if (playerColodeSize == 0 || AIColodeSize == 0) {
                break;
            }
            printAIColode(AIColodeSize);
            Sleep(1000);
            cout << endl;
            printPlayerColode(playerColode, playerColodeSize);
            Sleep(1000);
            cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "ВЫБЕРИТЕ КАРТУ, КОТОРУЮ ВЫ ХОТИТЕ ВЗЯТЬ У ВАШЕГО СОПЕРНИКА (ОТ 1 ДО " << AIColodeSize << "): " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            selectedCard = getSelectedCardNumber(AIColodeSize);
            playerColode = addSelectedCard(playerColode, AIColode, selectedCard, playerColodeSize);
            playerColodeSize++;
            AIColode = deleteSelectedCard(AIColode, selectedCard, AIColodeSize);
            AIColodeSize--;
            if (playerColodeSize == 0 || AIColodeSize == 0) {
                break;
            }
            cout << endl;
            printAIColode(AIColodeSize);
            Sleep(1000);
            cout << endl;
            printPlayerColode(playerColode, playerColodeSize);
            Sleep(1000);
            cout << endl;
            newColodeLength = getNewColodeLength(playerColode, playerColodeSize);
            if (newColodeLength != playerColodeSize) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ЧТОБЫ СБРОСИТЬ ПАРНЫЕ КАРТЫ ВВЕДИТЕ ЛЮБОЙ СИМВОЛ: " << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cin >> selectionSymbol;
                playerColode = discardingPairedCards(playerColode, playerColodeSize, newColodeLength);
                playerColodeSize = newColodeLength;
                cout << endl;
                printPlayerColode(playerColode, playerColodeSize);
            }
            if (playerColodeSize == 0 || AIColodeSize == 0) {
                break;
            }
            if (playerColodeSize != 1) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ЧТОБЫ ПЕРЕМЕШАТЬ ВАШУ КОЛОДУ ВВЕДИТЕ ЛЮБОЙ СИМВОЛ: " << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cin >> selectionSymbol;
                playerColode = colodeShufle(playerColode, playerColodeSize);
                cout << endl;
                printPlayerColode(playerColode, playerColodeSize);
            }
            Sleep(1000);
        }
    }
    else {
        while (playerColodeSize != 0 && AIColodeSize != 0) {
            cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "ВЫБЕРИТЕ КАРТУ, КОТОРУЮ ВЫ ХОТИТЕ ВЗЯТЬ У ВАШЕГО СОПЕРНИКА (ОТ 1 ДО " << AIColodeSize << "): " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            selectedCard = getSelectedCardNumber(AIColodeSize);
            playerColode = addSelectedCard(playerColode, AIColode, selectedCard, playerColodeSize);
            playerColodeSize++;
            AIColode = deleteSelectedCard(AIColode, selectedCard, AIColodeSize);
            AIColodeSize--;
            cout << endl;
            printAIColode(AIColodeSize);
            cout << endl;
            Sleep(1000);
            printPlayerColode(playerColode, playerColodeSize);
            newColodeLength = getNewColodeLength(playerColode, playerColodeSize);
            if (newColodeLength != playerColodeSize) {
                cout << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ЧТОБЫ СБРОСИТЬ ПАРНЫЕ КАРТЫ ВВЕДИТЕ ЛЮБОЙ СИМВОЛ: " << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cin >> selectionSymbol;
                playerColode = discardingPairedCards(playerColode, playerColodeSize, newColodeLength);
                playerColodeSize = newColodeLength;
                if (playerColodeSize == 0 || AIColodeSize == 0) {
                    break;
                }
                cout << endl;
                printPlayerColode(playerColode, playerColodeSize);
            }
            cout << endl;
            if (playerColodeSize != 1) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ЧТОБЫ ПЕРЕМЕШАТЬ ВАШУ КОЛОДУ ВВЕДИТЕ ЛЮБОЙ СИМВОЛ: " << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                cin >> selectionSymbol;
                playerColode = colodeShufle(playerColode, playerColodeSize);
                cout << endl;
                printPlayerColode(playerColode, playerColodeSize);
            }
            Sleep(1000);
            cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "СОПЕРНИК ВЫБИРАЕТ ВАШУ КАРТУ... " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            selectedCard = getRandomSelectedCardNumber(playerColodeSize);
            Sleep(1000);
            cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            cout << "СОПЕРНИК ВЫБИРАЛ ВАШУ " << selectedCard << " КАРТУ! " << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            AIColode = addSelectedCard(AIColode, playerColode, selectedCard, AIColodeSize);
            AIColodeSize++;
            playerColode = deleteSelectedCard(playerColode, selectedCard, playerColodeSize);
            playerColodeSize--;
            if (playerColodeSize == 0 || AIColodeSize == 0) {
                break;
            }
            Sleep(1000);
            newColodeLength = getNewColodeLength(AIColode, AIColodeSize);
            if (newColodeLength != AIColodeSize) {
                cout << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                cout << "ВАШ СОПЕРНИК СБРОСИЛ ПАРНЫЕ КАРТЫ И ПЕРЕМЕШАЛ СВОЮ КОЛОДУ!" << endl;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                AIColode = discardingPairedCards(AIColode, AIColodeSize, newColodeLength);
                AIColodeSize = newColodeLength;
                AIColode = colodeShufle(AIColode, AIColodeSize);
            }
            AIColode = colodeShufle(AIColode, AIColodeSize);
            cout << endl;
            printAIColode(AIColodeSize);
            cout << endl;
            Sleep(1000);
            printPlayerColode(playerColode, playerColodeSize);
        }
    }
    if (playerColodeSize == 0) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
        cout << "ВЫ ВЫИГРАЛИ!!!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
    else {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
        cout << "ВЫ ПРОИГРАЛИ!!!" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    }
}