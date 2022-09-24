create table customer(custid int primary key,custname varchar(500),telno int)
insert into customer values(1,'ss',1234),(2,'mm',4321),(3,'nn',9876)
select * from customer

create table orders(orderid int,orderdate int,custid int,prodname varchar(500),qty int,rate int)
insert into orders values(09,2-2-2,1,'creame',2,200)
insert into orders values(08,2-3-2,2,'powder',3,400)
insert into orders values(07,3-3-3,3,'tel',2,150)
select * from orders

select customer.custid,customer.custname,customer.telno,
orders.orderdate,orders.orderid,orders.prodname,orders.qty,orders.rate
from customer
inner join orders
on customer.custid=orders.custid