#pragma once
#include "Carcas.h"
#include "Button.h"
#include "Plate.h"
#include "mySprite.h"

namespace csf
{
	class Scrolling :public Carcas
	{
	protected:
		class ScrollPlate :public Plate
		{
		protected:
			BaseObject* master;
		public:
			/// <summary>
			/// ����������
			/// </summary>
			ScrollPlate();
			/// <summary>
			/// �����������
			/// </summary>
			/// <param name="master">��������� �� ������ �������</param>
			/// <param name="name">��� ��������</param>
			/// <param name="x">������� �� �</param>
			/// <param name="y">������� �� y</param>
			ScrollPlate(BaseObject* master, string name);
			/// <summary>
			/// �������� ������
			/// </summary>
			/// <param name="master">��������� �� ������ �������</param>
			/// <param name="name">��� ��������</param>
			/// <param name="x">������� �� �</param>
			/// <param name="y">������� �� y</param>
			void Reload(BaseObject* master, string name);
			
			/// <summary>
			/// �����a�������� ������a
			/// </summary>
			/// <param name="window">����</param>
			/// <returns>��������� �� ������ ������</returns>
			//virtual Plate* MovePlate(RenderWindow& window) override;
			
			/// <summary>
			/// ��������� �������� �������� ����
			/// </summary>
			/// <param name="percent">������� ����������</param>
			virtual void WheelScrolled(float percent);
			
			/// <summary>
			/// ���� ����� �������
			/// </summary>
			/// <param name="x">������� �� �</param>
			/// <param name="y">������� �� y</param>
			virtual void setPosition(float x, float y) override = 0;
			/// <summary>
			/// ���� ������ ������� � �������a�
			/// </summary>
			/// <param name="percent">������� ����������</param>
			virtual void setPosition(float percent) = 0;
			/// <summary>
			/// �����a� �������a ���������
			/// </summary>
			/// <returns>������� ����������</returns>
			virtual float getScrolling() = 0;
		} *scrollPlate;

		mySprite* master;

		mySprite* Box;
		Button* upScrollButton;
		Button*	downScrollButton;

	public:
		/// <summary>
		/// �����������
		/// </summary>
		Scrolling();

		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="master">��������� �� ������ �������</param>
		/// <param name="Box">��������� �� ������ �����</param>
		/// <param name="upScrollButton">��������� �� ������ ������ �����</param>
		/// <param name="downScrollButton">��������� �� ������ ������ ����</param>
		Scrolling(mySprite* master, mySprite* Box, Button* upScrollButton, Button* downScrollButton);

		/// <summary>
		/// ��������� ���������
		/// </summary>
		/// <param name="event">������� ����</param>
		/// <param name="window">����</param>
		/// <returns>0 - ��������� ��������, -1 - �������� �� ����</returns>
		virtual int Update(Event& event, RenderWindow& window);
		/// <summary>
		/// ���������� �������
		/// </summary>
		virtual void updatePosition() = 0;
		/// <summary>
		/// ������� �������� ���������
		/// </summary>
		/// <returns>������� ����������</returns>
		virtual float getScrolling();
	};
}

