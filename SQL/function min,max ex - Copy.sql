create table Product(id int , name varchar(20),quantity int,price money)

insert into Product values(1,'Mouse',2,200),(2,'Keyboard',2,400),(3,'Board',5,500),(4,'Pen drive',5,650),(5,'Pen',3,40)

select name,quantity,price from Product where price=(select max(500) as "Minimun Quantity " from Product);

select name,quantity,price  from Product where Price=(select min(40) as "Minimun Quantity" from Product);

select name, min(40) as "Minimun Price" from Product group by name having min(40)>10;