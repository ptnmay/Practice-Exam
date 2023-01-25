#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char s1[] = "abc";
	char s2[] = "edf";
	printf("%s\n", ft_strcpy(s1, s2));

}
