Steps to compile & run program:
1. Create a testing directory in Linux/WSL
2. Include provided demo program (given to us) into directory
3. Compile the program by using "make fcfs", "make priority", "make rr" (aka follow the provided Makefile)
4. Provide the txt file of tasks in this format [task name] [priority] [CPU burst]
5. Run program by entering "./fcfs schedule.txt" into command line












≠
≥
≤
∃
Σ
μ
𝜎
∩
∪
⊆
⊄




** The conditions p(x) ≥ 0 and Σall possible x p(x) = 1 are required of any pmf. 

In general, pmf of any Bernoulli rv can be expressed in the form p(1) = α and p(0) = 1 – α, where 0 < α < 1.

F(1) = P(Y ≤ 1) = P(Y = 1) = p(1) = .05
F(2) = P(Y ≤ 2) = P(Y = 1 or 2) = p(1) + p(2) = .15
F(4) = P(Y ≤ 4) = P(Y = 1 or 2 or 4) = p(1) + p(2) + p(4) = .50
F(8) = P(Y ≤ 8) = p(1) + p(2) + p(4) + p(8) = .90
F(16) = P(Y ≤ 16) = 1


For X a discrete rv, the graph of F(x) will have a jump at every possible value of X and will be flat between possible values. Such a graph is called a step function.

For any two numbers a and b with a ≤ b,
P(a ≤ X ≤ b) = F(b) - F(a-)
where “a-” represents the largest possible X value that is strictly less than a. In
particular, if the only possible values are integers and if a and b are integers, then
        P(a ≤ X ≤ b) = P(X = a or a + 1 or… or b)
                    = F(b) - F(a - 1)
Taking a = b yields P(X = a) 5 F(a) - F(a - 1) in this case.

P(2 ≤ X ≤ 5) = P(X = 2, 3, 4, or 5) = F(5) – F(1) = .22
P(X = 3) = F(3) – F(2) = .05

Since 150/15,000 = .01 = p(1), 450/15,000 = .03 = p(2), and so on, an alternative expression for (3.7) is
        1*p(1) + 2*p(2) + … + 7*p(7)

Let X be a discrete rv with set of possible values D and pmf p(x). The expected
value or mean value of X, denoted by E(X) or μX or just μ, is

μ = 1*p(1) + 2*p(2) +…+ 7*p(7)
= (1)(.01) + 2(.03) + …+ (7)(.02)
= .01 + .06 + .39 + 1.00 + 1.95 + 1.02 + .14 = 4.57

If the rv X has a set of possible values D and pmf p(x), then the expected value of any function h(X), denoted by E[h(X)] or μh(X) , is computed by

With h(X) denoting the profit associated with selling X units, the given information implies that
        h(X) = revenue – cost
        = 1000X + 200(3 – X) – 1500
        = 800X – 900
The expected profit is then 
        E[h(X)] = h(0)*p(0) + h(1)*p(1) + h(2)*p(2) + h(3)*p(3)
        = (–900)(.1) + (– 100)(.2) + (700)(.3) + (1500)(.4)
        = $700

    E(aX + b) = a * E(X) + b
    (Or, using alternative notation, μaX+b = a * μX + b)


Let X have pmf p(x) and expected value μ. Then the variance of X, denoted by V(X) or 𝜎vX^2 , or just 𝜎^2 , is
The standard deviation (SD) of X is

When the pmf p(x) specifies a mathematical model for the distribution of population values, both 𝜎^2 and 𝜎 measure the spread of values in the population; 𝜎^2 is the population variance, and 𝜎 is the population standard deviation.


There are many experiments that conform either exactly or approximately to the following list of 4 requirements:
1. The experiment consists of a sequence of n smaller experiments called trials, where n is fixed in advance of the experiment.
2. Each trial can result in one of the same two possible outcomes (dichotomous trials), which we generically denote by success (S) and failure (F).
3. The trials are independent, so that the outcome on any particular trial does not influence the outcome on any other trial.
4. The probability of success P(S) is constant from trial to trial; we denote this probability by p. (ex, tossing a coin) 


Consider sampling without replacement from a dichotomous population of size N. If the sample size (number of trials) n is at most 5% of the population size, the experiment can be analyzed as though it were a binomial experiment.

