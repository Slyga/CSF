#pragma once
#include "PopUpWindow.h"
#include "Button.h"

#define POPUPNO 3
#define POPUPYES 4
#define POPUPCONTINUE 5

namespace csf
{
	class PopUpWindow�esNo :public PopUpWindow
	{
	protected:
		BaseObject* Question;
		Button* Yes; 
		Button* No;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		PopUpWindow�esNo();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="question">������ �� ������ �������</param>
		/// <param name="yes">������ �� ������ ������ "��"</param>
		/// <param name="no">������ �� ������ ������ "���"</param>
		PopUpWindow�esNo(mySprite* background, BaseObject* question, Button* yes, Button* no);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� �������</param>
		PopUpWindow�esNo(string name);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="name">��� �������</param>
		void Reload(string name);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="question">������ �� ������ �������</param>
		/// <param name="yes">������ �� ������ ������ "��"</param>
		/// <param name="no">������ �� ������ ������ "���"</param>
		void Reload(mySprite* background, BaseObject* question, Button* yes, Button* no);
		
		/// <summary>
		/// ����������/��������� ���a
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>������ ������ Yes - POPUPYES. ������ ������ No - POPUPNO. �� ������ ������ - POPUPCONTINUE</returns>
		virtual int Update(Event& event, RenderWindow& window) override;
	};
}