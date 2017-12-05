// author: Hendrik Werner s4549775

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
	struct stat *file_stat = malloc(sizeof(struct stat));
	for (;;) {
		stat("./channel", file_stat);
		printf("Received: %d\n", file_stat->st_mode & 0777);
		sleep(1);
	}
	free(file_stat);
}
