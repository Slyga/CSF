#pragma once
#include "Carcas.h"
#include "mySprite.h"

namespace csf
{
	class PopUpWindow :public Carcas
	{
	protected:
		mySprite* Background;

	public:
		/// <summary>
		/// �����������
		/// </summary>
		PopUpWindow();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		PopUpWindow(mySprite* background);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="background">��� ��������</param>
		PopUpWindow(string name);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		void Reload(mySprite* background);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="background">��� ��������</param>
		void Reload(string name);
		
		/// <summary>
		/// ���������� ���a
		/// </summary>
		virtual void TurnOff();
		/// <summary>
		/// ��������� ���a
		/// </summary>
		virtual void TurnOn();
		/// <summary>
		/// ����������/��������� ���a
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns></returns>
		virtual int Update(Event& event, RenderWindow& window);
		/// <summary>
		/// ��������� ������� �� ������ ����
		/// </summary>
		/// <param name="window">����</param>
		virtual void setPosition(RenderWindow& window);
	};
}

