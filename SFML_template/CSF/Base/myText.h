#pragma once
#include "BaseObject.h"

namespace csf
{
	/// <summary>
	/// ������������ �����
	/// </summary>
	class myText :public BaseObject
	{
		enum HorizontalAlignmentType { Left, HCentre, Right, HNoAlignment};
		enum VerticalAlignmentType { Up, VCentre, Down, VNoAlignment};
	protected:
		static Font font;

		HorizontalAlignmentType horizontalAlignmentType;
		VerticalAlignmentType verticalAlignmentType;
		Text::Style style;

		Text text;

		Color outlineColor;
		float outlineThickness;
		int size;
		float letterSpacing;

		int maxLenght;
		bool m_textChanged;

		/// <summary>
		/// ������� �� ������ � ����� �����
		/// </summary>
		/// <param name="s">������</param>
		/// <returns></returns>
		virtual int strToNum(string s);
		/// <summary>
		/// ������� �� ������ � ������������ �����
		/// </summary>
		/// <param name="s">������</param>
		/// <returns></returns>
		float strToNum_f(string s);
		/// <summary>
		/// ������ �� ������ ������ � box
		/// </summary>
		/// <param name="box">������ �����</param>
		/// <returns>true - ������ ������ ������ box, false - ������ ������ ������ box</returns>
		virtual bool getFitInBoxWidth(int widthBox);
		/// <summary>
		/// ������ �� ������ ������ � box
		/// </summary>
		/// <param name="box">������ �����</param>
		/// <returns>true - ������ ������ ������ box, false - ������ ������ ������ box</returns>
		virtual bool getFitInBoxHeight(int heightBox);
		/// <summary>
		/// ������ �� ������ ������ � box
		/// </summary>
		/// <param name="box">������ �����</param>
		/// <returns>true - ������ ������ ������ box, false - ������ ������ ������ box</returns>
		virtual bool getFitInBox(Vector2f sizeBox);
		/// <summary>
		/// ������� ������ � ������
		/// </summary>
		/// <param name="name">������</param>
		/// <returns>������ ��� �������</returns>
		virtual String DeleteParagraphs(String name);
		/// <summary>
		/// ���������� ��������
		/// </summary>
		virtual void updateDimentions();
		/// <summary>
		/// ���������� �������
		/// </summary>
		virtual void updateLocation();
	public:
		/// <summary>
		/// ���� ������
		/// </summary>
		/// <param name="newFont">����� �����</param>
		static void setFont(Font& newFont);
		/// <summary>
		/// ������� ������
		/// </summary>
		/// <returns>�����</returns>
		static Font getFont();

