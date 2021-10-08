import random
# taking the values from user
a = int(input("Enter first limit : "))
b = int(input("Enter second limit : "))
r = []
# appending numbers bw the range given by the user
for i in range(a, b):
    r.append(i)

rec = []
y = int(input("Enter the number of players : "))
k = 0
# nested while loop so that it can play multiple times
while k < y:
    ran = random.choice(r)
    print(f"Player {k+1} start the game .....\n")
    x = True
    i = 0
    while x:
        user1 = int(input(f"Guess the number between {a} and {b} : "))
        if user1 == ran:
            print("Correct number !!!!!")
            x = False

        else:
            if user1 > ran:
                print("Wrong guess !! Your number is too high ")

                i += 1
            else:
                print("Wrong guess!! Your number is too low ")

                i += 1
    k += 1
    rec.append(i)

# printing the results
for i in range(rec.__len__()):
    print(f"Player {i+1} guessed the ans in  {rec[i]} chances ")

maxwin = max(rec)
visit = False
# finding the winner
for i in range(rec.__len__()):
    if maxwin == rec[i]:
        if visit != True:
            print(f"Winner is player {i+1}")
            visit = True
        else:
            print("There are more than one winner becoz they both have the score !! ")
