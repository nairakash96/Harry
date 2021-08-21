from pygame import mixer
from datetime import datetime
from time import time


def musiconloop(file, stopper):
    mixer.init()
    mixer.music.load(file)
    mixer.music.play()
    while True:
        a = input()
        if a == stopper:
            mixer.music.stop()
            break


def log_my_health(msg):
    with open("MyHealthLog.txt","a") as f:
        f.write(f"{msg} {datetime.now()} \n")


if __name__ == '__main__':
    init_water = time()
    init_eye = time()
    init_exercise = time()
    watersecs = 40*60
    eyesecs = 30*60
    exesecs = 45*60
    while True:
        if time() - init_water > watersecs:
            print("Water Drinking Time\nEnter DRANK to stop alarm")
            musiconloop("water.mp3", "Drank")
            init_water = time()
            log_my_health("Drank Water at")

        if time() - init_exercise > exesecs:
            print("Workout Time\nEnter Done to stop alarm")
            musiconloop("workout.mp3", "Done")
            init_exercise = time()
            log_my_health("Workout done at")

        if time() - init_eye > eyesecs:
            print("Eye Workout Time\nEnter Done to stop alarm")
            musiconloop("Eye.mp3", "Done")
            init_eye = time()
            log_my_health("Eye Workout done at")
