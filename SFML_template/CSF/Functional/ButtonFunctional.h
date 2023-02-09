#pragma once
#include "Functional.h"

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ������� ������
	/// </summary>
	class ButtonFunctional :public Functional
	{
	public:
		/// <summary>
		/// �����������
		/// </summary>
		ButtonFunctional();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		ButtonFunctional(BaseObject* Object);
		/// <summary>
		/// �������� ������ �� ��� ������ (�a ����� ������)
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>true - ������ ������, false - ������ �� ������</returns>
		virtual bool Pressed(Event& event, RenderWindow& window);
		/// <summary>
		/// �������� ������ �� ��� ������ (�a �������� ������)
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>true - ������ ������, false - ������ �� ������</returns>
		virtual bool Released(Event& event, RenderWindow& window);
		/// <summary>
		/// �������� ������ �� ������� ����
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>true - ������� ���� ������, false - ������� ���� �� ������</returns>
		virtual bool DoubleClick(Event& event, RenderWindow& window);
	};
}