		/// <summary>
		/// �����������
		/// </summary>
		myText();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ ������</param>
		myText(float x, float y, String name, int size);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="location">�������</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ ������</param>
		myText(Vector2f location, String name, int size);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="name">�����</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		void Reload(String name, float x = -1, float y = -1);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ ������</param>
		void Reload(float x, float y, String name, int size);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="location">�������</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ ������</param>
		void Reload(Vector2f location, String name, int size);

		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		/// <returns>��������� �����</returns>
		virtual void setColor(int red, int green, int blue, int alpha = -1);
		/// <summary>
		/// ���� ����� ������ �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setOrigin(float x, float y);
		/// <summary>
		/// ����� � ���� ��� ��������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator> (RenderWindow& window) override;
		/// <summary>
		/// ����� � ���� � ���������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator>> (RenderWindow& window) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setPosition(float x, float y) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="_location">�������</param>
		virtual void setPosition(Vector2f _location);
		/// <summary>
		/// ���� ������ ������� ������
		/// </summary>
		/// <param name="size">������ ������</param>
		virtual void setSize(int size);
		/// <summary>
		/// ���� ������ ������
		/// </summary>
		/// <param name="name">�����</param>
		virtual void setString(String name);
		/// <summary>
		/// ���� � ����������
		/// </summary>
		/// <param name="event"></param>
		/// <returns>true - ���� ��������, false - ���� ������������</returns>
		virtual bool Input(Event& event);
		/// <summary>
		/// ������� ������
		/// </summary>
		virtual void Clear();
		/// <summary>
		/// ������� ���������� ��������
		/// </summary>
		/// <returns>���������� ��������</returns>
		virtual int getLength();
		/// <summary>
		/// ������� ������
		/// </summary>
		/// <returns>�����</returns>
		virtual String getString();
		/// <summary>
		/// �������� �����, ���� � �������
		/// </summary>
		virtual void Refresh();
		/// <summary>
		/// ���� ��������� ��������
		/// </summary>
		/// <param name="maxLenght">�������� ��������</param>
		virtual void setMaxLenght(int maxLenght);
		/// <summary>
		/// ��������� ��������� ���� �� �����
		/// </summary>
		/// <param name="textRect">������������� ���������� ����</param>
		/// <returns>true - ����� ��������, false - ����� �� ��������</returns>
		virtual void setTextRect(FloatRect textRect);
		/// <summary>
		/// ����� ��������� � ������
		/// </summary>
		/// <param name="str">���������</param>
		/// <param name="start">������ ������ ������</param>
		/// <returns>������ ������ ��������� � ������. ���� ��������� �� ������� - String::InvalidPos</returns>
		virtual size_t Find(String str, size_t start = 0);
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="x">�������� �� x</param>
		/// <param name="y">�������� �� y</param>
		virtual void setScale(float x, float y) override;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="angle">���� �������� � ��������</param>
		virtual void setRotate(float angle) override;
		/// <summary>
		/// ���� ����� ������� ������
		/// </summary>
		/// <param name="outlineColor">���� ������� ������</param>
		virtual void setOutlineColor(Color outlineColor);
		/// <summary>
		/// ������� ������ ������� �����
		/// </summary>
		/// <param name="outlineColor">������� ������� ������</param>
		virtual void setOutlineThickness(float outlineThickness);
		/// <summary>
		/// ���� ���������� ����� �������
		/// </summary>
		/// <param name="letterSpacing">����������� �������������� �������</param>
		virtual void setLetterSpacing(float letterSpacing);
		/// <summary>
		/// ���� ����� ������
		/// </summary>
		/// <param name="style">����� ������</param>
		virtual void setStyle(Text::Style style);
		/// <summary>
		/// ���� ������������ �� �����������
		/// </summary>
		/// <param name="horizontalAlignmentType">������������ �� �����������</param>
		virtual void setHorizontalAlignmentType(HorizontalAlignmentType horizontalAlignmentType);
		/// <summary>
		/// ���� ������������ �� ���������
		/// </summary>
		/// <param name="verticalAlignmentType">������������ �� ���������</param>
		virtual void setVerticalAlignmentType(VerticalAlignmentType verticalAlignmentType);
		/// <summary>
		/// ���� ������������
		/// </summary>
		/// <param name="horizontalAlignmentType">������������ �� �����������</param>
		/// <param name="verticalAlignmentType">������������ �� ���������</param>
		virtual void setAlignmentType(HorizontalAlignmentType horizontalAlignmentType, VerticalAlignmentType verticalAlignmentType);
		/// <summary>
		/// ������� ����� ������� ������
		/// </summary>
		/// <returns>���� ������� ������</returns>
		virtual Color getOutlineColor();
		/// <summary>
		/// ������� ������ ������� �����
		/// </summary>
		/// <returns>����������� �������������� �������</returns>
		virtual float getOutlineThickness();
		/// <summary>
		/// ������� ���������� ����� �������
		/// </summary>
		/// <returns>����������� �������������� �������</returns>
		virtual float getLetterSpacing();
		/// <summary>
		/// ������� ����� ������
		/// </summary>
		///  <returns>����� ������ </returns>
		virtual Text::Style getStyle();
		/// <summary>
		/// ������� ������������ �� �����������
		/// </summary>
		/// <returns>������������ �� �����������</returns>
		virtual HorizontalAlignmentType getHorizontalAlignmentType();
		/// <summary>
		/// ������� ������������ �� ���������
		/// </summary>
		/// <returns>������������ �� ���������</returns>
		virtual VerticalAlignmentType getVerticalAlignmentType();
	};
}