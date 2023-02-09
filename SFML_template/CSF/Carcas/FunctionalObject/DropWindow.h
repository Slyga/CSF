#pragma once
#include "Carcas.h"
#include "DropFunctional.h"

namespace csf
{
	/// <summary>
	/// ���������� ����
	/// </summary>
	class DropWindow :public Carcas, public DropFunctional
	{
	protected:
		BaseObject* Box;
	public:
		/// <summary>
		/// �����������
		/// </summary>
		DropWindow();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">������ ������</param>
		/// <param name="Box">��������� �� ������</param>
		DropWindow(BaseObject* master, BaseObject* Box);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">������ ������</param>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		DropWindow(BaseObject* master, string name, float x = -1, float y = -1);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="master">������ ������</param>
		/// <param name="Box">��������� �� ������</param>
		void Reload(BaseObject* master, BaseObject* Box);
		/// <summary>
		/// �������� ������
		/// </summary>
		/// <param name="master">������ ������</param>
		/// <param name="name">��� �������</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		void Reload(BaseObject* master, string name, float x = -1, float y = -1);
	};
}