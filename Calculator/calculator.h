#pragma once

/**
 * @class Operations
 * @brief ����� ��� ���������� ������� �������������� ��������.
 */
class Operations {

public:
    /**
     * @brief �������� ���� �����.
     * @param a ������ �����.
     * @param b ������ �����.
     * @return ����� �����.
     */
    double add(double a, double b);

    /**
     * @brief ��������� ���� �����.
     * @param a ������ �����.
     * @param b ������ �����.
     * @return �������� �����.
     */
    double subtract(double a, double b);

    /**
     * @brief ��������� ���� �����.
     * @param a ������ �����.
     * @param b ������ �����.
     * @return ������������ �����.
     */
    double multiply(double a, double b);

    /**
     * @brief ������� ���� �����.
     * @param a ������ �����.
     * @param b ������ �����.
     * @return ��������� ������� ��� 0, ���� ������� �� 0.
     */
    double divide(double a, double b);

    /**
     * @brief ���������� ����� � �������.
     * @param a ���������.
     * @param b ���������� �������.
     * @return ��������� ���������� � �������.
     */
    double power(double a, int b);
};