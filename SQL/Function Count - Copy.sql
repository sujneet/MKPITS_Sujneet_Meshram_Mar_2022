create table Product1(id int , name varchar(20),quantity int,price money)

insert into Product1 values(1,'Mouse',2,200),(2,'Keyboard',2,400),(3,'Board',5,500),(4,'Pen drive',5,650),(5,'Pen',3,40)

select*from Product1

select count (price) as 'total' from Product1

select count(price) as 'total' from product1
where name ='mouse'

select name,count(price) as 'total' from product1
group by name
