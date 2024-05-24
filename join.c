#include "push_swap.h"

//ahora no lo estoy usando ¿quitar?
char	*ft_join(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		j;
	int		add_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	add_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = (char *)malloc(add_len * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
    s3[i++] = ' ';
	//esto ess igual que poner arriba s3[i] = ' '; y en la línea de abajo i++;
	//en este join se agrega esta línea para que separe el nodo al que le va haciendo join de los siguientes
	//esto es como en el gnl que al leer va guardando en s3 todo lo acumulado. 
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	//free(s1);
	return (s3);
}