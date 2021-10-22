/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 23:35:54 by abaurens          #+#    #+#             */
/*   Updated: 2021/02/09 02:31:01 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/wait.h>
#include <bsd/string.h>
#include <stdbool.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#define TEST_FUNC(_func, _dst, _src, _result) {\
	int _pid, _status = -1;\
	const size_t _l = (!_dst ? 0 : sizeof(_dst));\
	\
	_result = -1;\
	bzero(_dst, _l);\
	if ((_pid = fork()) == 0) {\
		signal(11, sighandler);\
		/*printf("%10s(%s, %s, %zu)\n", #_func, #_dst, #_src, _l);*/\
		const size_t _res = _func(_dst, _src, _l);\
		/*printf("--> %zu  |  dest == '%s'\n", _res, _dst);*/\
		exit(0);\
	} else\
		waitpid(_pid, &_status, 0);\
	if (WEXITSTATUS(_status) != 42)\
		_result = _func(_dst, _src, _l);\
	/*else*/\
		/*printf("--> \e[31mSegmentation Fault !\e[0m\n");*/\
	/*printf("\n");*/\
}

#define TEST(_src, _size)\
{\
	char	_dst1[_size];	\
	char	_dst2[_size];	\
	ssize_t _c1, _c2;\
	bool	_error = false;\
	if (_size == 0) {\
		TEST_FUNC(strlcpy, NULL, _src, _c1);\
	} else {\
		TEST_FUNC(strlcpy, _dst1, _src, _c1);\
	}\
	if (_size == 0) {\
		TEST_FUNC(ft_strlcpy, NULL, _src, _c2);\
	} else {\
		TEST_FUNC(ft_strlcpy, _dst2, _src, _c2);\
	}\
	_error = (_c1 != _c2);\
	if (_error) {\
		if (_c1 == -1) printf("\e[31mReal strlcpy crashes but not yours !\e[0m\n");\
		else if (_c2 == -1) printf("\e[31mYour strlcpy crashes but not the std one !\e[0m\n");\
		else {\
			printf("\e[31mYour strlcpy doesn't return the right value\e[0m\n");\
			printf("Expected \e[32m%zd\e[0m but got \e[31m%zd\e[0m\n", _c1, _c2);\
		}\
	}\
	if (strcmp(_dst1, _dst2)) {\
		printf("\e[31mYour strlcpy is bad:\e[0m\n");\
		show_diff(_dst1, _dst2);\
		_error = true;\
	}\
	if (_error) printf("when calling \e[33mft_strlcpy(dst[%zu], %s, %zu)\e[0m\n", _size, #_src, _size);\
}

void	sighandler(int sig __attribute__((unused))) {
	exit(42);
}

void	show_diff(const char *str1, const char *str2)
{
	int	i;

	for (i = 0; str1[i] && str2[i] && str1[i] == str2[i]; ++i);
	printf(" real: '%.*s\e[32m%s\e[0m'\n", i, str1, str1 + i);
	printf("yours: '%.*s\e[31m%s\e[0m'\n", i, str2, str2 + i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	res;
	int		i;

	i = 0;
	res = strlen(src);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0;
	return (res);
}

int	main(int ac, char **av)
{
	TEST("", 0);	// strlcpy(NULL, "", 0)
	TEST(NULL, 0);	// strlcpy(NULL, NULL, 0)
	TEST(NULL, 10);	// strlcpy(char [10], NULL, 10)
	TEST("ABC", 0);	// strlcpy(NULL, "ABC", 0)

	TEST("", 1);	// strlcpy(char [1], "", 1)
	TEST("", 100);	// strlcpy(char [100], "", 100)

	TEST("ABC", 100);		// strlcpy(char [100], "ABC", 100)
	TEST("ABCDEF", 100);	// strlcpy(char [100], "ABCDEF", 100)
	TEST("ABCDEFGHI", 100);	// strlcpy(char [100], "ABCDEFGHI", 100)

	TEST("ABC", 8);			// strlcpy(char [8], "ABC", 8)
	TEST("ABCDEF", 8);		// strlcpy(char [8], "ABCDEF", 8)
	TEST("ABCDEFGHI", 8);	// strlcpy(char [8], "ABCDEFGHI", 8)

	TEST("ABC", 4);			// strlcpy(char [4], "ABC", 4)
	TEST("ABCDEF", 7);		// strlcpy(char [4], "ABCDEF", 4)
	TEST("ABCDEFGHI", 10);	// strlcpy(char [4], "ABCDEFGHI", 4)

	return (0);
}
