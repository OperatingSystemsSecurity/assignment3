all: channel covert_receiver

channel:
	touch ~/channel
	chmod 755 ~

clean:
	rm -f ~/channel covert_receiver
	chmod 700 ~

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
