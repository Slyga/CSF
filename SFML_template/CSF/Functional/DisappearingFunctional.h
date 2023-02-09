#pragma once
#include "Functional.h"

namespace csf
{
	/// <summary>
	/// ���������� ������
	/// </summary>
	class DisappearingFunctional : public Functional
	{
	public:
		/// <summary>
		/// ���������� �����
		/// </summary>
		enum Orientation { Up, Down, Left, Right, NotMove };

	protected:
		Orientation orientation;
		float flightSpeed, vanishingRate, alpha;
		Vector2f startLocation;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		DisappearingFunctional();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="object">������� ������</param>
		/// <param name="orientation">���������� �����</param>
		/// <param name="flightSpeed">�������� �����</param>
		/// <param name="vanishingRate">�������� ���������</param>
		DisappearingFunctional(BaseObject* object, Orientation orientation, float flightSpeed, float vanishingRate);

		/// <summary>
		/// ����� ������
		/// </summary>
		virtual void Refresh();
		/// <summary>
		/// ���������
		/// </summary>
		virtual void Update();
	};
}