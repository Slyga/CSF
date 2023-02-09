#pragma once
#include "Carcas.h"
#include "myText.h"
namespace csf
{
	/// <summary>
	/// ������������� �����
	/// </summary>
	class MultilineText :public myText, public Carcas
	{
		friend myText;
	protected:
		vector<myText*> Texts;
		float lineSpacing;

		/// <summary>
		/// ������ ��������
		/// </summary>
		virtual void updateDimensions();
		/// <summary>
		/// ������ ��������
		/// </summary>
		virtual void setDimensions();
		/// <summary>
		/// �������� �������
		/// </summary>
		virtual void updatePosition();
		/// <summary>
		/// ������� ����� ������ ����� startIndex � endIndex
		/// </summary>
		/// <param name="str">������</param>
		/// <param name="startIndex">������ ������ (������������)</param>
		/// <param name="endIndex">������ ����� (������������)</param>
		/// <returns>����� ������ ����� startIndex � endIndex</returns>
		virtual String getStringPart(String str, int startIndex, int endIndex);
		/// <summary>
		/// ������� ������ ���������� � ������ ������� � ������
		/// </summary>
		/// <param name="text">������</param>
		/// <returns>������ ���������� � ������ ������� � ������</returns>
		int getIndexCentralSpace(String str);
		/// <summary>
		/// �������� ���� �����
		/// </summary>
		/// <returns>true - ����� ��������, false - ����� �� ��������</returns>
		virtual bool DivideIntoParagraphs();
		/// <summary>
		/// ��������� �����
		/// </summary>
		virtual void SplitText();
		/// <summary>
		/// �������� �������
		/// </summary>
		virtual void deleteTexts();

	public:
		/// <summary>
		/// �����������
		/// </summary>
		MultilineText();
		/// <summary>
		/// �����������
		/// </summary>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ �����</param>
		/// <param name="lineSpacing">����������� ��������</param>
		MultilineText(float x, float y, String name, int size, float lineSpacing);

		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="name">�����</param>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		void Reload(String name, float x = -1, float y = -1);
		/// <summary>
		/// ���������� ������
		/// </summary>
		/// <param name="x">������� �� �</param>
		/// <param name="y">������� �� y</param>
		/// <param name="name">�����</param>
		/// <param name="size">������ �����</param>
		/// <param name="lineSpacing">����������� ��������</param>
		void Reload(float x, float y, String name, int size, float lineSpacing);

		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="red">�������</param>
		/// <param name="green">������</param>
		/// <param name="blue">�����</param>
		/// <param name="alpha">������������</param>
		virtual void setColor(int red, int green, int blue, int alpha = -1);
		/// <summary>
		/// ����� � ���� ��� ��������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator> (RenderWindow& window) override;
		/// <summary>
		/// ����� � ���� � ���������
		/// </summary>
		/// <param name="window">����</param>
		virtual void operator>> (RenderWindow& window) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="x">������� �� x</param>
		/// <param name="y">������� �� y</param>
		virtual void setPosition(float x, float y) override;
		/// <summary>
		/// ���� �������
		/// </summary>
		/// <param name="_location">�������</param>
		virtual void setPosition(Vector2f _location) override;
		/// <summary>
		/// ���� ������ ������� ������
		/// </summary>
		/// <param name="size">������ ������</param>
		virtual void setSize(int size) override;
		/// <summary>
		/// ���� ������ ������
		/// </summary>
		/// <param name="name">�����</param>
		virtual void setString(String name) override;
		/// <summary>
		/// ���� � ���������� (�� ��������)
		/// </summary>
		/// <param name="event"></param>
		/// <returns>true - ���� ��������, false - ���� ������������</returns>
		virtual bool Input(Event& event) override;
		/// <summary>
		/// ������� ������
		/// </summary>
		virtual void Clear() override;
		/// <summary>
		/// ������� ���������� ��������
		/// </summary>
		/// <returns>���������� ��������</returns>
		virtual int getLength() override;
		/// <summary>
		/// ������� ������
		/// </summary>
		/// <returns>�����</returns>
		virtual String getString() override;
		/// <summary>
		/// �������� ������
		/// </summary>
		virtual void Refresh() override;
		/// <summary>
		/// ���� ��������� ��������
		/// </summary>
		/// <param name="maxLenght">�������� ��������</param>
		virtual void setMaxLenght(int maxLenght) override;
		/// <summary>
		/// �����a� ��������� �� ������
		/// </summary>
		/// <returns>��������� �� ������</returns>
		virtual BaseObject* operator*() override;
		/// <summary>
		/// ��������� ��������� ���� �� �����
		/// </summary>
		/// <param name="sizeBox">������ �����</param>
		/// <returns>true - ����� ��������, false - ����� �� ��������</returns>
		virtual bool AlignTextBox(Vector2f sizeBox) ;
		/// <summary>
		/// ��������� ��������� ���� �� �����
		/// </summary>
		/// <param name="sizeBox">������ �����</param>
		/// <param name="isSaveLine">��������� ���������� �������</param>
		/// <param name="isSaveSize">��������� ������ ������</param>
		/// <param name="isSaveLineSpacing">��������� ����������� ��������</param>
		/// <returns>true - ����� ��������, false - ����� �� ��������</returns>
		virtual bool AlignTextBox(Vector2f sizeBox, bool isSaveLine, bool isSaveSize, bool isSaveLineSpacing);
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>�������</returns>
		virtual Vector2f getPosition() override;
		/// <summary>
		/// �����a� ���������
		/// </summary>
		/// <returns>���������</returns>
		virtual bool getVisible() override;
		/// <summary>
		/// �����a� �����
		/// </summary>
		/// <returns>����</returns>
		virtual Color getColor() override;
		/// <summary>
		/// ���� �����
		/// </summary>
		/// <param name="color">����</param>
		virtual void setColor(Color color) override;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="x">�������� �� x</param>
		/// <param name="y">�������� �� y</param>
		virtual void setScale(float x, float y) override;
		/// <summary>
		/// ���� �������� �������
		/// </summary>
		/// <param name="angle">���� �������� � ��������</param>
		virtual void setRotate(float angle) override;
		/// <summary>
		/// �����a� ������������ ���������
		/// </summary>
		/// <returns>����������� ��������</returns>
		virtual float getLineSpacing();
		/// <summary>
		/// ���� ������������ ���������
		/// </summary>
		/// <param name="lineSpacing">����������� ��������</param>
		virtual void setLineSpacing(float lineSpacing);
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getOriginalDimensions() override;
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getScaleDimensions() override;
		/// <summary>
		/// �����a� �������
		/// </summary>
		/// <returns>������</returns>
		virtual Vector2f getRealDimensions() override;
	};
}