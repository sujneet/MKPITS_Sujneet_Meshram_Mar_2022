create table teacher_detail(teacher_id int primary key,teacher_age int)

insert into teacher_detail values(25,30),(47,35),(83,38)
select*from teacher_detail


create table teacher_subject(teacher_id int foreign key references teacher_detail(teacher_id),subject varchar(20))

insert into teacher_subject values(25,'Chemistry'),(47,'Physics'),(83,'Maths')
select*from teacher_subject



create table Orders(order_id int primary key,order_date date,custname varchar(20)not null)






insert into Orders values(1	,'1/1/2009','Amit'),
(2,'1/1/2009','Ravi')
select*from Orders

create table Order_details(order_id int foreign key references Orders(order_id),product_name varchar(20),quantity int not null)
insert into Order_details values(1,'Pakoda',1),(2,'Samosa',3),(1,'Kachori',4),(1,'Poha',2),(2,'Chai',3)



