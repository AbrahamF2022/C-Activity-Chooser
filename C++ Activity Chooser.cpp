#include <iostream>
using namespace std;

// Base class for choosing activities
class ActivityChooser {
public:
    int selection;

    void Welcome() {
        string name;

        cout << "-------------------------------------------------------------------" << endl;
        cout << "Enter Your Name: " << endl;
        cin >> name;
        cout << "Hello, " << name << " Welcome To The Choose What We Do Server" << endl;
        cout << "-------------------------------------------------------------------\n\n";
    }

    char GetLetter() {
        char response;
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cout << "If you choose to continue, please type 'y' to proceed. If not, click any other key: " << endl;
        cin >> response;
        cout << "--------------------------------------------------------------------------------------------\n\n" << endl;

        return response;
    }

    void Continue() {
        cout << "--------------------------------------------------------------------------------------------" << endl;
        cout << "Yay, you decided to continue!" << endl;
        cout << "--------------------------------------------------------------------------------------------\n\n" << endl;
    }

    int Menu() {
        cout << "\n\n------------------------------------------------------------------" << endl;
        cout << "So what are we feeling today?" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        cout << "1. Gaming" << endl;
        cout << "2. Eating" << endl;
        cout << "3. Adventurous" << endl;
        cout << "4. Exit" << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << "Enter the number of your selection: ";
        cin >> selection;

        if (selection == 1) {
            cout << "\n-------------------------------------------------------------------" << endl;
            cout << "You Selected Gaming";
            cout << "-------------------------------------------------------------------\n\n" << endl;
        }
        else if (selection == 2) {
            cout << "You Selected Eating\n\n\n";
        }
        else if (selection == 3) {
            cout << "You Selected Adventurous\n\n\n";
        }

        return selection;
    }
};

// Derived class for gaming-specific activities
class Gaming : public ActivityChooser {
public:
    int Gamer() {
        int selection;
        cout << "\n\n\nSelect what type of game you want to play" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "1. Type 1 to view PlayStation game selection" << endl;
        cout << "2. Type 2 to view phone/computer game selection" << endl;
        cout << "3. Type 3 to return back to menu" << endl;
        cout << endl << "Enter Selection: \n\n";
        cin >> selection;
        return selection;
    }

    int PSGame() {
        int selection;
        cout << "\n\nView The Following PlayStation Games Available" << endl;
        cout << "--------------------------------------------------------------" << endl;
        cout << "1. Minecraft" << endl;
        cout << "2. It Takes Two" << endl;
        cout << "3. Fortnite " << endl;
        cout << "4. Return To Game Menu" << endl;
        cout << "Enter Your Selection: \n\n";
        cin >> selection;

        return selection;
    }

    int PhoneGame() {
        int selection;
        cout << "\n\nView The Following Phone Games Available" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "1. Minecraft" << endl;
        cout << "2. Roblox" << endl;
        cout << "3. Message Game" << endl;
        cout << "Enter Your Selection: \n\n";
        cin >> selection;

        return selection;
    }
};

// Derived class for food-specific activities
class Food : public ActivityChooser {
public:
    int Eating() {
        int selection;
        cout << "\n\nInput the number of what type of food you feel like eating" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "1. Italian" << endl;
        cout << "2. Seafood" << endl;
        cout << "3. Asian" << endl;
        cout << "4. Return to menu" << endl;
        cout << "Enter selection: \n\n";
        cin >> selection;
        return selection;
    }
    void Italian() {

        cout << "\n\n--------------------------------------------" << endl;
        cout << "You Picked Italian! View Your Options Here";
        cout << "--------------------------------------------" << endl;

        cout << "1. Pizza Option: Text 12345" << endl;
        cout << "2. Mozarella Sticks Text 12345" << endl;
        cout << "3. Pasta Text 12345\n\n" << endl;
    }
    void Seafood() {

        cout << "\n\n--------------------------------------------" << endl;
        cout << "You Picked Seafood! View Your Options Here";
        cout << "--------------------------------------------" << endl;

        cout << "1. Salmon Burger Restaurant: Text 12345" << endl;
        cout << "2. Good Good Salmon: Text 12345" << endl;
        cout << "3. Other: 12345\n\n" << endl;

    }
    void Asian() {

        cout << "\n\n--------------------------------------------" << endl;
        cout << "You Picked Asian! View Your Options Here";
        cout << "--------------------------------------------" << endl;

        cout << "1. Thai Food: Text 12345" << endl;
        cout << "2. Ramen: Text 12345" << endl;
        cout << "3. Sushi: 12345\n\n" << endl;

    }
};

int Adventures() {
    int adventureoption;
    cout << "\n\n--------------------------------------------" << endl;
    cout << "Select From The Following Options: " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "1. Type 1 For Indoor Options" << endl;
    cout << "2. Type 2 For Outdoor Options" << endl;
    cout << "3. Type 3 To Return To Menu\n\n" << endl;
    cin >> adventureoption;

    return adventureoption;
}

int OutdoorAdventure() {

    int Outdoor;

    cout << "\n\n--------------------------------------------------" << endl;
    cout << "You Selected Outdoors. See the following options: " << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "1. Picnic" << endl;
    cout << "2. Beach" << endl;
    cout << "3. Kayaking" << endl;
    cout << "4. Nature Trail" << endl;
    cout << "5. Biking" << endl;
    cout << "6. Pool\n\n" << endl;
    cin >> Outdoor;

    return Outdoor;

}
int IndoorAdventure() {

    int Indoor;

    cout << "\n\n--------------------------------------------------" << endl;
    cout << "You Selected Indoors. See the following options: " << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "1. Painting" << endl;
    cout << "2. Movie/Show" << endl;
    cout << "3. Puzzle" << endl;
    cout << "4. Read Books\n\n" << endl;
    cin >> Indoor;

    return Indoor;
}

