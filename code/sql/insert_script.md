---
layout: default
course_number: CS335
title: Code - Insert Employees
---

Insert Employees: save as _/home/seed/Desktop/employees.sql_

```sql
insert into employee (Name, EID, Password, Salary, SSN) values ('Frodo Baggins', 'EID2000', 'r1ng', 50000, '098765432');
insert into employee (Name, EID, Password, Salary, SSN) values ('Sam Gamgee', 'EID3000', 'shir3', 45000, '123321123');
insert into employee (Name, EID, Password, Salary, SSN) values ('Smeagol', 'EID0001', 'pr3$$', 1000, '111222333');
insert into employee (Name, EID, Password, Salary, SSN) values ('Mithrandir', 'EID0000', 'gr@y', 999999, '111111111');   
```

Run with ```mysql> source /home/seed/Desktop/employees.sql```
