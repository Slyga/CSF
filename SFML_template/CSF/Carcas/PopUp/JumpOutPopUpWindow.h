#pragma once
#include "PopUpWindow.h"
#include "Button.h"

#define JUMPPOPUPCONTINUE 0

namespace csf
{
	/// <summary>
	/// ����������� ����
	/// </summary>
	class JumpOutPopUpWindow :public PopUpWindow
	{
	public:
		/// <summary>
		/// ���������� �����������
		/// </summary>
		enum Orientation { Up, Down, Left, Right };
	protected:
		Orientation orientation;
		Button* Close;
		int numberClockCycles;

	public:
		/// <summary>
		/// �����������
		/// </summary>
		JumpOutPopUpWindow();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="close">������ �� ������ ������ ��������</param>
		/// <param name="orientation">���������� �����������</param>
		/// <param name="numberClockCycles">���������� �������� ������ �� ������� ��������� ����</param>
		JumpOutPopUpWindow(mySprite* background, Button* close, Orientation orientation, int numberClockCycles);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="orientation">���������� �����������</param>
		/// <param name="numberClockCycles">���������� �������� ������ �� ������� ��������� ����</param>
		JumpOutPopUpWindow(string name, Orientation orientation, int numberClockCycles);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="name">��� ��������</param>
		/// <param name="orientation">���������� �����������</param>
		/// <param name="numberClockCycles">���������� �������� ������ �� ������� ��������� ����</param>
		void Reload(string name, Orientation orientation, int numberClockCycles);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="background">������ �� ������ ����</param>
		/// <param name="close">������ �� ������ ������ ��������</param>
		/// <param name="orientation">���������� �����������</param>
		/// <param name="numberClockCycles">���������� �������� ������ �� ������� ��������� ����</param>
		void Reload(mySprite* background, Button* close, Orientation orientation, int numberClockCycles);

		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x"></param>
		/// <param name="y"></param>
		/// <param name="window"></param>
		virtual void setPosition(float x, float y, RenderWindow& window);
		/// <summary>
		/// ����������/��������� ���a
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>JUMPPOPUPCONTINUE</returns>
		virtual int Update(Event& event, RenderWindow& window) override;
		/// <summary>
		/// ���������� ���a
		/// </summary>
		virtual void TurnOff() override;
		/// <summary>
		/// ��������� ���a
		/// </summary>
		virtual void TurnOn() override;
	};
}