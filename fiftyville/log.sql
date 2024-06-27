-- Find the crime report for the theft on Humphrey Street on July 28, 2023
SELECT * FROM crime_scene_reports
WHERE year = 2023 AND month = 7 AND day = 28 AND street = 'Humphrey Street';
-- Find flights that could have been used to escape after the theft
SELECT * FROM flights
WHERE year = 2023 AND month = 7 AND day = 28
ORDER BY hour, minute;
-- Assuming you have identified a flight or flights, list passengers
SELECT p.name, p.phone_number, p.passport_number
FROM people p
JOIN passengers pa ON p.passport_number = pa.passport_number
WHERE pa.flight_id = 27;
SELECT * FROM interviews
WHERE year = 2023 AND month = 7 AND day = 28 AND transcript LIKE '%bakery%';
SELECT * FROM bakery_security_logs
WHERE year = 2023 AND month = 7 AND day = 28 AND hour = 10 AND minute >= 15 AND minute <= 25;
SELECT * FROM flights JOIN airports
ON airports.id = flights.origin_airport_id
WHERE airports.city = "Fiftyville" AND flights.year = 2023 AND flights.month = 7 AND flights.day = 29 ORDER BY flights.hour LIMIT 1;
SELECT city FROM airports WHERE id = 4;
SELECT * FROM phone_calls WHERE year = 2023 AND month = 7 AND day = 28 AND duration <= 60;
SELECT * FROM people WHERE license_plate = "5P2BI95" OR license_plate = "94KL13X" OR license_plate = "6P58WS2" OR license_plate = "4328GD8" OR license_plate = "G412CB7" OR license_plate = "L93JTIZ" OR license_plate = "322W7JE" OR license_plate = "0NTHK55";
SELECT * FROM atm_transactions WHERE year = 2023 AND month = 7 AND day = 28 AND atm_location = "Leggett Street" AND transaction_type = "withdraw";
SELECT p.name, p.phone_number, p.passport_number
FROM people p
JOIN passengers pa ON p.passport_number = pa.passport_number
WHERE pa.flight_id = 36;
SELECT p1.name, p1.phone_number, p1.passport_number, p1.license_plate
FROM people p1
JOIN passengers pa ON p1.passport_number = pa.passport_number
WHERE pa.flight_id = 36
AND p1.passport_number IN (
    SELECT p2.passport_number
    FROM people p2
    WHERE p2.license_plate IN ('5P2BI95', '94KL13X', '6P58WS2', '4328GD8', 'G412CB7', 'L93JTIZ', '322W7JE', '0NTHK55')
SELECT p.name, p.phone_number, p.passport_number, p.license_plate
FROM people p
JOIN passengers pa ON p.passport_number = pa.passport_number
JOIN phone_calls pc ON p.phone_number = pc.caller OR p.phone_number = pc.receiver
WHERE pa.flight_id = 36
AND pc.year = 2023 AND pc.month = 7 AND pc.day = 28 AND pc.duration <= 60
AND p.passport_number IN (
    SELECT passport_number
    FROM people
    WHERE license_plate IN ('5P2BI95', '94KL13X', '6P58WS2', '4328GD8', 'G412CB7', 'L93JTIZ', '322W7JE', '0NTHK55')
);
SELECT * FROM people JOIN bank_accounts ON bank_accounts.person_id = people.id
WHERE bank_accounts.account_number IN (28500762 , 28296815, 76054385, 49610011, 16153065, 25506511, 81061156, 26013199);
SELECT * FROM people WHERE phone_number = "(375) 555-8161";
