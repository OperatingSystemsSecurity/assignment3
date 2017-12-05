all: quine1 quine2

clean:
	rm -f quine1 quine2

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
