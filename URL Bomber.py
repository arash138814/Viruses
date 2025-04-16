import webbrowser
import threading
def open_google():
    webbrowser.open("https://google.com")
while True:
    threading.Thread(target=open_google).start()
