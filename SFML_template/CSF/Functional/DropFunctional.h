#pragma once
#include "Functional.h"

namespace csf
{
	/// <summary>
	/// ������� ����������� ����
	/// </summary>
	class DropFunctional :public Functional
	{
	protected:
		/// <summary>
		/// ���� ����� ���������
		/// </summary>
		/// <param name="mousePosition">������� ���� � �����������</param>
		/// <param name="window">����</param>
		void setPosition(Vector2f mousePosition, RenderWindow& window);

		BaseObject* master;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		DropFunctional();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">������ ������</param>
		/// <param name="name">��� ��������</param>
		DropFunctional(BaseObject* master, BaseObject* Object);

		/// <summary>
		/// ����� � ���� ��� ��������
		/// </summary>
		/// <param name="window">����</param>
		virtual void Update(Event& event, RenderWindow& window);
		/// <summary>
		/// ���� ������� �������
		/// </summary>
		/// <param name="master">������ ������</param>
		virtual void setMaster(BaseObject* master);
	};
}

