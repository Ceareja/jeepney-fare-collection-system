# jeepney-fare-collection-system

During my first year of college, I had the opportunity to work on a fare collection system project. The project aimed to create a simple command-line application for managing fare calculations, transactions, and revenue reporting.

Here are the main features of the code:

*Class Definition: myClasses
  - This class encapsulates the main functionality of the fare collection system.
  - It contains member functions for various operations like managing the destination matrix, handling transactions, administering the system, and providing an introductory     menu.

*Destination Matrix (destinationMatrix Function)
  - Displays a list of destinations and their corresponding fares.
  - Allows the user to select a destination, input the number of passengers, and specify whether the passengers qualify for a discount (student/senior/PWD).
  - Calculates the total fare, applies discounts if applicable, and handles payment.
  - Keeps track of revenue and passenger counts based on the type of fare.

*Transaction Reporting (transactions Function)
  - Offers an administrative view to display total revenue and passenger statistics.
  - Calculates and displays both total discounted and regular revenue.
  - Calculates and displays the total number of discounted and regular passengers.
  - Provides an option to return to the main transaction menu.

*Admin Login (admin Function)
  - Prompts the user (presumably an admin) to enter a username and password.
  - If the credentials are correct, the admin gains access to the transaction reporting functionality.
  - If the credentials are incorrect, the admin is given the option to retry.

*Introductory Menu (intro Function)
  - Displays an initial menu with options for an admin user, regular user, or exiting the program.
  - The admin option leads to the admin login process.
  - The regular user option leads to the destination matrix for fare calculation.
  - The exit option provides the user with a choice to exit the program or return to the menu.

*Main Function (main Function)
  - Displays a welcome message.
  - Creates an instance of the myClasses class and uses it to access the introductory menu.
  - Acts as the entry point of the program.

*Global Variables
  - The program uses global variables to keep track of revenue and passenger counts for both regular and discounted fares.

*Input and Output Handling
  - The program utilizes standard input/output streams (cin and cout) to interact with the user.
  - It uses the system("CLS") function to clear the console screen for better readability.

Overall, the code represents a simple fare collection system with basic features for calculating fares, managing transactions, and providing an admin interface. Note that the code could be improved in terms of code organization, error handling, and security (especially with regard to storing passwords).
 
