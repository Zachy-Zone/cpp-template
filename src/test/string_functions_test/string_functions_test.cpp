#include <string>
#include <iostream>
#include <chrono>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "structures.h"
#include "define_macros_test.h"

#include "string_functions.h"

#include "variables_test.h"
#include "string_functions_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: string_functions_test
Return: The number of passed file_functions test
-----------------------------------------------------------------------------------------------------------
*/

int string_functions_test(void)
{
  // reset the global variables
  countTest = 0;

  // Define Macros

  // Variables
  std::string s;

  // write the start test message
  std::cout << std::endl << COLOR_PRINT_YELLOW << TEST_OUTLINE << std::endl << "string_functions_test - Total test: " << STRING_FUNCTIONS_TOTAL_TEST << std::endl << TEST_OUTLINE << std::endl << std::endl << COLOR_PRINT_END;

  // start the timer
  auto begin = std::chrono::high_resolution_clock::now();
  
  // run the test

  // get the timer data
  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin); 


  // write the end test message
  std::cout << COLOR_PRINT_YELLOW << std::endl << std::endl << TEST_OUTLINE << std::endl << "string_functions_test - Completed in: " << elapsed.count() * 1e-9 << " seconds, Passed test: " << countTest << ", Failed test: " << STRING_FUNCTIONS_TOTAL_TEST-countTest << std::endl << TEST_OUTLINE << std::endl << std::endl << std::endl << COLOR_PRINT_END;
  return countTest;
}