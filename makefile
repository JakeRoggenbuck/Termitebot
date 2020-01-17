CC=g++

make: termitebot.cpp
	$(CC) -o /bin/terbot termitebot.cpp

install:
	cp terbot.1 /usr/share/man/man1/terbot.1
	gzip /usr/share/man/man1/terbot.1

clean:
	rm /usr/share/man/man1/terbot.1.gz

uninstall:
	rm -rf /bin/terbot
