#pragma once
#include "Sudoku.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox13;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::TextBox^ textBox15;
    private: System::Windows::Forms::TextBox^ textBox16;
    private: System::Windows::Forms::TextBox^ textBox17;
    private: System::Windows::Forms::TextBox^ textBox18;
    private: System::Windows::Forms::TextBox^ textBox19;
    private: System::Windows::Forms::TextBox^ textBox20;
    private: System::Windows::Forms::TextBox^ textBox21;
    private: System::Windows::Forms::TextBox^ textBox22;
    private: System::Windows::Forms::TextBox^ textBox23;
    private: System::Windows::Forms::TextBox^ textBox24;
    private: System::Windows::Forms::TextBox^ textBox25;
    private: System::Windows::Forms::TextBox^ textBox26;
    private: System::Windows::Forms::TextBox^ textBox27;
    private: System::Windows::Forms::TextBox^ textBox28;
    private: System::Windows::Forms::TextBox^ textBox29;
    private: System::Windows::Forms::TextBox^ textBox30;
    private: System::Windows::Forms::TextBox^ textBox31;
    private: System::Windows::Forms::TextBox^ textBox32;
    private: System::Windows::Forms::TextBox^ textBox33;
    private: System::Windows::Forms::TextBox^ textBox34;
    private: System::Windows::Forms::TextBox^ textBox35;
    private: System::Windows::Forms::TextBox^ textBox36;
    private: System::Windows::Forms::TextBox^ textBox37;
    private: System::Windows::Forms::TextBox^ textBox38;
    private: System::Windows::Forms::TextBox^ textBox39;
    private: System::Windows::Forms::TextBox^ textBox40;
    private: System::Windows::Forms::TextBox^ textBox41;
    private: System::Windows::Forms::TextBox^ textBox42;
    private: System::Windows::Forms::TextBox^ textBox43;
    private: System::Windows::Forms::TextBox^ textBox44;
    private: System::Windows::Forms::TextBox^ textBox45;
    private: System::Windows::Forms::TextBox^ textBox46;
    private: System::Windows::Forms::TextBox^ textBox47;
    private: System::Windows::Forms::TextBox^ textBox48;
    private: System::Windows::Forms::TextBox^ textBox49;
    private: System::Windows::Forms::TextBox^ textBox50;
    private: System::Windows::Forms::TextBox^ textBox51;
    private: System::Windows::Forms::TextBox^ textBox52;
    private: System::Windows::Forms::TextBox^ textBox53;
    private: System::Windows::Forms::TextBox^ textBox54;
    private: System::Windows::Forms::TextBox^ textBox55;
    private: System::Windows::Forms::TextBox^ textBox56;
    private: System::Windows::Forms::TextBox^ textBox57;
    private: System::Windows::Forms::TextBox^ textBox58;
    private: System::Windows::Forms::TextBox^ textBox59;
    private: System::Windows::Forms::TextBox^ textBox60;
    private: System::Windows::Forms::TextBox^ textBox61;
    private: System::Windows::Forms::TextBox^ textBox62;
    private: System::Windows::Forms::TextBox^ textBox63;
    private: System::Windows::Forms::TextBox^ textBox64;
    private: System::Windows::Forms::TextBox^ textBox65;
    private: System::Windows::Forms::TextBox^ textBox66;
    private: System::Windows::Forms::TextBox^ textBox67;
    private: System::Windows::Forms::TextBox^ textBox68;
    private: System::Windows::Forms::TextBox^ textBox69;
    private: System::Windows::Forms::TextBox^ textBox70;
    private: System::Windows::Forms::TextBox^ textBox71;
    private: System::Windows::Forms::TextBox^ textBox72;
    private: System::Windows::Forms::TextBox^ textBox73;
    private: System::Windows::Forms::TextBox^ textBox74;
    private: System::Windows::Forms::TextBox^ textBox75;
    private: System::Windows::Forms::TextBox^ textBox76;
    private: System::Windows::Forms::TextBox^ textBox77;
    private: System::Windows::Forms::TextBox^ textBox78;
    private: System::Windows::Forms::TextBox^ textBox79;
    private: System::Windows::Forms::TextBox^ textBox80;
    private: System::Windows::Forms::TextBox^ textBox81;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;

