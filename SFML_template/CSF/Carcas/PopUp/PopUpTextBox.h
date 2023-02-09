#pragma once
#include "PopUpWindow.h"
#include "myText.h"
#include "Button.h"

#define TEXTBOXCLOSE 0
#define TEXTBOXAPPLY 1
#define TEXTBOXCONTINUE 2

namespace csf
{
	class PopUpTextBox :public PopUpWindow
	{
	protected:
		myText* text;
		Button* Close;
		Button* Apply;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		PopUpTextBox();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="text">������ �� ������ ������</param>
		/// <param name="close">������ �� ������ ������ �������</param>
		/// <param name="apply">������ �� ������ ������ �����������</param>
		PopUpTextBox(mySprite* background, myText* text, Button* close, Button* apply);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="maxLenght">�������� ��������</param>
		PopUpTextBox(string name, int maxLenght = 10);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="maxLenght">�������� ��������</param>
		void Reload(string name, int maxLenght = 10);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="text">������ �� ������ ������</param>
		/// <param name="close">������ �� ������ ������ �������</param>
		/// <param name="apply">������ �� ������ ������ �����������</param>
		void Reload(mySprite* background, myText* text, Button* close, Button* apply);
		/// <summary>
		/// ����������/��������� ���a
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>������ ������ Apply - TEXTBOXAPPLY. ������ ������ Close - TEXTBOXCLOSE. �� ������ ������ - TEXTBOXCONTINUE</returns>
		virtual int Update(Event& event, RenderWindow& window) override;
	};
}