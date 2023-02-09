#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "BaseObject.h"

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ����������
	/// </summary>
	class Functional
	{
	protected:
		BaseObject* Object;

		/// <summary>
		/// ������� ����� � ������������, ����������� ��������� ������� �����
		/// </summary>
		/// <param name="pos">������� �����</param>
		/// <param name="centre">�����, ������������ ������� ��������������� ������</param>
		/// <param name="angle">���� ��������</param>
		Vector2f Rotate(Vector2f pos, Vector2f centre, float angle);
	public:
		/// <summary>
		/// �����������
		/// </summary>
		Functional();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="Object">��������� �� ������</param>
		Functional(BaseObject* Object);
	};
}

