create table Staffs(staff_id int ,first_name varchar(20),last_name varchar(20),manager_id int)

insert into Staffs (staff_id,first_name,last_name)values(1,'Arjun','Shri')
insert into Staffs values(2,'Sujneet','Meshram',1)
insert into Staffs values(3,'Anil','Meshram',2)
insert into Staffs values(4,'Priya','Sharma',2)
insert into Staffs values(5,'Amit','Parate',1)
insert into Staffs values(6,'Mrunal','Kumbhare',5)
insert into Staffs values(7,'Sumit','Jain',5)
insert into Staffs values(8,'Gunjan','Deva',1)
insert into Staffs values(9,'Sujata','Sharma',7)
insert into Staffs values(10,'Raj','Nandan',7)

select*from Staffs

select e.first_name+' '+e.last_name Employee,
 m.first_name+' '+m.last_name Manager

from Staffs e inner join staffs m on m.staff_id=e.manager_id order by manager;


select e1.first_name+' '+e1.last_name Employee,
 m1.first_name+' '+m1.last_name Manager

from Staffs e1 inner join staffs m1 on m1.staff_id=e1.manager_id order by manager;

