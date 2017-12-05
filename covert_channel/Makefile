all: channel covert_receiver

channel:
	touch channel

clean:
	rm -f channel covert_receiver

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
