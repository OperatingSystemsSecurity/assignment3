# author: Hendrik Werner s4549775

import os
import time


if __name__ == "__main__":
    while True:
        print("Received:", os.stat("./channel").st_mode & 0o777)
        time.sleep(1)
