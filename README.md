# Laba2HW
# Домашняя работа (Условие)
Мальчик, продающий на улице газеты, зарабатывает а руб. на продаже первых 75
газет. На каждой из ос-тальных проданных газет он зарабатывает по х руб. Напишите
программу, которая выведет на дисплей заработок мальчика, если он продаст 133
газеты.

# Алгоритм и блок-схема

1. Начало
   
2. Объявить переменные,присвоить значения переменным start и last:

  start = 75 -> количество в первый раз проданных газет 

  last = 133  -> количество всех проданных газет

  result -> переменная для записи результата

3. Получаем значения переменных a,b от пользователя

4. Вычислить стоимость по формуле сначала первых 75 газет и прибавить стоимость последующих:

start * a + ((last - start) * b)

5. Записать ответ в переменную result:

result = start * a + ((last - start) * b)

6. Вывести результаты расчетов с подстановкой всех значений в текст.

7. Конец

# Блок-схема 

<img width="214" height="658" alt="image" src="https://github.com/user-attachments/assets/5ca3f1bb-d844-4189-b020-bad9d9583892" />

Ссылка на блок-схему: https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22jipT6YbAeCHEhweNu7gy%22%3E3Vhdb9owFP01kdpJSCEpAR5JoFulVarEw7S9TC4xSTYnTh2nwH79rr%2BIQ2gLjCKtErLs43Ov7Xt9uAbHj%2FL1Z4bK9J7GmDieG68df%2Bp4Xt%2F1PEd83HijkCBwFZCwLNakBphnf7Cx1GidxbhqETmlhGdlG1zQosAL3sIQY3TVpi0paa9aogR3gPkCkS76LYt5qtCRN2zwLzhLUrNyPxirmRwZsj5JlaKYrizInzl%2BxCjlqpevI0xE8ExclN3tC7PbjTFc8EMMSO1unnpx%2BuPnb%2FQ9J3erpxj3dHZw3IlC41ZDFa3ZAr%2Fiy%2FD4xgRPuJ3rIWU8pQktEJk1aMhoXcRY7NCFUcP5SmkJYB%2FAX5jzjb4YqOYUoJTnRM9uAwk3ENMcc7aBPTBMEM%2Be22dC%2BiokW97W9IFmcFrP1dfWDwbKRF%2Favu%2B2XXDEEsy1VRNz6FjbaCCZiSOy8koSrOASAiIQQVylGcfzEsnsrECH7RDBxSvxXVGBkKygee4zIrX25UD4x1PRhq4DlNHQ9KENZTtzvIDAZsI4e4ZuwqUfBT0yEYIdEKAWVS6JGcdr60Td1KWWmoY67KtGeX3zxWBSZcY6VbuZspPdStOxORmcUSn%2Bh1VKJ%2F7vrBT%2FEKVIAUAXWIgQTGjCUA4RKTHLYAOY7c49NBPHi2uZrbEpZC%2BLTbahp6Ul2htgyc7IdBTel4KMZHtrWSlZDmQ71YYK0ea3hgCGrkWOOoZTyQllOzhJqcEepXo7SnXf%2BFI9m1SHZ5Rq8GGl6l9YqsEhUm2H7g3tdZWlS0%2FJcMtt8FSLV1a4pAXvLVGeETjIROjEC1AuvGpChKoFijMEU%2Fe0oLvTck1Xeqlk7oSPcamrniHtKY4KqSDCIiGfRNDl6ntIgF9dEVQJYk%2BeAoyu9%2FKEn8frvUsdg0A2ZcD%2BoVCfIP%2F3q9TjM8p%2F9GHlf3Nh%2BY%2F%2B40qtiuPL9bqpoTeGsK25kfWqDiz%2BtsqbZ7enOGo4sTwY2uXf3yfIulNVziZr89C%2F8K%2BiiZXyqfWiCk6K6L5fNG9EtCPUAyIKw%2BaPBaXg5u8Zf%2FYX%3C%2Fdiagram%3E%3C%2Fmxfile%3E

# Реализация программы

# Пример работы программы при вводе цен 10 и 13

Ведите стоимость первых 75 газет:

 10
 
Ведите стоимость газеты после 75 штук:

 13
 
Мальчик заработает с 133 газет 1504 рублей

# Информация о разработчике

ФИО: Васянин Александр Сергеевич

Группа: бОТИ-261
