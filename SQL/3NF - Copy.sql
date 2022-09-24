create table teachers(teacher_id int primary key,teacher_name
varchar(20),country varchar(20),city varchar(20), state varchar(20))
insert into teachers values(1,'stephan','india','nagpur','mah')
insert into teachers values(2,'morris','india','nagpur','mah')
insert into teachers values(3,'daniel','india','nagpur','mah')
insert into teachers values(4,'fransis','india','mumbai','mah')
select * from teachers

create table teacher1(teacher_id	int foreign key references teachers(teacher_id),
teacher_name varchar(20) ,state_id int primary key)
insert into teacher1 values (1,'Amit',11),(2,'raj',11),(3,'dilip',12)
select*from teacher1

create table state(state_id int foreign key references teacher1(state_id),state_name varchar(20),country_id int primary key)
insert into state values(11,'maharashtra',101),
(12,'mp',101)
select*from state

create table country(country_id int foreign key references state(country_id),country_name varchar(20))	
insert into country values (101,'india'),(102,'shrilanka')
select*from country