The binomial random variable X associated with a binomial experiment consisting of n trials is defined as
        X = the number of S’s among the n trials

Because the pmf of a binomial rv X depends on the two parameters n and p, we denote the pmf by b(x; n, p).

RECALL) A and B are independent if and only if (iff) 
        P(A ∪ B) = P(A) * P(B)

P(A | B) = P(A) if A is independent of B
P(A ∩ B) = P(A | B) * P(B) = P(A) * P(B)

For n = 1, the binomial distribution becomes the Bernoulli distribution. 
The mean value of a Bernoulli variable is  = p, so the expected number of S’s on any single trial is p. 
Since a binomial experiment consists of n trials, intuition suggests that for X ~ Bin(n, p), E(X) = np, the product of the number of trials and the probability of success on a single trial.

The probability of (100, 500) is p(100, 500) = P(X = 100, Y = 500) = .30. Clearly p(x, y) ≥ 0, and it is easily confirmed that the sum of the nine displayed probabilities is 1.


A binomial experiment consists of n dichotomous (success–failure), homogenous (constant success probability) independent trials. Now consider a trinomial experiment in which each of the n trials can result in one of three possible outcomes. For example, each successive customer at a store might pay with cash, a credit card, or a debit card. The trials are assumed independent. Let pi = P(trial results in a type 1 outcome) and define p2 and p3 analogously for type 2 and type 3 outcomes. The random variables of interest here are Xi = the number of trials that result in a type i outcome for i = 1, 2, 3.


A natural extension of the trinomial scenario is an experiment consisting of n independent and identical trials, in which each trial can result in any one of r possible outcomes. Let pi = P(outcome i on any particular trial), and define random variables by Xi = the number of trials resulting in outcome i (i = 1, … , r).

This is called a multinomial experiment, and the joint pmf of X1, … , Xr is called the multinomial distribution. An argument analogous to the one used to derive the trinomial pmf gives the multinomial pmf as

≠
≥
≤
∃
Σ
μ
𝜎
∩
∪
⊆
⊄
²
⁺

Suppose X = the number of major defects in a randomly selected new automobile and Y = the number of minor defects in that same auto. If we learn that the selected car has one major defect, what now is the probability that the car has at most three minor defects—that is, what is P(Y ≤ 3 | X = 1)?

a. What is the probability that the flight will accommodate all ticketed passengers who show up? 
b. What is the probability that not all ticketed passengers who show up can be accommodated? 
c. If you are the first person on the standby list (which means you will be the first one to get on the plane if there are any seats available after all ticketed passengers have been accommodated), what is the probability that you will be able to take the flight? What is this probability if you are the third person on the standby list?

answers:
a. Since there are 50 seats, the flight will accommodate all ticketed passengers who show up as long as there are no more than 50. P(Y ≤ 50) = .05 + .10 + .12 + .14 + .25 + .17 = .83. 
b. This is the complement of part a: P(Y > 50) = 1 – P(Y ≤ 50) = 1 – .83 = .17. 
c. If you’re the first standby passenger, you need no more than 49 people to show up (so that there’s space left for you). P(Y ≤ 49) = .05 + .10 + .12 + .14 + .25 = .66. On the other hand, if you’re third on the standby list, you need no more than 47 people to show up (so that, even with the two standby passengers ahead of you, there’s still room). P(Y ≤ 47) = .05 + .10 + .12 = .27.

14. A contractor is required by a county planning department to submit one, two, three, four, or five forms (depending on the nature of the project) in applying for a building permit. Let Y = the number of forms required of the next applicant. The probability that y forms are required is known to be proportional to y—that is, p(y) = ky for y = 1, . . . , 5. 
a. What is the value of k? [Hint: Σ(5, y=1)p(y) = 1] 
b. What is the probability that at most three forms are required? 
c. What is the probability that between two and four forms (inclusive) are required? 
d. Could p(y) = y^2/50 for y = 1,…, 5 be the pmf of Y?

18. Two fair six-sided dice are tossed independently. Let M = the maximum of the two tosses (so M(1,5) = 5, M(3,3) = 3, etc.). 
a. What is the pmf of M? [Hint: First determine p(1), then p(2), and so on.] 
b. Determine the cdf of M and graph it.

