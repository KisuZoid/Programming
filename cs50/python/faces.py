#implement a function convert that accept str as input
#replace :) and :( with there relative emoji and gives output
def main():
    print(convert())



def convert():
    face = input()
    face = face.replace(":)", "🙂").replace(":(", "🙁")
    return face


main()