int NSD(int m, int n)
{
	while (m != n)
	{
		if (m > n)
		{
			m -= n;
		}
		else
		{
			n -= m;
		}
	}
	return m;
}