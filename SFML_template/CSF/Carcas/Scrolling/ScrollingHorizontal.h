#pragma once
#include "Scrolling.h"

namespace csf
{
	class ScrollingHorizontal :public Scrolling
	{
	protected:
		class ScrollPlateHorizontal :public ScrollPlate
		{
		public:
			/// <summary>
			/// �����������
			/// </summary>
			ScrollPlateHorizontal();
			/// <summary>
			/// �����������
			/// </summary>
			/// <param name="master">��������� �� ������ �������</param>
			/// <param name="name">��� ��������</param>
			ScrollPlateHorizontal(BaseObject* master, string name);

			/// <summary>
			/// ���� ����� ���������
			/// </summary>
			/// <param name="x">������� �� �</param>
			/// <param name="y">������� �� y</param>
			virtual void setPosition(float x, float y) override;
			/// <summary>
			/// ���� ������ ������� � �������a�
			/// </summary>
			/// <param name="percent">������ ����������</param>
			virtual void setPosition(float percent) override;
			/// <summary>
			/// �����a� �������a ����������
			/// </summary>
			/// <returns>������� ����������</returns>
			virtual float getScrolling() override;
		};
	
		/// <summary>
		/// �������� ������� ��������
		/// </summary>
		void updateConfiguration();
	public:
		/// <summary>
		/// �����������
		/// </summary>
		ScrollingHorizontal();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">��������� �� ������ �������</param>
		/// <param name="Box">��������� �� ������ �����</param>
		/// <param name="upScrollButton">��������� �� ������ ������ �����</param>
		/// <param name="downScrollButton">��������� �� ������ ������ ����</param>
		/// <param name="nameScrollPlate">��� �������� ������ ����������</param>
		ScrollingHorizontal(mySprite* master, mySprite* Box, Button* upScrollButton, Button* downScrollButton, string nameScrollPlate);
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">��������� �� ������ �������</param>
		/// <param name="name">��� ��������</param>
		ScrollingHorizontal(mySprite* master, string name);

		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="master">��������� �� ������ �������</param>
		/// <param name="name">��� ��������</param>
		void Reload(mySprite* master, string name);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="master">��������� �� ������ �������</param>
		/// <param name="Box">��������� �� ������ �����</param>
		/// <param name="upScrollButton">��������� �� ������ ������ �����</param>
		/// <param name="downScrollButton">��������� �� ������ ������ ����</param>
		/// <param name="nameScrollPlate">��� �������� ������ ����������</param>
		void Reload(mySprite* master, mySprite* Box, Button* upScrollButton, Button* downScrollButton, string nameScrollPlate);
		/// <summary>
		/// ���������� �������
		/// </summary>
		virtual void updatePosition();
	};
}