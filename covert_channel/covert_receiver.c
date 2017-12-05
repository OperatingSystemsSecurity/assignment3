// author: Hendrik Werner s4549775

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/inotify.h>
#include <sys/stat.h>

#define CHANNEL "./channel"
#define EVENT_BUFFER_SIZE sizeof(struct inotify_event) + NAME_MAX + 1

int main() {
	char events[EVENT_BUFFER_SIZE];
	struct stat *file_stat = malloc(sizeof(struct stat));
	int inotify_fd = inotify_init();
	inotify_add_watch(inotify_fd, CHANNEL, IN_ATTRIB);
	for (;;) {
		read(inotify_fd, events, EVENT_BUFFER_SIZE);
		stat(CHANNEL, file_stat);
		printf("Received: %d\n", file_stat->st_mode & 0777);
	}
	free(file_stat);
	close(inotify_fd);
}
