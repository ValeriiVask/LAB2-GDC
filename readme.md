# GCD

Calculating of the greatest common divisor of two numbers using two methods:

* by subtraction - function `GCD_substraction`,
* by dividing modulo - function `GCD_modulo`.

The solution consist of three projects:
* _GCDLib_ - library containing: `GCD_substraction`, `GCD_modulo` functions,
* _GCDUnitTest_ - unit test for: `GCD_substraction`, `GCD_modulo` functions,
* _GCDApp_ - sample aplication calling: `GCD_substraction`, `GCD_modulo` functions.

## Tasks
Implement the `GCD_modulo` function that compute GCD using dividing modulo operation.
Check corectness of computation using unit tests.
Measure and compare `GCD_substraction`, `GCD_modulo` functions execution time for number:

* Implement the function `GCD_modulo` which computes the GCD using
 a modulo division operation.
* Check the correctness of calculations - using unit tests.
* Measure and compare the execution time of the function:
 `GCD_substraction`,` GCD_modulo` for the given numbers:
  * 10<sup>3</sup> and 3,
  * 10<sup>6</sup> and 3,
  * 10<sup>10</sup> and 3.
	* 
	* 
	* 
Test Results
For numbers 
10^3 and 3:

GCD_substraction took 5700 nanoseconds.
GCD_modulo took 100 nanoseconds.
For numbers 
10^6 and 3:

GCD_substraction took 67210 nanoseconds.
GCD_modulo took 0 nanoseconds (almost instant).
For numbers 
10^10 and 3:

GCD_substraction took 5222483790 nanoseconds.
GCD_modulo took 100 nanoseconds.

Analysis
GCD_substraction: This method shows significantly slower performance, especially when processing larger numbers. As the input numbers grow, the execution time increases substantially.
GCD_modulo: This method demonstrates high efficiency, consistently showing negligible execution time, even for large numbers.
Conclusion
The results indicate that the Modulo Method (GCD_modulo) is much more efficient for calculating the GCD, especially for larger inputs. It completes the calculation in a fraction of the time compared to the Subtraction Method, which makes GCD_modulo the recommended approach for GCD calculation.

#   L A B 2 - G D C  
 #   L A B 2 - G D C  
 