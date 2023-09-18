/**
 * swap_int - Function to swap the values of two integrs
 * @a: First integer provided
 * @b: Second integer provided
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
