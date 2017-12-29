for (;;)
			{
				int y;
				int k, n, v;
				double f, g = 1;
				Console.WriteLine("Выбор задачи:");
				Console.WriteLine("1 - Размещение с повторением");
				Console.WriteLine("2 - Размещение без повторений");
				Console.WriteLine("3 - Сочетание с повторением");
				Console.WriteLine("4 - Сочитание без повторений");
				Console.WriteLine("5 - Перестановки c повторений");
				Console.WriteLine("6 - Перестановки без повторений");
				Console.WriteLine("7 - Подсчет факториала");
				Console.WriteLine("8 - Подсчет бинома Ньютона");
				y = Console.Read() - 48; Console.WriteLine();
				switch (y)
				{
					case 1:
						{
							Console.WriteLine("Введите элемент k: ");
							k = Console.Read() - 48; Console.WriteLine();
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine();
							f = Math.Pow(n, k);
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 2:
						{
							Console.WriteLine("Введите элемент k: ");
							k = Console.Read() - 48; Console.WriteLine();
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine();
							f = fact(n) / fact(n - k);
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 3:
						{
							Console.WriteLine("Введите элемент k: ");
							k = Console.Read() - 48; Console.WriteLine();
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine();
							f = fact(n + k - 1) / (fact(k) * fact(n - 1));
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 4:
						{
							Console.WriteLine("Введите элемент k: ");
							k = Console.Read() - 48; Console.WriteLine();
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine();
							f = fact(n) / (fact(n - k) * fact(k));
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 5:
						{
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine(); 
							Console.WriteLine("Введите количество всех перестановок с повторениями k: ");
							k = Console.Read() - 48; Console.WriteLine();
							for (int t = 0; t < k; t++)
							{
								Console.WriteLine("Введите элемент: ");
								v = Console.Read() - 48; Console.WriteLine();
                                g = g * fact(v);
							}
							f = fact(n) / g;
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 6:
						{
							Console.WriteLine("Введите число перестановок: ");
							k = Console.Read() - 48; Console.WriteLine();
							f = fact(k);
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 7:
						{
							Console.WriteLine("Введите число факториал которого вы хотите посчитать: ");
							k = Console.Read() - 48; Console.WriteLine();
							f = fact(k);
							Console.WriteLine("Результат: " + f);
							break;
						}
					case 8:
						{
							Console.WriteLine("Введите элемент n: ");
							n = Console.Read() - 48; Console.WriteLine();
							Console.WriteLine("Введите элемент k: ");
							k = Console.Read() - 48; Console.WriteLine();
							f = bcl(n, k);
							Console.WriteLine("Результат: " + f);
							break;
						}
				}
			}
    return 0;