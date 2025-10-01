import time
import sys

def type_lyric(line, char_delay=0.065):
    for char in line:
        print(char, end='', flush=True)
        time.sleep(char_delay)
    print()

def print_lyrics():
    lyrics = [
        "Dil jo tumhara hai,",
        "Kaisa bechara hai,",
        "Maane na besharam, bilkul khatara hai,",  # <- fast line
        "Tu kare dil beqaraar,",
        "Kyun karoon main tujhse pyar"
    ]

    # per-line typing speed (smaller delay = faster typing)
    delays_between_lines = [1.5, 1.5, 2.0, 1.8, 2.3]
    typing_speeds = [0.065, 0.065, 0.035, 0.065, 0.065]  
    # third line = faster (0.035 sec per char)

    time.sleep(1.5)
    for i, line in enumerate(lyrics):
        type_lyric(line, char_delay=typing_speeds[i])
        time.sleep(delays_between_lines[i])

print_lyrics()
