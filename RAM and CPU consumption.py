import threading
import time
import random
import string
def cpu_hog():
    while True:
        random_string = ''.join(random.choices(string.ascii_lowercase, k=100000))
        sorted_string = ''.join(sorted(random_string))
def memory_hog():
    memory_list = []
    while True:
        memory_list.append(' ' * 10**7)

def main():
    cpu_threads = []
    for _ in range(4):
        t = threading.Thread(target=cpu_hog)
        cpu_threads.append(t)
        t.start()
    memory_threads = []
    for _ in range(2):
        t = threading.Thread(target=memory_hog)
        memory_threads.append(t)
        t.start()
    while True:
        time.sleep(1)
if __name__ == "__main__":
    main()
