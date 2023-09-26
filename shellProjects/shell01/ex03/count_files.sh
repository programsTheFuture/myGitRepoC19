# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avadsoon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 14:21:55 by avadsoon          #+#    #+#              #
#    Updated: 2023/09/20 14:24:14 by avadsoon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

Find . -type f -or -type d | wc -1 | tr -d " "