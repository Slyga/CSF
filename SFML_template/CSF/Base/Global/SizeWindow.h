#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
using namespace std;

namespace csf
{
	/// <summary>
	/// ��������� ����
	/// </summary>
	class SizeWindow
	{
	private:
		static string sizeWindow;
		static string failName;
		static Vector2i originalDimentions;
		static Vector2i	realDimentions;
		static int isFullScreen, isAdmin;
		static Vector2f scaleAdapting;
		

	public:
		static RenderWindow* window;

		/// <summary>
		/// ������ ������� ����
		/// </summary>
		/// <param name="Dimentions">������� ����</param>
		static void setSizeWindow(Vector2i Dimentions);
		/// <summary>
		/// ������ ������� ����
		/// </summary>
		/// <param name="Dimentions">������� ����</param>
		/// <param name="isFullScreen">������ �����</param>
		static void setSizeWindow(Vector2i Dimentions, bool isFullScreen);
		/// <summary>
		/// 
		/// </summary>
		/// <param name="originalDimentions">�������� ������</param>
		/// <param name="realDimentions">�������� ������</param>
		/// <param name="isFullScreen">������ �����</param>
		static void setSizeWindow(Vector2i originalDimentions, Vector2i realDimentions, bool isFullScreen);
		/// <summary>
		/// ������� ������� ����
		/// </summary>
		/// <returns>������� ����</returns>
		static string getSizeWindow();
		/// <summary>
		/// ������� ����������� ������� ����
		/// </summary>
		/// <returns>������� ���� �� �</returns>
		static Vector2i getOriginalDimentions();
		/// <summary>
		/// ������� �������� ������� ����
		/// </summary>
		/// <returns>������� ���� �� �</returns>
		static Vector2i getRealDimentions();
		/// <summary>
		/// ������ ������ �����
		/// </summary>
		/// <param name="isFullScreen">������ �����</param>
		static void setIsFullScreen(bool isFullScreen);
		/// <summary>
		/// ������ ����� ������
		/// </summary>
		/// <param name="isAdmin">����� ������</param>
		static void setIsAdmin(bool isAdmin);
		/// <summary>
		/// ������� ������ �����
		/// </summary>
		/// <returns>true - ������ �����, false - �� ������ �����</returns>
		static int getIsFullScreen();
		/// <summary>
		/// ������� ����� ������
		/// </summary>
		/// <returns>true - ����� ������, false - �� ����� ������</returns>
		static int getIsAdmin();
		/// <summary>
		/// ������� ������� ���������
		/// </summary>
		/// <returns>������� �������</returns>
		static Vector2f getScaleAdapting();
	};
	
}