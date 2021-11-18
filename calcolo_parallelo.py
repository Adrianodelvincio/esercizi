from multiprocessing import Process
from func import f


if  __name__ == "__main__":
    p = Process(target=f, args= ('Adriano',))
    p.start()
    p.join()