int is_power(unsigned int n)
{
	return (n > 0 && !(n & (n - 1)));
}
