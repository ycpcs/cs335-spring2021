---
layout: default
course_number: CS335
title: "Lab - Password Cracking"
---

# Lab - Password Cracking

In this lab you will be using a password cracking tool called [Hash Suite](https://hashsuite.openwall.net/) and [John the Ripper](https://www.openwall.com/john/).<br>
    - ***Hash Suite free version limitations:*** Formats other than LM have a maximum key length of ***6***, so keep your passwords short.<br>
    - John the Ripper is a fast password cracker, currently available for many flavors of Unix, Windows, DOS, and OpenVMS.<br>        

### Task 1 - Create hash file

1. Go to [md5hashgenerator](https://www.md5hashgenerator.com/) and create six (6) different hashes to break. Keep your passwords to a maximum key length of ***6***.
2. Create one for each of the following:
    - just numbers
    - lower case name
    - lower case word with numbers
    - lower case word with first capitalized
    - lower case word with numbers and first letter capitalized
    - lower case word and numbers with first letter capitalized and one letter a special
character
3. Examples: ```12345```, ```paswrd```, ```pas123```, ```Paswod```, ```Pass23```, ```P@ss23```
4. Open a text editor and save the hashes generated. Identify them as ```user1```, ```user2```, etc.
    - Save file to the desktop.
5. Take a screen shot of the user names and passwords for your report.

- Example of the password file

> user1:5f4dcc3b5aa765d61d8327deb882cf99 <br>
> user2:90f2c9c53f66540e67349e0ab83d8cd0 <br>
> user3:49838126dd6edf2153ff9d9b56b43d25 <br>
> user4:827ccb0eea8a706c4c34a16891f84e7b <br>
> user5:32250170a0dca92d53ec9624f336ca24 <br>
> user6:67f742c4fda87efdbb38a61f337a56d9 <br>

### Task 2 - Cracking the passwords using ***Hash Suite***

1. Open up Hash Suite program
2. Sample tutorial can be found [here](https://hashsuite.openwall.net/tutorial) or you can use the included help file.
3. Click on the Hash_Suite icon then File -&gt; Import -&gt; import a file. Locate and use the has
file you created earlier. This will brute force to find the password.
4. Measure the time it takes to fine all the passwords. Wait at least 15-20 minutes.
5. Identify if not all passwords are found immediately.
6. Take a screen shot of your results for the report. Be sure to include the time it took to
break the password hashes and the order they were broken in.
7. Once done create your report.

### Task 3 - Cracking the passwords using ***John the Ripper***

1. Download the latest community-enhanced version. [Windows binaries](https://www.openwall.com/john/j/john180j1w.zip).<br>
        a.  Install instructions for Linux and MacOS are under the ```doc``` folder.
2. Extract the zip to a new directory, open a command prompt and navigate to that directory.
3. Type john –format=raw-md5 then the location of the hash file. This will brute force to
find the password. Example: ```john.exe --format=raw-md5 hashes.txt```
4. Measure the time it takes to fine all the passwords. Wait at least 15-20 minutes.
5. Identify if not all passwords are found immediately.
6. Take a screen shot of your results for the report. Be sure to include the time it took to
break the password hashes and the order they were broken in.
7. Once done create your report.
8. ***Note:*** John the Ripper does not have limitation on the password length. Feel free to try and crack longer hashes.

### Task 4 - Report

Submit the answers to the following questions in a lab report into Moodle. Be sure to put you
name and class information on the paper.
- Analyze the results and determine which one took the shortest time. The longest time.
Explain why in both cases.
- Why was some user passwords broken before others: example: user1, user2, user3, user4, etc.
- Which one makes the best password? Explain why.
- What are two things you learned from this lab?

### Extra Credit

Try to crack your VM password. More details will be provided in class.

### Grading

Post your report in [Marmoset](https://cs.ycp.edu/marmoset) by the scheduled due date in the syllabus. Your grade for this lab will be composed of:
- 60% - Answering the questions
- 40% - Presenting the results and screenshots it took to discover passwords by type used
