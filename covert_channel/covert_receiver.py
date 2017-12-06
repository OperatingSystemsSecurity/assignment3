#!/usr/bin/env python3
# author: Hendrik Werner s4549775

import argparse
import os
import time


parser = argparse.ArgumentParser()
parser.add_argument(
    "-s", "--sender",
    type=str,
    required=True,
    help="The user name of the sender.",
)

if __name__ == "__main__":
    channel_path = "/home/" + parser.parse_args().sender + "/channel"

    while True:
        print("Received:", os.stat(channel_path).st_mode & 0o777)
        time.sleep(1)
