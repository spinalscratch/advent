int verificazerieuni()
{
	for (i = 0; i < 1000 && line=!NULL; i++)
	{
		if line.at(posizione) - 48 == 0
			zeri++;
		else if line.at(posizione) - 48 == 1
			uni++;
	}

	if zeri > uni
	{
		zeri = 0;
		uni = 0;
		return 0;
	}
	else if uni > zeri
	{
		zeri = 0;
	    uni = 0;
		return 1;
	}
}

int main()
{
	int uni{};
	int zeri{};
	string line;


}