// Display functions for different activities
void Minecraft() {
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Y       Y   OOO   U     U        PPPP   IIIII  CCCCC  K   K  EEEEE  DDDD       M   M  IIIII  N   N  EEEEE  CCCCC  RRRR   AAAAA  FFFFF  TTTTTT !!" << endl;
    cout << " Y     Y   O   O  U     U        P   P    I   C     C K  K   E      D   D      MM MM    I    NN  N  E      C      R   R  A   A  F        T    !!" << endl;
    cout << "  Y   Y   O     O U     U        PPPP     I   C       KKK    EEEE   D   D      M M M    I    N N N  EEEE   C      RRRR   AAAAA  FFF      T    !!" << endl;
    cout << "   Y Y    O     O U     U        P        I   C     C K  K   E      D   D      M   M    I    N  NN  E      C      R  R   A   A  F        T     " << endl;
    cout << "    Y      OOOOO   UUUUU         P      IIIII  CCCCC  K   K  EEEEE  DDDD       M   M  IIIII  N   N  EEEEE  CCCCC  R   R  A   A  F        T    !!" << endl;
    cout << "Text Me The Confirmation Code 12345 to redeem" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
}

void ItTakesTwo() {
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Y       Y   OOO   U     U        PPPP   IIIII  CCCCC  K   K  EEEEE  DDDD       IIIII  TTTTTT      TTTTTT AAAAA  K   K  EEEEE  SSSSS      TTTTTT  W   W  OOO  !!" << endl;
    cout << " Y     Y   O   O  U     U        P   P    I   C     C K  K   E      D   D        I      T           T   A   A  K  K   E          S         T    W   W O   O !!" << endl;
    cout << "  Y   Y   O     O U     U        PPPP     I   C       KKK    EEEE   D   D        I      T           T   AAAAA  KKK    EEEE     SS          T    W W W O   O !!" << endl;
    cout << "   Y Y    O     O U     U        P        I   C     C K  K   E      D   D        I      T           T   A   A  K  K   E          S         T    WW WW O   O   " << endl;
    cout << "    Y      OOOOO   UUUUU         P      IIIII  CCCCC  K   K  EEEEE  DDDD       IIIII    T           T   A   A  K   K  EEEEE  SSSSS          T    W   W  OOO  !!" << endl;
    cout << "Text Me The Confirmation Code 12345 to redeem" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
}

void Fortnite() {
    cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
    cout << "Y       Y   OOO   U     U        PPPP   IIIII  CCCCC  K   K  EEEEE  DDDD       FFFFF  OOO  RRRR   TTTTTT N   N  IIIII TTTTTT EEEEE !!" << endl;
    cout << " Y     Y   O   O  U     U        P   P    I   C     C K  K   E      D   D      F     O   O R   R    T   NN  N    I     T   E      !!" << endl;
    cout << "  Y   Y   O     O U     U        PPPP     I   C       KKK    EEEE   D   D      FFF   O   O RRRR     T   N N N    I     T   EEEE   !!" << endl;
    cout << "   Y Y    O     O U     U        P        I   C     C K  K   E      D   D      F     O   O R  R     T   N  NN    I     T   E         " << endl;
    cout << "    Y      OOOOO   UUUUU         P      IIIII  CCCCC  K   K  EEEEE  DDDD       F      OOO  R   R    T   N   N  IIIII   T   EEEEE  !!" << endl;
    cout << "Text Me The Confirmation Code 12345 to redeem" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
}

int main() {
    ActivityChooser activityChooser;
    Gaming game;
    Food food;
    int activityChoice;
    int gameChoice;

    // Ask for the user's name and display welcome message
    activityChooser.Welcome();

    // Main loop
    while (true) {
        // Display the main menu and get user selection
        activityChoice = activityChooser.Menu();

        switch (activityChoice) {
        case 1: { // Gaming
            gameChoice = game.Gamer();
            if (gameChoice == 1) {
                int psGameChoice = game.PSGame();
                switch (psGameChoice) {
                case 1: Minecraft(); break;
                case 2: ItTakesTwo(); break;
                case 3: Fortnite(); break;
                case 4: break; // Return to game menu
                default: cout << "Invalid selection. Returning to Game Menu.\n"; break;
                }
            }
            else if (gameChoice == 2) {
                int phoneGameChoice = game.PhoneGame();
                switch (phoneGameChoice) {
                case 1: Minecraft(); break;
                case 2: cout << "You selected Roblox.\n"; break;
                case 3: cout << "You selected Message Game.\n"; break;
                default: cout << "Invalid selection. Returning to Game Menu.\n"; break;
                }
            }
            break;
        }
        case 2: { // Eating
            int foodChoice = food.Eating();
            switch (foodChoice) {
            case 1: food.Italian(); break;
            case 2: food.Seafood(); break;
            case 3: food.Asian(); break;
            case 4: break; // Return to menu
            default: cout << "Invalid selection. Returning to Main Menu.\n"; break;
            }
            break;
        }
        case 3: { // Adventures
            int adventureChoice = Adventures();
            if (adventureChoice == 1) {
                IndoorAdventure();
            }
            else if (adventureChoice == 2) {
                OutdoorAdventure();
            }
            break;
        }
        case 4: { // Exit
            cout << "Exiting... Goodbye!\n";
            return 0;
        }
        default: {
            cout << "Invalid selection. Please try again.\n";
            break;
        }
        }
    }

    return 0;
}
