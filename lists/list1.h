#pragma once
/// <summary>
/// ��������� ��� �������� ��������� ������������ ������
/// </summary>
struct l1_elem
{
	/// <summary>
	/// �������������� ���� �������� ������
	/// </summary>
	int a;

	/// <summary>
	/// �������� ���� �������� ������
	/// </summary>
	l1_elem* next = nullptr;
};

/// <summary>
/// ��������� ��� �������� ��������� �� ������ ������������ ������
/// </summary>
struct list1
{
	l1_elem* first = nullptr;
};

/// <summary>
/// ������� ���������� �������� � ������. ������� ����������� � ����� ������.
/// </summary>
/// <param name="list">������, ���� ����� �������� ����� ��������</param>
/// <param name="val">����������� � ������ ��������.</param>
void add(list1& list, int val);

/// <summary>
/// ������� ���������� �������� � ������ � ��������� �������
/// </summary>
/// <param name="list">������, ���� ����� �������� �������</param>
/// <param name="val">����������� � ������ ��������</param>
/// <param name="pos">�������, ���� ����������� ������� (������� � 0).</param>
void insert(list1& list, int val, int pos);

/// <summary>
/// ��������� �������� �������� ������, �������������� � ��������� �������
/// </summary>
/// <param name="list">������, �������� �������� �������� ��������� ��������</param>
/// <param name="val">���������� ��������</param>
/// <param name="pos">������� ��������, �������� �������� ����� ��������</param>
/// <returns>
/// true - ���� �������� ������� �������� �
/// false - ���� ���� ������� ������� ��������������� ��������
/// </returns>
bool get(const list1& list, int& val, int pos);

/// <summary>
/// ������� ������� ������� ������, ������������� �� ��������� �������
/// </summary>
/// <param name="list">������, ������� �������� ����� �������</param>
/// <param name="pos">�������, � ������� ����� ������� ��������</param>
/// <returns>
/// true - ���� �������� ������� �������
/// false - ���� ���� ������� ������� ��������������� ��������
/// </returns>
bool remove(list1& list, int pos);

/// <summary>
/// ������� ������� ��� �������� ������ �� ������
/// </summary>
/// <param name="list">������, ������� ����� ��������</param>
void clear(list1& list);
