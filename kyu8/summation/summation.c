#include <criterion/criterion.h>
#include <stddef.h>

int summation(int num) {
  int total = 0;
  
  for (int i = 1; i <= num; i++)
  {
    total += i; 
  }
  
  return total;
}

Test(BasicTests, ShouldPassAllTheTestsProvided) {
  cr_assert_eq(summation(1), 1);
  cr_assert_eq(summation(8), 36);
  cr_assert_eq(summation(100), 5050);
}
