#pragma once
#include "Carcas.h"
#include "DisappearingFunctional.h"

namespace csf
{
	/// <summary>
	/// ������
	/// </summary>
	class DisappearingObject :public Carcas, public DisappearingFunctional
	{
	public:
		/// <summary>
		/// �����������
		/// </summary>
		DisappearingObject();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="object">������� ������</param>
		/// <param name="orientation">���������� �����</param>
		/// <param name="flightSpeed">�������� �����</param>
		/// <param name="vanishingRate">�������� ���������</param>
		DisappearingObject(BaseObject* object, Orientation orientation, float flightSpeed, float vanishingRate);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="object">������� ������</param>
		/// <param name="orientation">���������� �����</param>
		/// <param name="flightSpeed">�������� �����</param>
		/// <param name="vanishingRate">�������� ���������</param>
		void Reload(BaseObject* object, Orientation orientation, float flightSpeed, float vanishingRate);
	};
}