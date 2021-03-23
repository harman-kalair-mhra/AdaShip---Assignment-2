# ADASHIP - Assignment 2

AdaShip is a clone of the classic ‘Battleship’ game – as a default, AdaShip is a two-player, turn based game of sea warfare. You and an opponent each place a number of ships on your own board, and you then alternate turns "firing" torpedoes at each other’s ships. The game is won when one player has destroyed/sunk all of the other player’s ships.

# Table of Contents

- [1. Challenge Outline](#1-challenge-outline)
- [1.1. Summary](#-11-summary)
- [1.2. Features](#-12-implemented-features)
    + [1.2.1. One player v computer](#-121-one-player-v-computer)
    + [1.2.2. Two player game](#-122-two-player-game)
- [1.3. UML Diagram](#-13-uml-diagram)
- [1.4. Flow Diagrams/Analysis](#-14-flow-diagram-analysis)
- [1.5. Ideas and Development Plan](#-15-ideas-and-development-plan)
- [1.6. Evaluation](#-16-evaluation)

## 1. Challenge Outline

### 1.1. Summary

AdaShip is a clone of the classic ‘Battleship’ game – as a default, AdaShip is a two-player, turn based game of sea warfare. The object of AdaShip is to try and sink all of the other player's boats before the opponent sinks all your ships. All of the opponent’s ships are somewhere placed on their board.  You try and hit them by calling out the coordinates of one of the squares on the board.  The opponent also tries to hit your ships by calling out coordinates. The board will record ‘hit’ or ‘miss’, if either player makes contact with the positions of the boats. Neither you nor the opponent can see the other's player’s board or their placed ships, therefore you must try to guess where their ships has been placed and attack accordingly. The game ends when one player wins by sinking all of their opponent’s boats

### 1.2. Features

#### 1.2.1. One player v computer
#### 1.2.2. Two player

### 1.3. UML Diagram
### 1.4. Flow Diagrams-Analysis

In- order to analyse the problem to a full extent, I carried out extensive amount of research from difference resources. For example, I used stack overflow, w3 schools and even created multiple flow diagrams. The purpose of these flow diagrams was to analyse and decompose the problem into smaller sections and build my program accordingly. Below are the Solution Flow Diagrams, I came up with before the development phase of ‘AdaShip’.

#### Player VS Computer - Flow Diagram:
![player vs computer](https://user-images.githubusercontent.com/56550789/112156767-782abf00-8bde-11eb-9db1-d4878115169e.png)


This flow diagram is an example of how ‘Player vs Computer’ will flow in this AdaShip game. This will begin by the player placing their ships. If all ships are placed the program will continue and give the Computer a chance to place their Ships, which is done randomly. However, if all ships are NOT placed, this will keep looping, until both Player’s and Computer’s ships are placed. Game code starts. If Player’s turn, they will enter ‘Coordinates to Attack’, if Computer’s turn Coordinates are generated automatically. If it’s a ‘HIT’ and ‘All Ships are sunk?’, winner will be displayed and the program will end. However, if ‘Player’ or the ‘Computer’ has not ‘HIT’ any target, this will loop back to switching turns and entering coordinates. If the ‘Player’ did hit but not all ships are sunk, this will also loop back to the ‘Turn’ and ‘Entering coordinates’.

#### Player VS Player - Flow Diagram:
![player vs player](https://user-images.githubusercontent.com/56550789/112163442-f1c5ab80-8be4-11eb-8525-7e66cdf6a91d.png)

This flow diagram is an example of how ‘Player vs Player will flow in this AdaShip game. This diagram is very similar to ‘Player vs Computer’. This will begin by the player placing their ships. If all ships are placed the program will continue and give the Player 2 a chance to place their Ships. However, if all ships are NOT placed, this will keep looping, until both Player 1 and Player 2 ships are placed. Game code starts. If Player 1 or Player 2’s turn, they will enter ‘Coordinates to Attack’. If it’s a ‘HIT’ and ‘All Ships are sunk?’, winner will be displayed and the program will end. However, if either has not ‘HIT’ any target, this will loop back to switching turns and entering coordinates. If the ‘Player’ did hit but not all ships are sunk, this will also loop back to the ‘Turn’ and ‘Entering coordinates’.

#### Config file - Flow Diagram:
![config file](https://user-images.githubusercontent.com/56550789/112165400-9e545d00-8be6-11eb-89ac-f0623735ceb0.png)

This flow diagram is an example of how the data will be read from a config file. This data includes; size of the board, names of the board and size of the boats. The flow is as follows; begins to READ config.ini and if the config file exists, Menu will be displayed. However, if the program is unable to read the config or doesn’t exist, program will exit.

#### Menu - Flow Diagram:
![menu](https://user-images.githubusercontent.com/56550789/112168062-e2486180-8be8-11eb-9491-611b205c5796.png)

This flow diagram is an example of a Menu item, which will be displayed at the start of the program. The flow is as follows; the Player is shown menu items between 1 and 3. 1 is One player v computer, choice 2 is Two player game and 3 is to QUIT. If Player selects 1 or 2, game code will run. If Player selects 3, program will end. However, if the end user selects any other value, error message is displayed and looped back to Displaying menu until valid input has been entered.

#### Coordinates Validation - Flow Diagram:
![coordinates](https://user-images.githubusercontent.com/56550789/112180575-94852680-8bf3-11eb-9904-a55d88f6fa30.png)

This flow diagram is an example of a validation phase, when coordinates are entered. The flow is as follows; Game code starts. If Player 1 or Player 2’s turn, they will enter ‘Coordinates to Attack’. Then the program will check, if entered coordinates are Valid. If entered coordinates are invalid, Player is taken back to the ‘Enter Coordinates’ screen to retry. This validation check will continue to loop until valid coordinates has been entered and then the program will continue to the next phase in the flow.

#### Hit or Miss - Flow Diagram

### 1.5. Ideas and Development Plan
### 1.6. Evaluation
