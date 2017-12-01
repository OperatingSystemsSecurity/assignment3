CFLAGS = -fno-stack-protector -no-pie

all: vuln

clean:
	rm -rf vuln

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