private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label1;
    protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->textBox18 = (gcnew System::Windows::Forms::TextBox());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->textBox21 = (gcnew System::Windows::Forms::TextBox());
            this->textBox22 = (gcnew System::Windows::Forms::TextBox());
            this->textBox23 = (gcnew System::Windows::Forms::TextBox());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->textBox26 = (gcnew System::Windows::Forms::TextBox());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->textBox29 = (gcnew System::Windows::Forms::TextBox());
            this->textBox30 = (gcnew System::Windows::Forms::TextBox());
            this->textBox31 = (gcnew System::Windows::Forms::TextBox());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->textBox35 = (gcnew System::Windows::Forms::TextBox());
            this->textBox36 = (gcnew System::Windows::Forms::TextBox());
            this->textBox37 = (gcnew System::Windows::Forms::TextBox());
            this->textBox38 = (gcnew System::Windows::Forms::TextBox());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->textBox40 = (gcnew System::Windows::Forms::TextBox());
            this->textBox41 = (gcnew System::Windows::Forms::TextBox());
            this->textBox42 = (gcnew System::Windows::Forms::TextBox());
            this->textBox43 = (gcnew System::Windows::Forms::TextBox());
            this->textBox44 = (gcnew System::Windows::Forms::TextBox());
            this->textBox45 = (gcnew System::Windows::Forms::TextBox());
            this->textBox46 = (gcnew System::Windows::Forms::TextBox());
            this->textBox47 = (gcnew System::Windows::Forms::TextBox());
            this->textBox48 = (gcnew System::Windows::Forms::TextBox());
            this->textBox49 = (gcnew System::Windows::Forms::TextBox());
            this->textBox50 = (gcnew System::Windows::Forms::TextBox());
            this->textBox51 = (gcnew System::Windows::Forms::TextBox());
            this->textBox52 = (gcnew System::Windows::Forms::TextBox());
            this->textBox53 = (gcnew System::Windows::Forms::TextBox());
            this->textBox54 = (gcnew System::Windows::Forms::TextBox());
            this->textBox55 = (gcnew System::Windows::Forms::TextBox());
            this->textBox56 = (gcnew System::Windows::Forms::TextBox());
            this->textBox57 = (gcnew System::Windows::Forms::TextBox());
            this->textBox58 = (gcnew System::Windows::Forms::TextBox());
            this->textBox59 = (gcnew System::Windows::Forms::TextBox());
            this->textBox60 = (gcnew System::Windows::Forms::TextBox());
            this->textBox61 = (gcnew System::Windows::Forms::TextBox());
            this->textBox62 = (gcnew System::Windows::Forms::TextBox());
            this->textBox63 = (gcnew System::Windows::Forms::TextBox());
            this->textBox64 = (gcnew System::Windows::Forms::TextBox());
            this->textBox65 = (gcnew System::Windows::Forms::TextBox());
            this->textBox66 = (gcnew System::Windows::Forms::TextBox());
            this->textBox67 = (gcnew System::Windows::Forms::TextBox());
            this->textBox68 = (gcnew System::Windows::Forms::TextBox());
            this->textBox69 = (gcnew System::Windows::Forms::TextBox());
            this->textBox70 = (gcnew System::Windows::Forms::TextBox());
            this->textBox71 = (gcnew System::Windows::Forms::TextBox());
            this->textBox72 = (gcnew System::Windows::Forms::TextBox());
            this->textBox73 = (gcnew System::Windows::Forms::TextBox());
            this->textBox74 = (gcnew System::Windows::Forms::TextBox());
            this->textBox75 = (gcnew System::Windows::Forms::TextBox());
            this->textBox76 = (gcnew System::Windows::Forms::TextBox());
            this->textBox77 = (gcnew System::Windows::Forms::TextBox());
            this->textBox78 = (gcnew System::Windows::Forms::TextBox());
            this->textBox79 = (gcnew System::Windows::Forms::TextBox());
            this->textBox80 = (gcnew System::Windows::Forms::TextBox());
            this->textBox81 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->panel9 = (gcnew System::Windows::Forms::Panel());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel9->SuspendLayout();
            this->panel10->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(3, 3);
            this->textBox1->MaxLength = 1;
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(45, 45);
            this->textBox1->TabIndex = 0;
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(54, 3);
            this->textBox2->MaxLength = 1;
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(45, 45);
            this->textBox2->TabIndex = 1;
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox3
            // 
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->Location = System::Drawing::Point(105, 3);
            this->textBox3->MaxLength = 1;
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(45, 45);
            this->textBox3->TabIndex = 2;
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::SeaShell;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox4->Location = System::Drawing::Point(3, 3);
            this->textBox4->MaxLength = 1;
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(45, 45);
            this->textBox4->TabIndex = 3;
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::Color::SeaShell;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox5->Location = System::Drawing::Point(54, 3);
            this->textBox5->MaxLength = 1;
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(45, 45);
            this->textBox5->TabIndex = 4;
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox6
            // 
            this->textBox6->BackColor = System::Drawing::Color::SeaShell;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox6->Location = System::Drawing::Point(105, 3);
            this->textBox6->MaxLength = 1;
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(45, 45);
            this->textBox6->TabIndex = 5;
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox7->Location = System::Drawing::Point(3, 3);
            this->textBox7->MaxLength = 1;
            this->textBox7->Multiline = true;
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(45, 45);
            this->textBox7->TabIndex = 6;
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox8->Location = System::Drawing::Point(54, 3);
            this->textBox8->MaxLength = 1;
            this->textBox8->Multiline = true;
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(45, 45);
            this->textBox8->TabIndex = 7;
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox9
            // 
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox9->Location = System::Drawing::Point(105, 3);
            this->textBox9->MaxLength = 1;
            this->textBox9->Multiline = true;
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(45, 45);
            this->textBox9->TabIndex = 8;
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox10->Location = System::Drawing::Point(3, 54);
            this->textBox10->MaxLength = 1;
            this->textBox10->Multiline = true;
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(45, 45);
            this->textBox10->TabIndex = 9;
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox11
            // 
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox11->Location = System::Drawing::Point(54, 54);
            this->textBox11->MaxLength = 1;
            this->textBox11->Multiline = true;
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(45, 45);
            this->textBox11->TabIndex = 10;
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox12
            // 
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox12->Location = System::Drawing::Point(105, 54);
            this->textBox12->MaxLength = 1;
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(45, 45);
            this->textBox12->TabIndex = 11;
            this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox13
            // 
            this->textBox13->BackColor = System::Drawing::Color::SeaShell;
            this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox13->Location = System::Drawing::Point(3, 54);
            this->textBox13->MaxLength = 1;
            this->textBox13->Multiline = true;
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(45, 45);
            this->textBox13->TabIndex = 12;
            this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox14
            // 
            this->textBox14->BackColor = System::Drawing::Color::SeaShell;
            this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox14->Location = System::Drawing::Point(54, 54);
            this->textBox14->MaxLength = 1;
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(45, 45);
            this->textBox14->TabIndex = 13;
            this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox15
            // 
            this->textBox15->BackColor = System::Drawing::Color::SeaShell;
            this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox15->Location = System::Drawing::Point(105, 54);
            this->textBox15->MaxLength = 1;
            this->textBox15->Multiline = true;
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(45, 45);
            this->textBox15->TabIndex = 14;
            this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox16
            // 
            this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox16->Location = System::Drawing::Point(3, 54);
            this->textBox16->MaxLength = 1;
            this->textBox16->Multiline = true;
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(45, 45);
            this->textBox16->TabIndex = 15;
            this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox17
            // 
            this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox17->Location = System::Drawing::Point(54, 54);
            this->textBox17->MaxLength = 1;
            this->textBox17->Multiline = true;
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(45, 45);
            this->textBox17->TabIndex = 16;
            this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox18
            // 
            this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox18->Location = System::Drawing::Point(105, 54);
            this->textBox18->MaxLength = 1;
            this->textBox18->Multiline = true;
            this->textBox18->Name = L"textBox18";
            this->textBox18->Size = System::Drawing::Size(45, 45);
            this->textBox18->TabIndex = 17;
            this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox19
            // 
            this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox19->Location = System::Drawing::Point(3, 105);
            this->textBox19->MaxLength = 1;
            this->textBox19->Multiline = true;
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(45, 45);
            this->textBox19->TabIndex = 18;
            this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox20
            // 
            this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox20->Location = System::Drawing::Point(54, 105);
            this->textBox20->MaxLength = 1;
            this->textBox20->Multiline = true;
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(45, 45);
            this->textBox20->TabIndex = 19;
            this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox21
            // 
            this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox21->Location = System::Drawing::Point(105, 105);
            this->textBox21->MaxLength = 1;
            this->textBox21->Multiline = true;
            this->textBox21->Name = L"textBox21";
            this->textBox21->Size = System::Drawing::Size(45, 45);
            this->textBox21->TabIndex = 20;
            this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox22
            // 
            this->textBox22->BackColor = System::Drawing::Color::SeaShell;
            this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox22->Location = System::Drawing::Point(3, 105);
            this->textBox22->MaxLength = 1;
            this->textBox22->Multiline = true;
            this->textBox22->Name = L"textBox22";
            this->textBox22->Size = System::Drawing::Size(45, 45);
            this->textBox22->TabIndex = 21;
            this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox23
            // 
            this->textBox23->BackColor = System::Drawing::Color::SeaShell;
            this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox23->Location = System::Drawing::Point(54, 105);
            this->textBox23->MaxLength = 1;
            this->textBox23->Multiline = true;
            this->textBox23->Name = L"textBox23";
            this->textBox23->Size = System::Drawing::Size(45, 45);
            this->textBox23->TabIndex = 22;
            this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox24
            // 
            this->textBox24->BackColor = System::Drawing::Color::SeaShell;
            this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox24->Location = System::Drawing::Point(105, 105);
            this->textBox24->MaxLength = 1;
            this->textBox24->Multiline = true;
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(45, 45);
            this->textBox24->TabIndex = 23;
            this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox25
            // 
            this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox25->Location = System::Drawing::Point(3, 105);
            this->textBox25->MaxLength = 1;
            this->textBox25->Multiline = true;
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(45, 45);
            this->textBox25->TabIndex = 24;
            this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox26
            // 
            this->textBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox26->Location = System::Drawing::Point(54, 105);
            this->textBox26->MaxLength = 1;
            this->textBox26->Multiline = true;
            this->textBox26->Name = L"textBox26";
            this->textBox26->Size = System::Drawing::Size(45, 45);
            this->textBox26->TabIndex = 25;
            this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox27
            // 
            this->textBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox27->Location = System::Drawing::Point(105, 105);
            this->textBox27->MaxLength = 1;
            this->textBox27->Multiline = true;
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(45, 45);
            this->textBox27->TabIndex = 26;
            this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox28
            // 
            this->textBox28->BackColor = System::Drawing::Color::SeaShell;
            this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox28->Location = System::Drawing::Point(3, 3);
            this->textBox28->MaxLength = 1;
            this->textBox28->Multiline = true;
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(45, 45);
            this->textBox28->TabIndex = 27;
            this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox29
            // 
            this->textBox29->BackColor = System::Drawing::Color::SeaShell;
            this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox29->Location = System::Drawing::Point(54, 3);
            this->textBox29->MaxLength = 1;
            this->textBox29->Multiline = true;
            this->textBox29->Name = L"textBox29";
            this->textBox29->Size = System::Drawing::Size(45, 45);
            this->textBox29->TabIndex = 28;
            this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox30
            // 
            this->textBox30->BackColor = System::Drawing::Color::SeaShell;
            this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox30->Location = System::Drawing::Point(105, 3);
            this->textBox30->MaxLength = 1;
            this->textBox30->Multiline = true;
            this->textBox30->Name = L"textBox30";
            this->textBox30->Size = System::Drawing::Size(45, 45);
            this->textBox30->TabIndex = 29;
            this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox31
            // 
            this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox31->Location = System::Drawing::Point(3, 3);
            this->textBox31->MaxLength = 1;
            this->textBox31->Multiline = true;
            this->textBox31->Name = L"textBox31";
            this->textBox31->Size = System::Drawing::Size(45, 45);
            this->textBox31->TabIndex = 30;
            this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox32
            // 
            this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox32->Location = System::Drawing::Point(54, 3);
            this->textBox32->MaxLength = 1;
            this->textBox32->Multiline = true;
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(45, 45);
            this->textBox32->TabIndex = 31;
            this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox33
            // 
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox33->Location = System::Drawing::Point(105, 3);
            this->textBox33->MaxLength = 1;
            this->textBox33->Multiline = true;
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(45, 45);
            this->textBox33->TabIndex = 32;
            this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox34
            // 
            this->textBox34->BackColor = System::Drawing::Color::SeaShell;
            this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox34->Location = System::Drawing::Point(3, 3);
            this->textBox34->MaxLength = 1;
            this->textBox34->Multiline = true;
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(45, 45);
            this->textBox34->TabIndex = 33;
            this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox35
            // 
            this->textBox35->BackColor = System::Drawing::Color::SeaShell;
            this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox35->Location = System::Drawing::Point(54, 3);
            this->textBox35->MaxLength = 1;
            this->textBox35->Multiline = true;
            this->textBox35->Name = L"textBox35";
            this->textBox35->Size = System::Drawing::Size(45, 45);
            this->textBox35->TabIndex = 34;
            this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox36
            // 
            this->textBox36->BackColor = System::Drawing::Color::SeaShell;
            this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox36->Location = System::Drawing::Point(105, 3);
            this->textBox36->MaxLength = 1;
            this->textBox36->Multiline = true;
            this->textBox36->Name = L"textBox36";
            this->textBox36->Size = System::Drawing::Size(45, 45);
            this->textBox36->TabIndex = 35;
            this->textBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox37
            // 
            this->textBox37->BackColor = System::Drawing::Color::SeaShell;
            this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox37->Location = System::Drawing::Point(3, 54);
            this->textBox37->MaxLength = 1;
            this->textBox37->Multiline = true;
            this->textBox37->Name = L"textBox37";
            this->textBox37->Size = System::Drawing::Size(45, 45);
            this->textBox37->TabIndex = 36;
            this->textBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox38
            // 
            this->textBox38->BackColor = System::Drawing::Color::SeaShell;
            this->textBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox38->Location = System::Drawing::Point(54, 54);
            this->textBox38->MaxLength = 1;
            this->textBox38->Multiline = true;
            this->textBox38->Name = L"textBox38";
            this->textBox38->Size = System::Drawing::Size(45, 45);
            this->textBox38->TabIndex = 37;
            this->textBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox39
            // 
            this->textBox39->BackColor = System::Drawing::Color::SeaShell;
            this->textBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox39->Location = System::Drawing::Point(105, 54);
            this->textBox39->MaxLength = 1;
            this->textBox39->Multiline = true;
            this->textBox39->Name = L"textBox39";
            this->textBox39->Size = System::Drawing::Size(45, 45);
            this->textBox39->TabIndex = 38;
            this->textBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox40
            // 
            this->textBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox40->Location = System::Drawing::Point(3, 54);
            this->textBox40->MaxLength = 1;
            this->textBox40->Multiline = true;
            this->textBox40->Name = L"textBox40";
            this->textBox40->Size = System::Drawing::Size(45, 45);
            this->textBox40->TabIndex = 39;
            this->textBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox41
            // 
            this->textBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox41->Location = System::Drawing::Point(54, 54);
            this->textBox41->MaxLength = 1;
            this->textBox41->Multiline = true;
            this->textBox41->Name = L"textBox41";
            this->textBox41->Size = System::Drawing::Size(45, 45);
            this->textBox41->TabIndex = 40;
            this->textBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox42
            // 
            this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox42->Location = System::Drawing::Point(105, 54);
            this->textBox42->MaxLength = 1;
            this->textBox42->Multiline = true;
            this->textBox42->Name = L"textBox42";
            this->textBox42->Size = System::Drawing::Size(45, 45);
            this->textBox42->TabIndex = 41;
            this->textBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox43
            // 
            this->textBox43->BackColor = System::Drawing::Color::SeaShell;
            this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox43->Location = System::Drawing::Point(3, 54);
            this->textBox43->MaxLength = 1;
            this->textBox43->Multiline = true;
            this->textBox43->Name = L"textBox43";
            this->textBox43->Size = System::Drawing::Size(45, 45);
            this->textBox43->TabIndex = 42;
            this->textBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox44
            // 
            this->textBox44->BackColor = System::Drawing::Color::SeaShell;
            this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox44->Location = System::Drawing::Point(54, 54);
            this->textBox44->MaxLength = 1;
            this->textBox44->Multiline = true;
            this->textBox44->Name = L"textBox44";
            this->textBox44->Size = System::Drawing::Size(45, 45);
            this->textBox44->TabIndex = 43;
            this->textBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox45
            // 
            this->textBox45->BackColor = System::Drawing::Color::SeaShell;
            this->textBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox45->Location = System::Drawing::Point(105, 54);
            this->textBox45->MaxLength = 1;
            this->textBox45->Multiline = true;
            this->textBox45->Name = L"textBox45";
            this->textBox45->Size = System::Drawing::Size(45, 45);
            this->textBox45->TabIndex = 44;
            this->textBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox46
            // 
            this->textBox46->BackColor = System::Drawing::Color::SeaShell;
            this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox46->Location = System::Drawing::Point(3, 105);
            this->textBox46->MaxLength = 1;
            this->textBox46->Multiline = true;
            this->textBox46->Name = L"textBox46";
            this->textBox46->Size = System::Drawing::Size(45, 45);
            this->textBox46->TabIndex = 45;
            this->textBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox47
            // 
            this->textBox47->BackColor = System::Drawing::Color::SeaShell;
            this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox47->Location = System::Drawing::Point(54, 105);
            this->textBox47->MaxLength = 1;
            this->textBox47->Multiline = true;
            this->textBox47->Name = L"textBox47";
            this->textBox47->Size = System::Drawing::Size(45, 45);
            this->textBox47->TabIndex = 46;
            this->textBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox48
            // 
            this->textBox48->BackColor = System::Drawing::Color::SeaShell;
            this->textBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox48->Location = System::Drawing::Point(105, 105);
            this->textBox48->MaxLength = 1;
            this->textBox48->Multiline = true;
            this->textBox48->Name = L"textBox48";
            this->textBox48->Size = System::Drawing::Size(45, 45);
            this->textBox48->TabIndex = 47;
            this->textBox48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox49
            // 
            this->textBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox49->Location = System::Drawing::Point(3, 105);
            this->textBox49->MaxLength = 1;
            this->textBox49->Multiline = true;
            this->textBox49->Name = L"textBox49";
            this->textBox49->Size = System::Drawing::Size(45, 45);
            this->textBox49->TabIndex = 48;
            this->textBox49->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox50
            // 
            this->textBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox50->Location = System::Drawing::Point(54, 105);
            this->textBox50->MaxLength = 1;
            this->textBox50->Multiline = true;
            this->textBox50->Name = L"textBox50";
            this->textBox50->Size = System::Drawing::Size(45, 45);
            this->textBox50->TabIndex = 49;
            this->textBox50->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox51
            // 
            this->textBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox51->Location = System::Drawing::Point(105, 105);
            this->textBox51->MaxLength = 1;
            this->textBox51->Multiline = true;
            this->textBox51->Name = L"textBox51";
            this->textBox51->Size = System::Drawing::Size(45, 45);
            this->textBox51->TabIndex = 50;
            this->textBox51->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox52
            // 
            this->textBox52->BackColor = System::Drawing::Color::SeaShell;
            this->textBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox52->Location = System::Drawing::Point(3, 105);
            this->textBox52->MaxLength = 1;
            this->textBox52->Multiline = true;
            this->textBox52->Name = L"textBox52";
            this->textBox52->Size = System::Drawing::Size(45, 45);
            this->textBox52->TabIndex = 51;
            this->textBox52->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox53
            // 
            this->textBox53->BackColor = System::Drawing::Color::SeaShell;
            this->textBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox53->Location = System::Drawing::Point(54, 105);
            this->textBox53->MaxLength = 1;
            this->textBox53->Multiline = true;
            this->textBox53->Name = L"textBox53";
            this->textBox53->Size = System::Drawing::Size(45, 45);
            this->textBox53->TabIndex = 52;
            this->textBox53->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox54
            // 
            this->textBox54->BackColor = System::Drawing::Color::SeaShell;
            this->textBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox54->Location = System::Drawing::Point(105, 105);
            this->textBox54->MaxLength = 1;
            this->textBox54->Multiline = true;
            this->textBox54->Name = L"textBox54";
            this->textBox54->Size = System::Drawing::Size(45, 45);
            this->textBox54->TabIndex = 53;
            this->textBox54->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox55
            // 
            this->textBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox55->Location = System::Drawing::Point(3, 3);
            this->textBox55->MaxLength = 1;
            this->textBox55->Multiline = true;
            this->textBox55->Name = L"textBox55";
            this->textBox55->Size = System::Drawing::Size(45, 45);
            this->textBox55->TabIndex = 54;
            this->textBox55->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox56
            // 
            this->textBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox56->Location = System::Drawing::Point(54, 3);
            this->textBox56->MaxLength = 1;
            this->textBox56->Multiline = true;
            this->textBox56->Name = L"textBox56";
            this->textBox56->Size = System::Drawing::Size(45, 45);
            this->textBox56->TabIndex = 55;
            this->textBox56->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox57
            // 
            this->textBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox57->Location = System::Drawing::Point(105, 3);
            this->textBox57->MaxLength = 1;
            this->textBox57->Multiline = true;
            this->textBox57->Name = L"textBox57";
            this->textBox57->Size = System::Drawing::Size(45, 45);
            this->textBox57->TabIndex = 56;
            this->textBox57->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox58
            // 
            this->textBox58->BackColor = System::Drawing::Color::SeaShell;
            this->textBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox58->Location = System::Drawing::Point(3, 3);
            this->textBox58->MaxLength = 1;
            this->textBox58->Multiline = true;
            this->textBox58->Name = L"textBox58";
            this->textBox58->Size = System::Drawing::Size(45, 45);
            this->textBox58->TabIndex = 57;
            this->textBox58->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox59
            // 
            this->textBox59->BackColor = System::Drawing::Color::SeaShell;
            this->textBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox59->Location = System::Drawing::Point(54, 3);
            this->textBox59->MaxLength = 1;
            this->textBox59->Multiline = true;
            this->textBox59->Name = L"textBox59";
            this->textBox59->Size = System::Drawing::Size(45, 45);
            this->textBox59->TabIndex = 58;
            this->textBox59->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox60
            // 
            this->textBox60->BackColor = System::Drawing::Color::SeaShell;
            this->textBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox60->Location = System::Drawing::Point(105, 3);
            this->textBox60->MaxLength = 1;
            this->textBox60->Multiline = true;
            this->textBox60->Name = L"textBox60";
            this->textBox60->Size = System::Drawing::Size(45, 45);
            this->textBox60->TabIndex = 59;
            this->textBox60->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox61
            // 
            this->textBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox61->Location = System::Drawing::Point(3, 3);
            this->textBox61->MaxLength = 1;
            this->textBox61->Multiline = true;
            this->textBox61->Name = L"textBox61";
            this->textBox61->Size = System::Drawing::Size(45, 45);
            this->textBox61->TabIndex = 60;
            this->textBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox62
            // 
            this->textBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox62->Location = System::Drawing::Point(54, 3);
            this->textBox62->MaxLength = 1;
            this->textBox62->Multiline = true;
            this->textBox62->Name = L"textBox62";
            this->textBox62->Size = System::Drawing::Size(45, 45);
            this->textBox62->TabIndex = 61;
            this->textBox62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox63
            // 
            this->textBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox63->Location = System::Drawing::Point(105, 3);
            this->textBox63->MaxLength = 1;
            this->textBox63->Multiline = true;
            this->textBox63->Name = L"textBox63";
            this->textBox63->Size = System::Drawing::Size(45, 45);
            this->textBox63->TabIndex = 62;
            this->textBox63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox64
            // 
            this->textBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox64->Location = System::Drawing::Point(3, 54);
            this->textBox64->MaxLength = 1;
            this->textBox64->Multiline = true;
            this->textBox64->Name = L"textBox64";
            this->textBox64->Size = System::Drawing::Size(45, 45);
            this->textBox64->TabIndex = 63;
            this->textBox64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox65
            // 
            this->textBox65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox65->Location = System::Drawing::Point(54, 54);
            this->textBox65->MaxLength = 1;
            this->textBox65->Multiline = true;
            this->textBox65->Name = L"textBox65";
            this->textBox65->Size = System::Drawing::Size(45, 45);
            this->textBox65->TabIndex = 64;
            this->textBox65->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox66
            // 
            this->textBox66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox66->Location = System::Drawing::Point(105, 54);
            this->textBox66->MaxLength = 1;
            this->textBox66->Multiline = true;
            this->textBox66->Name = L"textBox66";
            this->textBox66->Size = System::Drawing::Size(45, 45);
            this->textBox66->TabIndex = 65;
            this->textBox66->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox67
            // 
            this->textBox67->BackColor = System::Drawing::Color::SeaShell;
            this->textBox67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox67->Location = System::Drawing::Point(3, 54);
            this->textBox67->MaxLength = 1;
            this->textBox67->Multiline = true;
            this->textBox67->Name = L"textBox67";
            this->textBox67->Size = System::Drawing::Size(45, 45);
            this->textBox67->TabIndex = 66;
            this->textBox67->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox68
            // 
            this->textBox68->BackColor = System::Drawing::Color::SeaShell;
            this->textBox68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox68->Location = System::Drawing::Point(54, 54);
            this->textBox68->MaxLength = 1;
            this->textBox68->Multiline = true;
            this->textBox68->Name = L"textBox68";
            this->textBox68->Size = System::Drawing::Size(45, 45);
            this->textBox68->TabIndex = 67;
            this->textBox68->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox69
            // 
            this->textBox69->BackColor = System::Drawing::Color::SeaShell;
            this->textBox69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox69->Location = System::Drawing::Point(105, 54);
            this->textBox69->MaxLength = 1;
            this->textBox69->Multiline = true;
            this->textBox69->Name = L"textBox69";
            this->textBox69->Size = System::Drawing::Size(45, 45);
            this->textBox69->TabIndex = 68;
            this->textBox69->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox70
            // 
            this->textBox70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox70->Location = System::Drawing::Point(3, 54);
            this->textBox70->MaxLength = 1;
            this->textBox70->Multiline = true;
            this->textBox70->Name = L"textBox70";
            this->textBox70->Size = System::Drawing::Size(45, 45);
            this->textBox70->TabIndex = 69;
            this->textBox70->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox71
            // 
            this->textBox71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox71->Location = System::Drawing::Point(54, 54);
            this->textBox71->MaxLength = 1;
            this->textBox71->Multiline = true;
            this->textBox71->Name = L"textBox71";
            this->textBox71->Size = System::Drawing::Size(45, 45);
            this->textBox71->TabIndex = 70;
            this->textBox71->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox72
            // 
            this->textBox72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox72->Location = System::Drawing::Point(105, 54);
            this->textBox72->MaxLength = 1;
            this->textBox72->Multiline = true;
            this->textBox72->Name = L"textBox72";
            this->textBox72->Size = System::Drawing::Size(45, 45);
            this->textBox72->TabIndex = 71;
            this->textBox72->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox73
            // 
            this->textBox73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox73->Location = System::Drawing::Point(3, 105);
            this->textBox73->MaxLength = 1;
            this->textBox73->Multiline = true;
            this->textBox73->Name = L"textBox73";
            this->textBox73->Size = System::Drawing::Size(45, 45);
            this->textBox73->TabIndex = 72;
            this->textBox73->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox74
            // 
            this->textBox74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox74->Location = System::Drawing::Point(54, 105);
            this->textBox74->MaxLength = 1;
            this->textBox74->Multiline = true;
            this->textBox74->Name = L"textBox74";
            this->textBox74->Size = System::Drawing::Size(45, 45);
            this->textBox74->TabIndex = 73;
            this->textBox74->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox75
            // 
            this->textBox75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox75->Location = System::Drawing::Point(105, 105);
            this->textBox75->MaxLength = 1;
            this->textBox75->Multiline = true;
            this->textBox75->Name = L"textBox75";
            this->textBox75->Size = System::Drawing::Size(45, 45);
            this->textBox75->TabIndex = 74;
            this->textBox75->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox76
            // 
            this->textBox76->BackColor = System::Drawing::Color::SeaShell;
            this->textBox76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox76->Location = System::Drawing::Point(3, 105);
            this->textBox76->MaxLength = 1;
            this->textBox76->Multiline = true;
            this->textBox76->Name = L"textBox76";
            this->textBox76->Size = System::Drawing::Size(45, 45);
            this->textBox76->TabIndex = 75;
            this->textBox76->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox77
            // 
            this->textBox77->BackColor = System::Drawing::Color::SeaShell;
            this->textBox77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox77->Location = System::Drawing::Point(54, 105);
            this->textBox77->MaxLength = 1;
            this->textBox77->Multiline = true;
            this->textBox77->Name = L"textBox77";
            this->textBox77->Size = System::Drawing::Size(45, 45);
            this->textBox77->TabIndex = 76;
            this->textBox77->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox78
            // 
            this->textBox78->BackColor = System::Drawing::Color::SeaShell;
            this->textBox78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox78->Location = System::Drawing::Point(105, 105);
            this->textBox78->MaxLength = 1;
            this->textBox78->Multiline = true;
            this->textBox78->Name = L"textBox78";
            this->textBox78->Size = System::Drawing::Size(45, 45);
            this->textBox78->TabIndex = 77;
            this->textBox78->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox79
            // 
            this->textBox79->BackColor = System::Drawing::SystemColors::Window;
            this->textBox79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox79->Location = System::Drawing::Point(3, 105);
            this->textBox79->MaxLength = 1;
            this->textBox79->Multiline = true;
            this->textBox79->Name = L"textBox79";
            this->textBox79->Size = System::Drawing::Size(45, 45);
            this->textBox79->TabIndex = 78;
            this->textBox79->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox80
            // 
            this->textBox80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox80->Location = System::Drawing::Point(54, 105);
            this->textBox80->MaxLength = 1;
            this->textBox80->Multiline = true;
            this->textBox80->Name = L"textBox80";
            this->textBox80->Size = System::Drawing::Size(45, 45);
            this->textBox80->TabIndex = 79;
            this->textBox80->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox81
            // 
            this->textBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox81->Location = System::Drawing::Point(105, 105);
            this->textBox81->MaxLength = 1;
            this->textBox81->Multiline = true;
            this->textBox81->Name = L"textBox81";
            this->textBox81->Size = System::Drawing::Size(45, 45);
            this->textBox81->TabIndex = 80;
            this->textBox81->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(178, 498);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(147, 36);
            this->button1->TabIndex = 81;
            this->button1->Text = L"Сгенерировать позицию";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(331, 498);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(153, 36);
            this->button2->TabIndex = 82;
            this->button2->Text = L"Проверить решение";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(13, 498);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(153, 36);
            this->button3->TabIndex = 83;
            this->button3->Text = L"Решить позицию";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // comboBox1
            // 
            this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Лёгкий", L"Средний", L"Сложный" });
            this->comboBox1->Location = System::Drawing::Point(178, 593);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(147, 21);
            this->comboBox1->TabIndex = 84;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // 
            // panel1
            // 
            this->panel1->AutoSize = true;
            this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Controls->Add(this->textBox12);
            this->panel1->Controls->Add(this->textBox1);
            this->panel1->Controls->Add(this->textBox2);
            this->panel1->Controls->Add(this->textBox3);
            this->panel1->Controls->Add(this->textBox10);
            this->panel1->Controls->Add(this->textBox11);
            this->panel1->Controls->Add(this->textBox19);
            this->panel1->Controls->Add(this->textBox20);
            this->panel1->Controls->Add(this->textBox21);
            this->panel1->Location = System::Drawing::Point(3, 3);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(155, 155);
            this->panel1->TabIndex = 85;
            // 
            // panel2
            // 
            this->panel2->AutoSize = true;
            this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel2->Controls->Add(this->textBox6);
            this->panel2->Controls->Add(this->textBox4);
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->textBox13);
            this->panel2->Controls->Add(this->textBox14);
            this->panel2->Controls->Add(this->textBox15);
            this->panel2->Controls->Add(this->textBox22);
            this->panel2->Controls->Add(this->textBox23);
            this->panel2->Controls->Add(this->textBox24);
            this->panel2->Location = System::Drawing::Point(159, 3);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(155, 155);
            this->panel2->TabIndex = 86;
            // 
            // panel3
            // 
            this->panel3->AutoSize = true;
            this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->textBox9);
            this->panel3->Controls->Add(this->textBox7);
            this->panel3->Controls->Add(this->textBox8);
            this->panel3->Controls->Add(this->textBox16);
            this->panel3->Controls->Add(this->textBox17);
            this->panel3->Controls->Add(this->textBox18);
            this->panel3->Controls->Add(this->textBox25);
            this->panel3->Controls->Add(this->textBox26);
            this->panel3->Controls->Add(this->textBox27);
            this->panel3->Location = System::Drawing::Point(315, 3);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(155, 155);
            this->panel3->TabIndex = 87;
            // 
            // panel4
            // 
            this->panel4->AutoSize = true;
            this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->textBox30);
            this->panel4->Controls->Add(this->textBox28);
            this->panel4->Controls->Add(this->textBox29);
            this->panel4->Controls->Add(this->textBox37);
            this->panel4->Controls->Add(this->textBox38);
            this->panel4->Controls->Add(this->textBox39);
            this->panel4->Controls->Add(this->textBox46);
            this->panel4->Controls->Add(this->textBox47);
            this->panel4->Controls->Add(this->textBox48);
            this->panel4->Location = System::Drawing::Point(3, 159);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(155, 155);
            this->panel4->TabIndex = 88;
            // 
            // panel5
            // 
            this->panel5->AutoSize = true;
            this->panel5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->textBox33);
            this->panel5->Controls->Add(this->textBox31);
            this->panel5->Controls->Add(this->textBox32);
            this->panel5->Controls->Add(this->textBox40);
            this->panel5->Controls->Add(this->textBox41);
            this->panel5->Controls->Add(this->textBox42);
            this->panel5->Controls->Add(this->textBox49);
            this->panel5->Controls->Add(this->textBox50);
            this->panel5->Controls->Add(this->textBox51);
            this->panel5->Location = System::Drawing::Point(159, 159);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(155, 155);
            this->panel5->TabIndex = 89;
            // 
            // panel6
            // 
            this->panel6->AutoSize = true;
            this->panel6->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel6->Controls->Add(this->textBox36);
            this->panel6->Controls->Add(this->textBox34);
            this->panel6->Controls->Add(this->textBox35);
            this->panel6->Controls->Add(this->textBox43);
            this->panel6->Controls->Add(this->textBox44);
            this->panel6->Controls->Add(this->textBox45);
            this->panel6->Controls->Add(this->textBox52);
            this->panel6->Controls->Add(this->textBox53);
            this->panel6->Controls->Add(this->textBox54);
            this->panel6->Location = System::Drawing::Point(315, 159);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(155, 155);
            this->panel6->TabIndex = 90;
            // 
            // panel7
            // 
            this->panel7->AutoSize = true;
            this->panel7->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel7->Controls->Add(this->textBox57);
            this->panel7->Controls->Add(this->textBox55);
            this->panel7->Controls->Add(this->textBox56);
            this->panel7->Controls->Add(this->textBox64);
            this->panel7->Controls->Add(this->textBox65);
            this->panel7->Controls->Add(this->textBox66);
            this->panel7->Controls->Add(this->textBox73);
            this->panel7->Controls->Add(this->textBox74);
            this->panel7->Controls->Add(this->textBox75);
            this->panel7->Location = System::Drawing::Point(3, 315);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(155, 155);
            this->panel7->TabIndex = 91;
            // 
            // panel8
            // 
            this->panel8->AutoSize = true;
            this->panel8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel8->Controls->Add(this->textBox60);
            this->panel8->Controls->Add(this->textBox58);
            this->panel8->Controls->Add(this->textBox59);
            this->panel8->Controls->Add(this->textBox67);
            this->panel8->Controls->Add(this->textBox68);
            this->panel8->Controls->Add(this->textBox69);
            this->panel8->Controls->Add(this->textBox76);
            this->panel8->Controls->Add(this->textBox77);
            this->panel8->Controls->Add(this->textBox78);
            this->panel8->Location = System::Drawing::Point(159, 315);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(155, 155);
            this->panel8->TabIndex = 92;
            // 
            // panel9
            // 
            this->panel9->AutoSize = true;
            this->panel9->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel9->Controls->Add(this->textBox81);
            this->panel9->Controls->Add(this->textBox61);
            this->panel9->Controls->Add(this->textBox62);
            this->panel9->Controls->Add(this->textBox63);
            this->panel9->Controls->Add(this->textBox70);
            this->panel9->Controls->Add(this->textBox71);
            this->panel9->Controls->Add(this->textBox72);
            this->panel9->Controls->Add(this->textBox79);
            this->panel9->Controls->Add(this->textBox80);
            this->panel9->Location = System::Drawing::Point(315, 315);
            this->panel9->Name = L"panel9";
            this->panel9->Size = System::Drawing::Size(155, 155);
            this->panel9->TabIndex = 93;
            // 
            // panel10
            // 
            this->panel10->AutoSize = true;
            this->panel10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel10->Controls->Add(this->panel1);
            this->panel10->Controls->Add(this->panel9);
            this->panel10->Controls->Add(this->panel2);
            this->panel10->Controls->Add(this->panel8);
            this->panel10->Controls->Add(this->panel3);
            this->panel10->Controls->Add(this->panel7);
            this->panel10->Controls->Add(this->panel4);
            this->panel10->Controls->Add(this->panel6);
            this->panel10->Controls->Add(this->panel5);
            this->panel10->Location = System::Drawing::Point(13, 12);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(477, 477);
            this->panel10->TabIndex = 94;
            // 
            // label1
            // 
            this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
            this->label1->Location = System::Drawing::Point(178, 554);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(147, 36);
            this->label1->TabIndex = 95;
            this->label1->Text = L"Выберите сложность генерации:";
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(502, 627);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->panel10);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel7->PerformLayout();
            this->panel8->ResumeLayout(false);
            this->panel8->PerformLayout();
            this->panel9->ResumeLayout(false);
            this->panel9->PerformLayout();
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        int complexity = 20;
        int* start = new int[81];
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    array<TextBox^>^ textBox = gcnew array<TextBox^>(81) {
        textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9,
            textBox10, textBox11, textBox12, textBox13, textBox14, textBox15, textBox16, textBox17, textBox18,
            textBox19, textBox20, textBox21, textBox22, textBox23, textBox24, textBox25, textBox26, textBox27,
            textBox28, textBox29, textBox30, textBox31, textBox32, textBox33, textBox34, textBox35, textBox36,
            textBox37, textBox38, textBox39, textBox40, textBox41, textBox42, textBox43, textBox44, textBox45,
            textBox46, textBox47, textBox48, textBox49, textBox50, textBox51, textBox52, textBox53, textBox54,
            textBox55, textBox56, textBox57, textBox58, textBox59, textBox60, textBox61, textBox62, textBox63,
            textBox64, textBox65, textBox66, textBox67, textBox68, textBox69, textBox70, textBox71, textBox72,
            textBox73, textBox74, textBox75, textBox76, textBox77, textBox78, textBox79, textBox80, textBox81
    };

    for (int i = 0; i < 81; i++) {
        textBox[i]->ReadOnly = false;
        textBox[i]->Enabled = true;
        textBox[i]->Text = "";
        textBox[i]->BackColor = System::Drawing::SystemColors::Window;
    }

    Sudoku sudoku = Sudoku(complexity);
    sudoku.fillValues();

    int sud[81];
    int** values = sudoku.getValues();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sud[i * 9 + j] = *(*(values + i) + j);
            start[i * 9 + j] = *(*(values + i) + j);
        }
    }

    for (int i = 0; i < 81; i++) {
        if (sud[i] != 0) {
            textBox[i]->ReadOnly = true;
            textBox[i]->Text = sud[i].ToString();
            textBox[i]->Enabled = false;
            textBox[i]->BackColor = System::Drawing::Color::LightGray;
        }

        else {
            textBox[i]->ReadOnly = false;
            textBox[i]->Text = "";
        }
    }
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    array<TextBox^>^ textBox = gcnew array<TextBox^>(81) {
        textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9,
            textBox10, textBox11, textBox12, textBox13, textBox14, textBox15, textBox16, textBox17, textBox18,
            textBox19, textBox20, textBox21, textBox22, textBox23, textBox24, textBox25, textBox26, textBox27,
            textBox28, textBox29, textBox30, textBox31, textBox32, textBox33, textBox34, textBox35, textBox36,
            textBox37, textBox38, textBox39, textBox40, textBox41, textBox42, textBox43, textBox44, textBox45,
            textBox46, textBox47, textBox48, textBox49, textBox50, textBox51, textBox52, textBox53, textBox54,
            textBox55, textBox56, textBox57, textBox58, textBox59, textBox60, textBox61, textBox62, textBox63,
            textBox64, textBox65, textBox66, textBox67, textBox68, textBox69, textBox70, textBox71, textBox72,
            textBox73, textBox74, textBox75, textBox76, textBox77, textBox78, textBox79, textBox80, textBox81
    };

    for (int i = 0; i < 81; i++) {
        if (textBox[i]->Text->Length > 0) {
            textBox[i]->BackColor = System::Drawing::Color::LightGray;
        }

        else {
            textBox[i]->BackColor = System::Drawing::SystemColors::Window;
        }
    }

    int position[81];
    for (int i = 0; i < 81; i++) {
        if (textBox[i]->Text->Length > 0) {
            position[i] = Convert::ToInt32(textBox[i]->Text);
        }

        else {
            position[i] = 0;
        }
    }

    Sudoku sudoku = Sudoku(position);
    sudoku.solveSudoku();

    int sud[81];
    int** values = sudoku.getValues();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sud[i * 9 + j] = *(*(values + i) + j);
        }
    }

    for (int i = 0; i < 81; i++) {
        if (sud[i] != 0) {
            textBox[i]->ReadOnly = true;
            textBox[i]->Text = sud[i].ToString();
            textBox[i]->Enabled = false;
        }
    }
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    array<TextBox^>^ textBox = gcnew array<TextBox^>(81) {
        textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7, textBox8, textBox9,
            textBox10, textBox11, textBox12, textBox13, textBox14, textBox15, textBox16, textBox17, textBox18,
            textBox19, textBox20, textBox21, textBox22, textBox23, textBox24, textBox25, textBox26, textBox27,
            textBox28, textBox29, textBox30, textBox31, textBox32, textBox33, textBox34, textBox35, textBox36,
            textBox37, textBox38, textBox39, textBox40, textBox41, textBox42, textBox43, textBox44, textBox45,
            textBox46, textBox47, textBox48, textBox49, textBox50, textBox51, textBox52, textBox53, textBox54,
            textBox55, textBox56, textBox57, textBox58, textBox59, textBox60, textBox61, textBox62, textBox63,
            textBox64, textBox65, textBox66, textBox67, textBox68, textBox69, textBox70, textBox71, textBox72,
            textBox73, textBox74, textBox75, textBox76, textBox77, textBox78, textBox79, textBox80, textBox81
    };

    int position[81];
    for (int i = 0; i < 81; i++) {
        if (textBox[i]->Text->Length > 0 && !System::Char::IsDigit(textBox[i]->Text[0])) {
            MessageBox::Show("Пожалуйста, вводите только цифры.", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        else if (textBox[i]->Text->Length > 0) {
            position[i] = Convert::ToInt32(textBox[i]->Text);
        }

        else {
            position[i] = 0;
        }
    }

    Sudoku sudoku = Sudoku(start);
    sudoku.solveSudoku();

    int sud[81];
    int** values = sudoku.getValues();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sud[i * 9 + j] = *(*(values + i) + j);
        }
    }

    for (int i = 0; i < 81; i++) {
        if (sud[i] != position[i]) {
            textBox[i]->BackColor = System::Drawing::Color::Coral;
        }

        else if (textBox[i]->BackColor != System::Drawing::Color::LightGray) {
            textBox[i]->BackColor = System::Drawing::Color::LightGreen;
        }
    }
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    String^ selectedValue = comboBox1->SelectedItem->ToString();

    if (selectedValue == "Лёгкий") {
        complexity = 20;
    }

    else if (selectedValue == "Средний") {
        complexity = 40;
    }

    else if (selectedValue == "Сложный") {
        complexity = 60;
    }
}
};
}
