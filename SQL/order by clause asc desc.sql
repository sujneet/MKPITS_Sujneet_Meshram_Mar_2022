create table info1(id int primary key,fname varchar(20),lname varchar(20),sub varchar(20),city varchar(20),state varchar(20))
insert into info1 values(1,'amit','shah','dotnet','nagpur','mah')
insert into info1 values(2,'rajesh','kumar','dotnet','mumbai','mah')
insert into info1 values(3,'dilip','sharma','java','nagpur','mah')
insert into info1 values(4,'arifa','shabnam','java','nagpur','mah')
insert into info1 values(5,'mayuri','meshram','dotnet','mumbai','mah')

select fname,lname from info1 order by fname

select fname,lname from info1 order by fname desc

select fname,lname from info1 order by lname


