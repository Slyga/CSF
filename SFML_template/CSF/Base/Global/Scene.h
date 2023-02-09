#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// �����
	/// </summary>
	class Scene
	{
	protected:
		Event event;
		Music music;
		Sound click;
	public:
		/// <summary>
		/// ����������/��������� ���a
		/// </summary>
		/// <param name="window">����</param>
		/// <returns>��������� ��������</returns>
		virtual int Update(RenderWindow &window) = 0;
		/// <summary>
		/// ��������a ������� ���a
		/// </summary>
		/// <param name="window">����</param>
		virtual void Draw(RenderWindow &window) = 0;
		/// <summary>
		/// ��a�����/����a�������� �a���� ���a
		/// </summary>
		virtual void Reborn() = 0;
		/// <summary>
		/// Event-������� �����
		/// </summary>
		/// <param name="window">����</param>
		void EventWindow(RenderWindow& window);
		/// <summary>
		/// ������ �����
		/// </summary>
		/// <param name="scene">�����</param>
		/// <param name="window">����</param>
		/// <returns>����� ��������</returns>
		static int playScene(Scene* scene, RenderWindow& window);
	};

}
