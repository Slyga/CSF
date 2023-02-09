#pragma once
#include "Carcas.h"
#include "Plate.h"
#include "mySprite.h"

namespace csf
{
	class ComboBox :public Carcas
	{
	protected:
		friend Plate;
		vector<Plate*> plateBank;
		BaseObject* Box;

		bool enable;
		float lineSpacing;
		int movePlate;
		int size;
		Vector2f startPositionPlate;

	public:
		/// <summary>
		/// �����������
		/// </summary>
		ComboBox();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		ComboBox(mySprite* box);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="plateBank">������ �� ������ �������� ������</param>
		ComboBox(mySprite* box, vector<Plate*> plateBank);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">��� ��������</param>
		/// <param name="plateBank">���������� ������</param>
		ComboBox(string name, int numPlate);

		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		void Reload(mySprite* box);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="plateBank">������ �� ������ �������� ������</param>
		void Reload(mySprite* box, vector<Plate*> plateBank);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="plateBank">������ �� ������ �������� ������</param>
		void Reload(string name, int numPlate);
		/// <summary>
		/// �����a� ��a���
		/// </summary>
		/// <param name="i">������ ������</param>
		/// <returns>������ �� ������ ������</returns>
		Plate* operator[](int i);
		/// <summary>
		/// ����� �������� ��� ��������
		/// </summary>
		/// <param name="window"></param>
		virtual void operator>(RenderWindow& window) override;
		/// <summary>
		/// ����� �������� � ���������
		/// </summary>
		/// <param name="window"></param>
		virtual void operator>>(RenderWindow& window) override;
		/// <summary>
		/// �������� �������
		/// </summary>
		void updatePosition();
		/// <summary>
		/// �����a�������� ������a ��a���
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>������ �� ��������������� ������ ������</returns>
		Plate* MovePlates(RenderWindow& window);
		/// <summary>
		/// ���� ������������ ��������� ����� ��������
		/// </summary>
		/// <param name="lineSpacing">������������ ��������� ����� ��������</param>
		void setLineSpacing(float lineSpacing);
		/// <summary>
		/// ������� ����������� ��������� ����� ��������
		/// </summary>
		float getLineSpacing();
		/// <summary>
		/// ���� ��������� ������� ������.
		/// ���� ������� ����� (-1, -1), �� ������������ �� ������
		/// </summary>
		/// <param name="lineSpacing">��������� �������� ������</param>
		void setStartPositionPlate(Vector2f startPositionPlate);
		/// <summary>
		/// ������� ��������� ������� ������
		/// </summary>
		Vector2f getStartPositionPlate();
	};
}

