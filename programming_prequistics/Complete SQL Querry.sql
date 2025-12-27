/* This query selects all columns and all rows from the employee_demographics table. */
SELECT *
FROM parks_and_recreation.employee_demographics;

/* This query selects only the distinct (unique) values from the 'age' column. */
SELECT distinct age
 FROM parks_and_recreation.employee_demographics;

/* This query selects the 'age' column for all rows where the age is greater than 40, demonstrating a WHERE clause with a numerical condition. */
SELECT age
FROM parks_and_recreation.employee_demographics
WHERE age >40;

/* This query selects all columns for rows where the 'first_name' is exactly 'Tom', demonstrating a WHERE clause with an exact string match. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name ='Tom';

/* This query selects all columns for rows where the 'first_name' starts with 'T', demonstrating the use of the LIKE operator with a wildcard '%'. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name like 'T%';

/* This query selects all columns for rows where the 'first_name' contains the letter 'a' anywhere in the string, demonstrating the use of the LIKE operator with wildcards on both sides. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name like '%a%';

/* This query selects all columns for rows where the 'birth_date' is after '1985-01-01' AND the 'gender' is NOT 'Male', demonstrating the use of AND and NOT operators in a WHERE clause. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE birth_date >'1985-01-01' and gender !='Male';

/* This query is a duplicate of the previous one, selecting all columns for rows where the 'birth_date' is after '1985-01-01' AND the 'gender' is NOT 'Male'. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE birth_date >'1985-01-01' and gender !='Male';

/* This query selects all columns for rows where either (first_name is 'Tom' AND age is '36') OR the age is '44', demonstrating the use of parentheses to group conditions with OR and AND. */
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE (first_name='Tom' and age='36') or age='44';











