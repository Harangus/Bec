# Bec
Bec is simple translator from one custom programming language called Bec to C++.
The program firstly translates bec code to c++ code and the output program is created
from the c++ code using g++, so you have to have g++ installed on your system.
Main goal of bec is to simplify harsh syntax of c++ and also for me to not get 
bored during holidays. It still does have some issues, but it works.
Bec removes semicolumns and brackets from c++ and simplifies some keywords. 
Main features:
  -no brackets in statements and loops
  -almost no semicolumns (there are few exceptions)
  -more human readable code with new keywords
  -simplified loops, added foreach
  -better console input output
  -no need to declare functions before main function
  -almost full support of C++ -> if it is not in bec, use c++ version of it
  -commonly used libraries included by default - iostream, vector, algorithm, string, random
  -more readable syntax with almost same speed as c++
