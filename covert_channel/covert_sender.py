# author: Hendrik Werner s4549775

import os
import random
import time


if __name__ == "__main__":

    while True:
        number = random.randrange(8 ** 3 - 1)
        print("Sending:", number)
        os.chmod("./channel", number)
        time.sleep(1)
