#pragma once

/**
 * @class Operations
 * @brief Класс для выполнения базовых арифметических операций.
 */
class Operations {

public:
    /**
     * @brief Сложение двух чисел.
     * @param a Первое число.
     * @param b Второе число.
     * @return Сумма чисел.
     */
    double add(double a, double b);

    /**
     * @brief Вычитание двух чисел.
     * @param a Первое число.
     * @param b Второе число.
     * @return Разность чисел.
     */
    double subtract(double a, double b);

    /**
     * @brief Умножение двух чисел.
     * @param a Первое число.
     * @param b Второе число.
     * @return Произведение чисел.
     */
    double multiply(double a, double b);

    /**
     * @brief Деление двух чисел.
     * @param a Первое число.
     * @param b Второе число.
     * @return Результат деления или 0, если деление на 0.
     */
    double divide(double a, double b);

    /**
     * @brief Возведение числа в степень.
     * @param a Основание.
     * @param b Показатель степени.
     * @return Результат возведения в степень.
     */
    double power(double a, int b);
};