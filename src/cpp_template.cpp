#include <string>
#include <iostream>
#include <stdexcept>
#include <thread>
#include <vector>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "define_macros_test.h"
#include "structures.h"
#include "variables.h"

#include "time_functions.h"
#include "cpp_template_test.h"
#include "cpp_template.h"

/*
-----------------------------------------------------------------------------------------------------------
Global Variables
-----------------------------------------------------------------------------------------------------------
*/

// Parameters
unsigned int totalThreads;
bool productionSettings;


/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: setParameters
Description: Sets the parameters
Parameters:
  parametersCount - The parameter count
  parameters - The parameters
-----------------------------------------------------------------------------------------------------------
*/

void setParameters(int parametersCount, char* parameters[])
{
  try
  {  
    // Variables
    std::vector<std::string> settings = {parameters+1, parameters+parametersCount};

    // Set the default parameter settings
    productionSettings = true;
    totalThreads = std::thread::hardware_concurrency();
  
    // Loop through all the parameters and get the settings
    for (std::string &data : settings)
    {
      if (data == "--parameters")
      {
        std::cout << INVALID_PARAMETERS_ERROR_MESSAGE;
      }
      else if (data == "--threads")
      {
        totalThreads = std::stoul(*(&data + 1));
      }
      else if (data == "--test")
      {
        productionSettings = false;
        test();
        exit(0);
      }
    }
  }
  HANDLEEXCEPTION;
  return;
}



/*
-----------------------------------------------------------------------------------------------------------
Name: printSettings
Description: Prints the settings
-----------------------------------------------------------------------------------------------------------
*/

void printSettings(void)
{
  // print the title
  std::cout << COLOR_PRINT_YELLOW << TEST_OUTLINE << std::endl << "Starting " PROGRAM_VERSION << std::endl << currentTime() << std::endl << std::endl << "SETTINGS" << std::endl << "Port: " << PROGRAM_PORT << std::endl << "Threads: " << totalThreads << std::endl << TEST_OUTLINE << std::endl << COLOR_PRINT_END;

  return;
}

/*
-----------------------------------------------------------------------------------------------------------
Name: start_timer_threads
Description: Starts the timer threads
-----------------------------------------------------------------------------------------------------------
*/

void start_timer_threads(void)
{
  return;
}



/*
-----------------------------------------------------------------------------------------------------------
Name: main
Description: The start point of the program
Parameters:
  parametersCount - The parameter count
  parameters - The parameters
Return: 0 if successfull
-----------------------------------------------------------------------------------------------------------
*/

int main(int parametersCount, char* parameters[])
{
  // initialize the random seed
  srand(time(NULL));

  // set the numbers to fixed instead of scientific notation
  std::cout << std::fixed;

  // set the parameters
  setParameters(parametersCount,parameters);

  // print the settings
  printSettings();

  

  return 0;
}