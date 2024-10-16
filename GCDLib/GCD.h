template<typename T>
T GCD_subtraction(T a, T b)
{
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}

template<typename T>
T GCD_modulo(T a, T b)
{
	//Implement the GCD_modulo function that compute GCD using dividing modulo operation
	
	return 0;
}