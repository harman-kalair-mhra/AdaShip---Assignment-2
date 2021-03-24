# ADASHIP - Assignment 2

By Harman Kalair

Here is the link to access the Live version [Replit.](https://replit.com/join/yzdwxumd-harmankalair123) 


AdaShip is a clone of the classic ‘Battleship’ game – as a default, AdaShip is a two-player, turn based game of sea warfare. You and an opponent each place a number of ships on your own board, and you then alternate turns "firing" torpedoes at each other’s ships. The game is won when one player has destroyed/sunk all of the other player’s ships.

# Table of Contents

- [1. Challenge Outline](#1-challenge-outline)
- [1.1. Summary](#-11-summary)
- [1.2. Features](#-12-implemented-features)
    + [1.2.1. One player v computer](#-121-one-player-v-computer)
    + [1.2.2. Two player game](#-122-two-player-game)
- [1.3. UML Diagram](#-13-uml-diagram)
- [1.4. Initial working plan, overall approach, development strategy and approach to quality](#-14-overall-workplan-strategy)
- [1.5. Ideas and Development Plan](#-15-ideas-and-development-plan)
- [1.6. Evaluation](#-16-evaluation)

## 1. Challenge Outline

### 1.1. Summary

AdaShip is a clone of the classic ‘Battleship’ game – as a default, AdaShip is a two-player, turn based game of sea warfare. The object of AdaShip is to try and sink all of the other player's boats before the opponent sinks all your ships. All of the opponent’s ships are somewhere placed on their board.  You try and hit them by calling out the coordinates of one of the squares on the board.  The opponent also tries to hit your ships by calling out coordinates. The board will record ‘hit’ or ‘miss’, if either player makes contact with the positions of the boats. Neither you nor the opponent can see the other's player’s board or their placed ships, therefore you must try to guess where their ships has been placed and attack accordingly. The game ends when one player wins by sinking all of their opponent’s boats.

### 1.2. Features

Main Menu:

This is a screenshot of the Main Menu. Player can select different game modes or Quit.

![main menu](https://user-images.githubusercontent.com/56550789/112194449-c51f8d00-8c00-11eb-9500-f0cf3f3e3208.PNG)
-

Incorrect Choice:

This is a screenshot of Incorrect Choice. When player enters invalid choice, a message will appear and try again.

![incorrect](https://user-images.githubusercontent.com/56550789/112209003-e5574800-8c10-11eb-81e4-3c30bcdf0075.PNG)
-

Config File:

This is a screenshot of the config file.

![configini](https://user-images.githubusercontent.com/56550789/112200505-35c9a800-8c07-11eb-9c13-6d5afa90617f.PNG)
-
#### 1.2.1. One player v computer
Autoplace:

This is screenshot of Auto placement of the ships, when option 1 is selected. When game mode 1 is selected (One player v computer game), you are given a choice to auto place ships or manual place. Below shows the auto placement of the ships.

![auto place](https://user-images.githubusercontent.com/56550789/112195294-b2f21e80-8c01-11eb-9878-3c2ab7710e6d.PNG)
-

Manual Placement:

This is screenshot of Manual placement of the ships, when option 2 is selected. When game mode 1 is selected (One player v computer game), you are given a choice to auto place ships or manual place. Below shows the manual placement of the ships.

![manual place](https://user-images.githubusercontent.com/56550789/112196259-c0f46f00-8c02-11eb-80d4-3a5e715ea48d.PNG)
-

Quit and Reset:

This is a screenshot of quit and reset. Allows the player to enter the coordinates to continue playing or quit the game by typing 'quit'. Also, allows the player to reset their board, using the 'reset' funtionality.

![reset and quit](https://user-images.githubusercontent.com/56550789/112198637-3b25f300-8c05-11eb-8aa8-c05c09133a93.PNG)
-

Count Total Hits and Miss:

This is a screenshot of Total hits and miss. Keeps track of your total hits and misses. This includes on your target board, as well as a seperate hit and miss count variables.

![total count](https://user-images.githubusercontent.com/56550789/112199557-3150bf80-8c06-11eb-857e-84b807b7aa85.PNG)
-

#### 1.2.2. Two player game

Customised configuration settings:

This is a screenshot of Customised configuration settings. The board is fully customisable, as shown value has been set to 20x25. The program has generated a 20x25 board. 

![20x25](https://user-images.githubusercontent.com/56550789/112201291-ffd8f380-8c07-11eb-8bc4-970fcf82c4f9.PNG)
-

Autoplace:

This is screenshot of Auto placement of the ships, when option 1 is selected. When game mode 2 is selected (Two player game), you are given a choice to auto place ships or manual place. Below shows the auto placement of the ships for Player 1.

![autoplace 2](https://user-images.githubusercontent.com/56550789/112202345-3105f380-8c09-11eb-8ee2-e9c52d3067b7.PNG)
-
Manual Placement:

This is screenshot of Manual placement of the ships, when option 2 is selected. When game mode 2 is selected (Two player game), you are given a choice to auto place ships or manual place. Below shows the manual placement of the ships for Player 1.

![manual place 2](https://user-images.githubusercontent.com/56550789/112209975-02d8e180-8c12-11eb-9cd7-82043d32a19a.PNG)
-

Quit and Reset:

This is a screenshot of quit and reset. Allows the player to enter the coordinates to continue playing or quit the game by typing 'quit'. Also, allows the player to reset their board, using the 'reset' funtionality. This feature is for both Players. Below shows Player 1's options.

![quit and reset](https://user-images.githubusercontent.com/56550789/112210332-77ac1b80-8c12-11eb-9408-bd37824437d6.PNG)
-

Count Total Hits and Miss:

This is a screenshot of Total hits and miss. Keeps track of your total hits and misses. This includes on your target board, as well as a seperate hit and miss count variables. This feature is for both Players. Below shows Hits and Misses for Player 1.

![hits and miss 2](https://user-images.githubusercontent.com/56550789/112210926-31a38780-8c13-11eb-8805-3b4263f64cfc.PNG)
-


### 1.3. UML Diagram

Below is an example of Class based UML. This Diagram shows, how created classes interact with each other. These interactions are shown by using 1 to 1 relationships. The + and - symbols before an attribute and operation name in a class denote the visibility of the attribute and operation.

![uml](https://user-images.githubusercontent.com/56550789/112189749-37da3980-8bfc-11eb-9ece-0dfbdf4ee9d7.png)
-

### 1.4. Initial working plan, overall approach, development strategy and approach to quality

My initial approach is iterative, as progress is easily measured. Since, project or program has many components, therefore measuring the progress is essential, in-order to meet the requirements to the full extent. Also, using iterative approach makes testing easier, as testing is facilitated by the modules being relatively small.

In- order to analyse the problem to a full extent, I carried out extensive amount of research from different resources. For example, I used stack overflow, w3 schools and even created multiple flow diagrams to visualise problem in more detail. 

The purpose of these flow diagrams was to provide a detailed representation of the system components. These flow diagrams are easier to understand by technical and non-technical audiences. Therefore, this had a great impact on my development strategy, as I no longer needed to begin developing as one big program but start small and work my way up. Below are the Solution Flow Diagrams, I came up with before the development phase of ‘AdaShip’.


#### Player VS Computer - Flow Diagram:

This flow diagram is an example of how ‘Player vs Computer’ will flow in this AdaShip game. This will begin by the player placing their ships. If all ships are placed the program will continue and give the Computer a chance to place their Ships, which is done randomly. However, if all ships are NOT placed, this will keep looping, until both Player’s and Computer’s ships are placed. Game code starts. If Player’s turn, they will enter ‘Coordinates to Attack’, if Computer’s turn Coordinates are generated automatically. If it’s a ‘HIT’ and ‘All Ships are sunk?’, winner will be displayed and the program will end. However, if ‘Player’ or the ‘Computer’ has not ‘HIT’ any target, this will loop back to switching turns and entering coordinates. If the ‘Player’ did hit but not all ships are sunk, this will also loop back to the ‘Turn’ and ‘Entering coordinates’.

![player vs computer](https://user-images.githubusercontent.com/56550789/112156767-782abf00-8bde-11eb-9db1-d4878115169e.png)
-

#### Player VS Player - Flow Diagram:

This flow diagram is an example of how ‘Player vs Player will flow in this AdaShip game. This diagram is very similar to ‘Player vs Computer’. This will begin by the player placing their ships. If all ships are placed the program will continue and give the Player 2 a chance to place their Ships. However, if all ships are NOT placed, this will keep looping, until both Player 1 and Player 2 ships are placed. Game code starts. If Player 1 or Player 2’s turn, they will enter ‘Coordinates to Attack’. If it’s a ‘HIT’ and ‘All Ships are sunk?’, winner will be displayed and the program will end. However, if either has not ‘HIT’ any target, this will loop back to switching turns and entering coordinates. If the ‘Player’ did hit but not all ships are sunk, this will also loop back to the ‘Turn’ and ‘Entering coordinates’.

![player vs player](https://user-images.githubusercontent.com/56550789/112163442-f1c5ab80-8be4-11eb-8525-7e66cdf6a91d.png)
-

#### Config file - Flow Diagram:

This flow diagram is an example of how the data will be read from a config file. This data includes; size of the board, names of the board and size of the boats. The flow is as follows; begins to READ config.ini and if the config file exists, Menu will be displayed. However, if the program is unable to read the config or doesn’t exist, program will exit.

![config file](https://user-images.githubusercontent.com/56550789/112165400-9e545d00-8be6-11eb-89ac-f0623735ceb0.png)
-

#### Menu - Flow Diagram:

This flow diagram is an example of a Menu item, which will be displayed at the start of the program. The flow is as follows; the Player is shown menu items between 1 and 3. 1 is One player v computer, choice 2 is Two player game and 3 is to QUIT. If Player selects 1 or 2, game code will run. If Player selects 3, program will end. However, if the end user selects any other value, error message is displayed and looped back to Displaying menu until valid input has been entered.

![menu](https://user-images.githubusercontent.com/56550789/112168062-e2486180-8be8-11eb-9491-611b205c5796.png)
-

#### Coordinates Validation - Flow Diagram:

This flow diagram is an example of a validation phase, when coordinates are entered. The flow is as follows; Game code starts. If Player 1 or Player 2’s turn, they will enter ‘Coordinates to Attack’. Then the program will check, if entered coordinates are Valid. If entered coordinates are invalid, Player is taken back to the ‘Enter Coordinates’ screen to retry. This validation check will continue to loop until valid coordinates has been entered and then the program will continue to the next phase in the flow.

![coordinates](https://user-images.githubusercontent.com/56550789/112180575-94852680-8bf3-11eb-9904-a55d88f6fa30.png)
-

#### Hit or Miss - Flow Diagram:

This flow diagram is an example of how ‘Hit’ or ‘Miss’ will operate in this game program. The flow is as follows; Begins by Players placing their Ships. Player 1 will guess the position of the opponent’s ships. This will return ‘Hit’ or ‘Miss’. Then Player 2 guesses the position of the opponent’s ships. This will return ‘Hit’ or ‘Miss’.  This will keep looping, until there are NO remaining ships. Winner will be displayed and program will end.

![hit or miss](https://user-images.githubusercontent.com/56550789/112183072-cf885980-8bf5-11eb-86b5-d8056c8614e4.png)
-

#### Object-orientated Programming Consideration:

In my development, I decided to use the Object-orientated programming approach. Object-oriented programming is a programming paradigm that is completely based on objects. The reason for this choice is reusability. It means reusing some facilities rather than building it again and again. This is done with the use of a class. We can use it ‘n’ number of times as per our need. 

As shown in UML diagram, I have created numerous classes. There is a class for the ```Board```, this is where the board gets generated. Methods are called inside the class to generate rows and columns. Class ```Player``` has been created, this is where a function is used to fire coordinate on enemy board, which also includes a reset function that resets the player board.

Class ```Ship``` has also been created. The Ship class contains information on how many squares are remaining or have they been destroyed. ```main``` works as game controller, where all the header files are imported and called, this also includes the main menu of the game.


### 1.5. Ideas and Development Plan

Discovery phase essential for project which involves a process of scoping, collecting and analysing information about the program or project. It allows getting a well-rounded and in-depth understanding of the goals, scope, and limitations. Therefore, using resources such as; stack overflow, w3 school and other coding sites was crucial, as it gave me many ideas for the solution to the problem.

As mentioned previously, my chosen development strategy was agile or iterative. Perhaps the biggest advantage Agile development practices bring to development, in general is its emphasis on responding to change and focus on working on changes that matter when they matter. 

For example, I decided to list out some of the main requirements of the program and began developing algorithms and flow diagrams accordingly. By creating these flow diagrams and algorithms, gave me a head start and a logical view point of the program, thanks to the Agile approach.

### 1.6. Evaluation

In conclusion, I am pleased with the overall outcome of my program, as I aimed to complete all of the PASS and some MERIT requirements outlined in the project brief. For example, I was able to include a customizable board, meaning the player could play with using any board size. Due to the time constraints and lack of experience in OOP, I was unable to meet all merit and distinction requirements. Therefore, I believe I require more practice in using OOP and understanding each concept such as inheritance and polymorphism to the full extent. The planning phase was a great advantage, when it came to developing. Therefore, the usage of flow diagrams gave me a logical concept of the problem and all I was required to do was, put it into practice. If I were to do this project again, I would conduct more research on OOP and implement concepts such as inheritance and polymorphism to my program.