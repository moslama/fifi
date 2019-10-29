# ifndef GET_NEXT_LINE_H
# define  GET_NEXT_LINE_H

# include  < fcntl.h >
# include  < sys / types.h >
# include  < unistd.h >
# include  < stdlib.h >
# include  " libft / libft.h "

# define  BUFF_SIZE  7

int 		get_next_line ( int  const fd, char ** line);

# endif
