#include <string>
#include <iostream>
#include <chrono>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "structures.h"
#include "define_macros_test.h"

#include "time_functions.h"

#include "variables_test.h"
#include "time_functions_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: time_functions_test
Return: The number of passed file_functions test
-----------------------------------------------------------------------------------------------------------
*/

int time_functions_test(void)
{
  // reset the global variables
  countTest = 0;

  // Define Macros

  // Variables
  std::string s;

  // write the start test message
  std::cout << std::endl << COLOR_PRINT_YELLOW << TEST_OUTLINE << std::endl << "time_functions_test - Total test: " << TIME_FUNCTIONS_TOTAL_TEST << std::endl << TEST_OUTLINE << std::endl << std::endl << COLOR_PRINT_END;

  // start the timer
  auto begin = std::chrono::high_resolution_clock::now();

  // run the test

  // currentTime - string formated
  if (currentTime() != "")
  {
    std::cout << COLOR_PRINT_GREEN << "PASSED! currentTime - string formated" << COLOR_PRINT_END;
    countTest++;
  }
  else
  {
    std::cout << COLOR_PRINT_RED << "FAILED! currentTime - string formated" << COLOR_PRINT_END;
  }

  // get the timer data
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin); 


  // write the end test message
  std::cout << COLOR_PRINT_YELLOW << std::endl << std::endl << TEST_OUTLINE << std::endl << "time_functions_test - Completed in: " << elapsed.count() * 1e-9 << " seconds, Passed test: " << countTest << ", Failed test: " << TIME_FUNCTIONS_TOTAL_TEST-countTest << std::endl << TEST_OUTLINE << std::endl << std::endl << std::endl << COLOR_PRINT_END;
  return countTest;
}