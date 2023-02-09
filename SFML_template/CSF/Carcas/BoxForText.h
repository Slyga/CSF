#pragma once
#include "Carcas.h"
#include "mySprite.h"
#include "myText.h"

namespace csf
{
	/// <summary>
	/// ����� ��� ������
	/// </summary>
	class BoxForText : public Carcas
	{
	protected:
		mySprite* Box;
		myText* text;
		Vector2f centre;
		Vector2f sizeBox;

	public:
		/// <summary>
		/// �����������
		/// </summary>
		BoxForText();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="text">������ �� ������ ������</param>
		BoxForText(mySprite* box, myText* text);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="text">������ �� ������ ������</param>
		/// <param name="centre">����� ������������ ������� �����</param>
		/// <param name="sizeBox">������ �����</param>
		BoxForText(mySprite* box, myText* text, Vector2f centre, Vector2f sizeBox);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="text">������ �� ������ ������</param>
		/// <param name="centre">����� ������������ ������� �����</param>
		/// <param name="sizeBox">������ �����</param>
		void Reload(mySprite* background, myText* text, Vector2f centre, Vector2f sizeBox);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="box">������ �� ������ �����</param>
		/// <param name="text">������ �� ������ ������</param>
		void Reload(mySprite* background, myText* text);
		
		/// <summary>
		/// ������� ������� �����
		/// </summary>
		/// <returns>������ �����</returns>
		virtual Vector2f getSizeBox();
		/// <summary>
		/// ������� ������� ������
		/// </summary>
		/// <returns>������� ������</returns>
		virtual Vector2f getCentre();
		/// <summary>
		/// ���� ������� �����
		/// </summary>
		/// <param name="sizeBox">������ �����</param>
		virtual void setSizeBox(Vector2f sizeBox);
		/// <summary>
		/// ���� ������� ������
		/// </summary>
		/// <param name="centre">������� ������</param>
		virtual void setCentre(Vector2f centre);
		/// <summary>
		/// �������� �������
		/// </summary>
		virtual void updatePosition();
	};
}

