create table Products(product_id int primary key,product_name varchar(20),
brand_id int, category_id int,model_year int,list_price money)

insert into Products values(1,'Mouse',10,11,2015,25000),(2,'Keyboard',20,22,2019,15000),
(3,'Pen Drive',30,33,2022,2000)

select*from Products

declare 
@product_name2 varchar(max),
@list_price2 decimal;

declare cursor_Product2 cursor for select 
product_name,list_price from Products;

open cursor_Product2;

fetch next from cursor_Product2 into 
@product_name2,
@list_price2;
print @product_name2 + cast (@list_price2 as varchar);

WHILE @@FETCH_STATUS = 0
    BEGIN
       
        FETCH NEXT FROM cursor_product2 INTO 
            @product_name2, 
            @list_price2;
            
          PRINT @product_name2 + CAST(@list_price2 AS varchar);
    END;

CLOSE cursor_product2;

DEALLOCATE cursor_product2;
