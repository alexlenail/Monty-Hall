Monty-Hall
==========

I was first exposed to the Monty Hall problem when Kevin Spacey asks the protagonist in '21' this question in order to determine whether he would make a good gambler, in the context of an MIT classroom. The solution to this problem is just one of those things you're supposed to accept you will never understand, though it's right. 

For background, the Monty Hall problem is described verbosely by [wikipedia](http://en.wikipedia.org/wiki/Monty_Hall_problem):

> The Monty Hall problem is a probability puzzle, loosely based on the American television game show Let's Make a Deal and named after its original host, Monty Hall. The problem was originally posed in a letter by Steve Selvin to the American Statistician in 1975. It became famous as a question from a reader's letter quoted in Marilyn vos Savant's "Ask Marilyn" column in Parade magazine in 1990:

> Suppose you're on a game show, and you're given the choice of three doors: Behind one door is a car; behind the others, goats. You pick a door, say No. 1, and the host, who knows what's behind the doors, opens another door, say No. 3, which has a goat. He then says to you, "Do you want to pick door No. 2?" Is it to your advantage to switch your choice?

> Vos Savant's response was that the contestant should switch to the other door.

Hypothetically this is because once you choose a door, there is a 1/3 probability you're right and a 2/3 probability that the car is behind one of the other doors. So when one of the other doors is opened there is still a 2/3 probability that it is one of the other two doors, one of which you know it isn't, so there's a 2/3 probability that it is the unopened door you didn't pick. 

I refused to believe this reasoning, and would get into engaging debates about what probability is and means, in the context of the monty hall problem. I imagined that under certain constraints, the solution to the Monty Hall problem could be right, but this was just a mathematical-like optical illusion, and if you were to actually test this, the probability would tend towards .5

I had some spare time in an airport terminal today, and so I decided to put this to the test. When I ran the program in this repository with 10,000 trials of the cases in which a person switches and then 10,000 in which a person stays, my command line greeted me with something undeniably much closer to 2/3 and 1/3 than 1/2 and 1/2. 

> zfrenchee@Samantha-II:~/Desktop/proj$ ./out
`.6627`
`.3397`

So I was wrong. I think this result is interesting, not just because the Monty-Hall problem's solution is counterintuitive and generally seems strange to me (still) but because I used a computer to prove a mathematical truth to myself. The process of asking a computer for an answer to a complex math problem is different from the sort of programming I do in school, where you typically have to force the computer to do something you already understand, and get it to the point where it matches your expectations. 

This was the opposite, and it was entiching. 

![goat](http://www.wallarena.com/wp-content/uploads/2013/07/Goat_Picture_1.jpg)

