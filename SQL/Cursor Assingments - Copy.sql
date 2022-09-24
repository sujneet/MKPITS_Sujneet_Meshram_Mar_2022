create table Customer(cust_id int primary key, cust_name varchar(20))

insert into Customer values(1,'Amit'),(2,'Aniket'),(3,'Sujneet'),(4,'Priya'),(5,'Payal')

select*from Customer

declare @Cust_id int,@Cust_name varchar(20);

declare cursor_Customer cursor for select cust_id,cust_name from Customer;

open cursor_Customer;

fetch next from cursor_Customer into @Cust_id,@Cust_name; 

WHILE @@FETCH_STATUS = 0
    BEGIN
        PRINT @product_name + CAST(@Cust_id AS int);
        FETCH NEXT FROM cursor_Customer INTO 
            @Cust_id, 
            @Cust_name;
    END;
