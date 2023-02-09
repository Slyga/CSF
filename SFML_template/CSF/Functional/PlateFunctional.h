#pragma once
#include "Functional.h"
#include "BaseObject.h"

namespace csf
{
	/// <summary>
	/// ������� �������������� �������
	/// </summary>
	class PlateFunctional :public Functional
	{
		//friend Vector2f BaseObject::Rotate(Vector2f pos, Vector2f centre, float angle);
	protected:
		static BaseObject* MovingPlate;
		bool moving;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		PlateFunctional();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		PlateFunctional(BaseObject* Object);

		/// <summary>
		/// �����a�������� ������a
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>��������������� ������</returns>
		virtual BaseObject* MovePlate(RenderWindow& window);
		/// <summary>
		/// ������� ��������� �� ������
		/// </summary>
		/// <returns>true - ������ ���������, false - ������ �� ���������</returns>
		bool getMoving();
		/// <summary>
		/// ������� ������������ �������
		/// </summary>
		/// <returns>����������� ������</returns>
		static BaseObject* getMovingPlate();
	};
}