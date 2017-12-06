CFLAGS = -fno-stack-protector -no-pie

all: vuln

clean:
	rm -rf vuln

enable-aslr:
	sudo tee /proc/sys/kernel/randomize_va_space <<< 2

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
