#pragma once
#include "Carcas.h"
#include "PlateFunctional.h"

namespace csf
{
	/// <summary>
	/// ��������������� ������
	/// </summary>
	class Plate :public Carcas, public PlateFunctional
	{
	public:
		/// <summary>
		/// �����������
		/// </summary>
		Plate();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		Plate(BaseObject* Object);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		Plate(string name, float x = -1, float y = -1);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		void Reload(BaseObject* Object);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		void Reload(string name, float x = -1, float y = -1);
		/// <summary>
		/// ���� ���� ��������� �������
		/// </summary>
		/// <param name="i">��� ��������� �������</param>
		virtual void setAwakeningType(AwakeningTypes AwakeningType) override;
	};
}