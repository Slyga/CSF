#pragma once
#include "Carcas.h"
#include "ButtonFunctional.h"

namespace csf
{
	/// <summary>
	/// ������
	/// </summary>
	class Button :public Carcas, public ButtonFunctional
	{
	public:
		/// <summary>
		/// �����������
		/// </summary>
		Button();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		Button(BaseObject* Object);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		Button(string name, float x = -1, float y = -1);
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