From the table, E(X) = ∑ xp(x) = 2.3, E(X2) = 6.1, and V(X) = 6.1 – (2.3)2 = .81. Each lot weighs 5 lbs, so the number of pounds left = 100 – 5X. Thus the expected weight left is E(100 – 5X) = 100 – 5E(X) = 88.5 lbs, and the variance of the weight left is V(100 – 5X) = V(–5X) = (–5)2 V(X) = 25V(X) = 20.25.

46. Compute the following binomial probabilities directly
from the formula for b(x; n, p):
a. b(3; 8, .35)
b. b(5; 8, .6)
c. P(3 ≤ X ≤ 5) when n = 7 and p = .6
d. P(1 ≤ X) when n = 9 and p = .1

49. A company that produces fine crystal knows from experience that 10% of its goblets have cosmetic flaws and must be classified as “seconds.”
a. Among six randomly selected goblets, how likely is it that only one is a second?
b. Among six randomly selected goblets, what is the probability that at least two are seconds?
c. If goblets are examined one by one, what is the probability that at most five must be selected to find four that are not seconds?

56. The College Board reports that 2% of the 2 million high school students who take the SAT each year receive special accommodations because of documented disabilities (Los Angeles Times, July 16, 2002). Consider a random sample of 25 students who have recently taken the test.
a. What is the probability that exactly 1 received a special accommodation?
b. What is the probability that at least 1 received a special accommodation?
c. What is the probability that at least 2 received a special accommodation?
d. What is the probability that the number among the 25 who received a special accommodation is within 2 standard deviations of the number you would expect to be accommodated?
e. Suppose that a student who does not receive a special accommodation is allowed 3 hours for the exam, whereas an accommodated student is allowed 4.5 hours. What would you expect the average time allowed the 25 selected students to be?


60. A toll bridge charges $1.00 for passenger cars and $2.50 for other vehicles. Suppose that during daytime hours, 60% of all vehicles are passenger cars. If 25 vehicles cross the bridge during a particular daytime period, what is the resulting expected toll revenue? [Hint: Let X = the number of passenger cars; then the toll revenue h(X) is a linear function of X.]

Using the hint, h(X) = 1 ⋅ X + 2.25(25 – X) = 62.5 – 1.5X, which is a linear function. Since the mean of X is E(X) = np = (25)(.6) = 15, E(h(X)) = 62.5 – 1.5E(X) = 62.5 – 1.5(15) = $40.

c. Express the event that the total number of beds occupied at the two hospitals combined is at most 1 in terms of X and Y, and then calculate this probability.
d. What is the probability that at least one of the two hospitals has no beds occupied?

≠
≥
≤
∃
Σ
μ
𝜎
∩
∪
⊆
⊄
ε
²
⁺

(a) all words that begin with a 1 and end with a 0
        => 1{0,1}*0

(b) all words that contain at least 3 1’s
        => {0,1}*1{0,1}*1{0,1}*1{0,1}*

(c) all words that contain 0101
        => {0,1}*0101{0,1}*

(d) all words having length at least 3 and whose third bit is a 0
        => {0,1}²0{0,1}*

(e) all words that either start with a 1 and have odd length, or start with a 0 and have even length
        => 1{00,01,10,11}*U0{00,01,10,11}*{0,1}

(f) all words that do not contain substring 110
        => 0*U{ε,1}(0⁺1)*0*1*

(g) all words having length at most 5
        => εU{0,1}⁺{0,1}⁺{0,1}⁺{0,1}⁺{0,1}⁺

(h) all words except for 11 and 111
        => {ε,0,1,00,01,10,000,001,010,011,100,101,110}U{0,1}{0,1}{0,1}{0,1}{0,1}*

(i) all words for which every odd bit is a 1
        => {10,11}*U1{01,11}*

(j) all words that have at least two 0’s and at most one 1
        => 000*U000*10*U0*1000*U00*100*

(k) the language consisting of " and 0
        => {ε,0}

(l) words that contain an even number of 0’s or (inclusive) contain exactly two ones
        => (1*01*0)*1*U0*10*10*

(m) the language that has no words
        => 0

(n) all words except the empty string
        => {0,1}⁺
# CPU-schedulers
# CPU-schedulers
