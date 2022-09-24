create table Customer2(cust_id int primary key,cust_name varchar(20),telno varchar(10))

insert into Customer2 values(2,'Amit',1254698754),(3,'Pooja',45789645),(4,'Aniket',654975454),
(5,'Sujneet',47895642),(6,'Priya',45789645)

select*from Customer2

create table Orders2(order_id int,order_date date,cust_id int,prod_name varchar(20),quantity int, rate money)

insert into Orders2 values(10,'2022-02-22',2,'Mouse',2,200)
insert into Orders2 Values(20,'2022-03-12',3,'KeyBoard',1,300),(30,'2022-09-12',4,'Board',3,600)
,(40,'2022-09-30',5,'PC',2,250),(50,'2022-02-15',7,'Wire',2,900)

select*from Orders2

select*from Customer2 left outer join Orders2 on Customer2.cust_id=Orders2.cust_id